#ifndef STUDENTID_H
#define STUDENTID_H

#include <bits/stdc++.h>
#include "../Helper/Constants.h"

using namespace std;

class StudentID {
    private:
        char identifier;
        unsigned int collegeYear;
        string majorID;
        unsigned int studentOrder;

    public:
        StudentID (char __identifier = '#', unsigned int __collegeYear = 0, string __majorID = "####", unsigned int __studentOrder = 0) {
            identifier = __identifier;
            collegeYear = __collegeYear;
            // majorID = __majorID;
            for (pair < string, string > item: majorIDs) {
                if (__majorID == item.first) {
                    majorID = __majorID;
                }
            }
            studentOrder = __studentOrder;
        }

        // N21DCCN053
        StudentID (string studentID) {
            if (studentID.length() != 10) {
                return;
            }

            char __identifier = studentID[0];
            unsigned int __collegeYear = stoi(string(studentID.begin() + 1, studentID.begin() + 3), nullptr, 10);
            string __majorID = string(studentID.begin() + 3, studentID.begin() + 7);
            unsigned int __studentOrder = stoi(string(studentID.begin() + 7, studentID.end()), nullptr, 10);

            identifier = '#';
            if (__identifier == 'N' || __identifier == 'B') {
                identifier = __identifier;
            }

            collegeYear = 0;
            if (__collegeYear > 0) {
                collegeYear = __collegeYear;
            }

            majorID = "####";
            for (pair < string, string > item: majorIDs) {
                if (item.first == __majorID) {
                    majorID = __majorID;
                    break;
                }
            }

            studentOrder = 0;
            if (__studentOrder > 0) {
                studentOrder = __studentOrder;
            }
        }

        void setIdentifier(char __identifier) {
            this->identifier = __identifier;
        }

        void setCollegeYear(unsigned int __collegeYear) {
            this->collegeYear = __collegeYear;
        }

        void setMajorID(string __majorID) {
            this->majorID = __majorID;
        }

        void setStudentOrder(unsigned int __studentOrder) {
            this->studentOrder = __studentOrder;
        }

        char getIdentifier() {
            return this->identifier;
        }

        unsigned int getCollegeYear() {
            return this->collegeYear;
        }

        string getMajorID() {
            return this->majorID;
        }

        unsigned int getStudentOrder() {
            return this->studentOrder;
        }

        string stringify() {
            string result = "";
            result += this->identifier;
            if (this->collegeYear < 10) {
                result += "0";
            }
            result += to_string(this->collegeYear);
            result += this->majorID;
            if (this->studentOrder < 10) {
                result += "00";
            }
            else if (this->studentOrder < 99) {
                result += "0";
            }
            result += to_string(this->studentOrder);
            return result;
        }

        friend istream &operator >> (istream &cin, StudentID &studentID) {
            string input;
            cin >> input;

            if (input.length() != 10) {
                return cin;
            }

            char __identifier = input[0];
            unsigned int __collegeYear = stoi(string(input.begin() + 1, input.begin() + 3), nullptr, 10);
            string __majorID = string(input.begin() + 3, input.begin() + 7);
            unsigned int __studentOrder = stoi(string(input.begin() + 7, input.end()), nullptr, 10);

            studentID.setIdentifier('#');
            if (__identifier == 'N' || __identifier == 'B') {
                studentID.setIdentifier(__identifier);
            }

            studentID.setCollegeYear(0);
            if (__collegeYear > 0) {
                studentID.setCollegeYear(__collegeYear);
            }

            studentID.setMajorID("####");
            for (pair < string, string > item: majorIDs) {
                if (item.first == __majorID) {
                    studentID.setMajorID(__majorID);
                    break;
                }
            }

            studentID.setStudentOrder(0);
            if (__studentOrder > 0) {
                studentID.setStudentOrder(__studentOrder);
            }

            return cin;
        }

        friend ostream &operator << (ostream &cout, StudentID studentID) {
            cout << "Student's ID: " << studentID.stringify();
            return cout;
        }
};

#endif