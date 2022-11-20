#include <bits/stdc++.h>
#include "./Student/Student.h"
#include "./Student/StudentDB.h"

using namespace std;

StudentDatabase studentDB;

int main() {
    for (int i = 0; i < 10; ++i) {
        studentDB.insert(Student (
            StudentID("N21DCCN00" + to_string(i)),
            ClassID("D21CQCN01-N"),
            "Nhat Minh",
            "Nguyen",
            "0704098399",
            Date(24, 12, 2021)
        ));
    }

    studentDB.show();



    return 0;
}