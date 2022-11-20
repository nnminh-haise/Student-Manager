#ifndef STUDENT_H
#define STUDENT_H

#include <bits/stdc++.h>
#include "../Helper/Constants.h"
#include "../Helper/Date-and-Time.h"
#include "../Student/StudentID.h"
#include "../Student/ClassID.h"

using namespace std;

class Student {
private:
    StudentID studentID = StudentID();
    ClassID classID = ClassID();
    string firstName = "####";
    string lastName = "####";
    string phoneNumber = "####";
    Date joinDate = Date();

public:
    Student(StudentID __studentID = StudentID(), ClassID __classID = ClassID(), string __firstName = "####", string __lastName = "####", string __phoneNumber = "####", Date __joinDate = Date()) {
        studentID = __studentID;
        classID = __classID;
        firstName = __firstName;
        lastName = __lastName;
    phoneNumber = __phoneNumber;
    }

    void setStudentID(StudentID __studentID) {
        this->studentID = __studentID;
    }

    void setClassID(ClassID __classID) {
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

    void setJoinDate(Date __joinDate) {
        this->joinDate = __joinDate;
    }

    StudentID getStudentID() {
        return this->studentID;
    }

    ClassID getClassID() {
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

    Date getJoinDate() {
        return this->joinDate;
    }

    friend ostream &operator << (ostream &cout, Student student) {
        cout << "Student's Information:\n\n";
        cout << "Student's ID          : " << student.getStudentID().stringify() << ".\n"; 
        cout << "Student's Fullname    : " << student.getFirstName() << " " << student.getLastName() << ".\n";
        cout << "Student's Class ID    : " << student.getClassID() << ".\n";
        cout << "Student's phone number: " << student.getPhoneNumber() << ".\n";
        cout << "Student's join date   : " << student.getJoinDate() << ".\n";
        cout << "---\n";
        return cout;
    }
};

#endif