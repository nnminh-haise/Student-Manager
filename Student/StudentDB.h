#ifndef STUDENTDB_H
#define STUDENTDB_H

#include <bits/stdc++.h>
#include "../Student/Student.h"

using namespace std;

class StudentDatabase {
private:
    vector < Student > database;

public:
    StudentDatabase() {
        
    }

    int size() {
        return this->database.size();
    }

    void insert(Student student) {
        this->database.push_back(student);
    }

    void erase(StudentID studentID) {
        vector < Student > newDatabase;
        for (Student student: this->database) {
            if (student.getStudentID().stringify() != studentID.stringify()) {
                newDatabase.push_back(student);
            }
        }
        this->database = newDatabase;
    }

    void show() {
        cout << "--------------------------------------------------------------------------\n";
        cout << "| ";
        cout << setw(5) << "STT |";
        cout << setw(22) << " Ho va ten |";
        cout << setw(10) << " MSSV |";
        cout << setw(11) << " Ma lop |";
        cout << setw(10) << " SDT |";
        cout << setw(10) << " Ngay tham gia |";
        cout << "\n";
        cout << "--------------------------------------------------------------------------\n";

        for (int i = 0; i < this->database.size(); ++i) {
            cout << "| ";
            cout << setw(3) << i + 1 << " |";
            cout << setw(20) << (this->database[i].getFirstName() + " " + this->database[i].getLastName()) << " |";
            cout << setw(10) << this->database[i].getStudentID().stringify() << " |";
            cout << setw(11) << this->database[i].getClassID().stringify() << " |";
            cout << setw(10) << this->database[i].getPhoneNumber() << " |";
            cout << setw(10) << this->database[i].getJoinDate().stringify() << " |";
            cout << "\n";
        }
    }
};

#endif