#ifndef STUDENT_H
#define STUDENT_H

#include <bits/stdc++.h>

using namespace std;

class Student {
    private:
        string studentID;
        string classID;
        string firstName;
        string lastName;
        string phoneNumber;

        bool checkValidStudentID(string __studentID) {
            bool result;

            
            return result;
        }

    public:
        Student(string __studentID = "###", string __classID = "###", string __firstName = "###", string __lastName = "###", string __phoneNumber = "###") {
            studentID = __studentID;
            classID = __classID;
            firstName = __firstName;
            lastName = __lastName;
            phoneNumber = __phoneNumber;
        }

        void setStudentID(string __studentID) {
            this->studentID = __studentID;
        }

        void setClassID(string __classID) {
            this->classID = __classID;
        }

        void setFirstName(string __firstName) {
            this->firstName = __firstName;
        }
        
        void setLastName(string __lastName) {
            this->lastName = __lastName;
        }

        void setPhoneNumber(string __phoneNumber) {
            this->phoneNumber = __phoneNumber;
        }

        string getStudentID() {
            return this->studentID;
        }

        string getClassID() {
            return this->classID;
        }

        string getFirstName() {
            return this->firstName;
        }

        string getLastName() {
            return this->lastName;
        }

        string getPhoneNumber() {
            return this->phoneNumber;
        }
};

#endif