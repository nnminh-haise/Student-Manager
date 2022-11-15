#ifndef STUDENT_H
#define STUDENT_H

#include <bits/stdc++.h>

using namespace std;

class Student {
    private:
        string student_id;
        string class_id;
        string first_name;
        string last_name;
        string phone_number;

        

    public:
        Student(string __student_id = "###", string __class_id = "###", string __first_name = "###", string __last_name = "###", string __phone_number = "###") {
            student_id = __student_id;
            class_id = __class_id;
            first_name = __first_name;
            last_name = __last_name;
            phone_number = __phone_number;
        }

        void setStudentID(string __student_id) {
            this->student_id = __student_id;
        }

        void setClassID(string __class_id) {
            this->class_id = __class_id;
        }

        void setFirstName(string __first_name) {
            this->first_name = __first_name;
        }
        
        void setLastName(string __last_name) {
            this->last_name = __last_name;
        }

        void setPhoneNumber(string __phone_number) {
            this->phone_number = __phone_number;
        }

        string getStudentID() {
            return this->student_id;
        }

        string getClassID() {
            return this->class_id;
        }

        string getFirstName() {
            return this->first_name;
        }

        string getLastName() {
            return this->last_name;
        }

        string getPhoneNumber() {
            return this->phone_number;
        }
};

#endif