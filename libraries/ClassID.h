#ifndef CLASSID_H
#define CLASSID_H

#include <bits/stdc++.h>
#include "./Constants.h"

using namespace std;

class ClassID {
    private:
        char classIdentifier;
        unsigned int collegeYear;
        string classIdentity;
        unsigned int classOrder;
        char baseIdentifier;

    public:
        ClassID (char __classIdentifier = '#', unsigned int __collegeYear = 0, string __classIdentity = "####", unsigned int __classOrder = 0, char __baseIdentifier = '#') {
            classIdentifier = __classIdentifier;
            collegeYear = __collegeYear;
            for (pair < string, string > item: classIdentities) {
                if (__classIdentity == item.first) {
                    classIdentity = __classIdentity;
                }
            }
            classOrder = __classOrder;
            baseIdentifier = __baseIdentifier;
        }

        ClassID (string classID) {
            if (classID.length() != 11) {
                return;
            }

            char __classIdentifier = classID[0];
            unsigned int __collegeYear = stoi(string(classID.begin() + 1, classID.begin() + 3), nullptr, 10);
            string __classIdentity = string(classID.begin() + 3, classID.begin() + 7);
            unsigned int __classOrder = stoi(string(classID.begin() + 8, classID.begin() + 10), nullptr, 10);
            char __baseIdentifier = classID[classID.length() - 1];

            if (__classIdentifier == 'D') {
                classIdentifier = __classIdentifier;
            }

            if (__collegeYear > 0) {
                collegeYear = __collegeYear;
            }

            classIdentity = "####";
            for (pair < string, string > item: classIdentities) {
                if (item.first == __classIdentity) {
                    classIdentity = __classIdentity;
                    break;
                }
            }

            if (__classOrder > 0) {
                classOrder = __classOrder;
            }

            if (__baseIdentifier == 'B' || __baseIdentifier == 'N') {
                baseIdentifier = __baseIdentifier;
            }
        }

        void setClassIdentifier(char __classIdentifier) {
            this->classIdentifier = __classIdentifier;
        }

        void setCollegeYear(unsigned int __collegeYear) {
            this->collegeYear = __collegeYear;
        }

        void setclassIdentity(string __classIdentity) {
            this->classIdentity = __classIdentity;
        }

        void setClassOrder(unsigned int __classOrder) {
            this->classOrder = __classOrder;
        }

        void setBaseIdentifier(char __baseIdentifier) {
            this->baseIdentifier = __baseIdentifier;
        }

        char getClassIdentifier() {
            return this->classIdentifier;
        }

        unsigned int getCollegeYear() {
            return this->collegeYear;
        }

        string getclassIdentity() {
            return this->classIdentity;
        }

        unsigned int getClassOrder() {
            return this->classOrder;
        }

        char getBaseIdentifier() {
            return this->baseIdentifier;
        }

        string stringify() {
            string result = "";
            result += this->classIdentifier;
            if (this->collegeYear < 10) {
                result += "0";
            }
            result += to_string(this->collegeYear);
            result += this->classIdentity;
            result += (this->classOrder < 10 ? "0" : "");
            result += to_string(this->classOrder);
            result += '-';
            result += this->baseIdentifier;
            return result;
        }

        friend istream& operator >> (istream& cin, ClassID& classID) {
            string input;
            cin >> input;

            if (input.length() != 11) {
                return cin;
            }

            char __classIdentifier = input[0];
            unsigned int __collegeYear = stoi(string(input.begin() + 1, input.begin() + 3), nullptr, 10);
            string __classIdentity = string(input.begin() + 3, input.begin() + 7);
            unsigned int __classOrder = stoi(string(input.begin() + 8, input.begin() + 10), nullptr, 10);
            char __baseIdentifier = input[input.length() - 1];

            classID.setClassIdentifier('#');
            if (__classIdentifier == 'D') {
                classID.setClassIdentifier(__classIdentifier);
            }

            classID.setCollegeYear(0);
            if (__collegeYear > 0) {
                classID.setCollegeYear(__collegeYear);
            }

            classID.setclassIdentity("####");
            for (pair < string, string > item: classIdentities) {
                if (item.first == __classIdentity) {
                    classID.setclassIdentity(__classIdentity);
                    break;
                }
            }

            classID.setClassOrder(0);
            if (__classOrder > 0) {
                classID.setClassOrder(__classOrder);
            }

            classID.setBaseIdentifier('#');
            if (__baseIdentifier == 'B' || __baseIdentifier == 'N') {
                classID.setBaseIdentifier(__baseIdentifier);
            }

            return cin;
        }

        friend ostream& operator << (ostream& cout, ClassID classID) {
            cout << "Class's ID: " << classID.stringify();
            return cout;
        }
};

#endif