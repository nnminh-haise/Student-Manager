#include <bits/stdc++.h>
#include "./libraries/Date-and-Time.h"
#include "./libraries/Student.h"
#include "./libraries/StudentID.h"
#include "./libraries/ClassID.h"

using namespace std;

int main() {
    freopen("data.txt", "r", stdin);
    int n;
    cin >> n;
    vector < StudentID > IDs;
    for (int i = 1; i <= n; ++i) {
        StudentID temp;
        cin >> temp;
        cerr << temp << endl;
        IDs.push_back(temp);
    }

    cerr << "List of IDs:\n";
    for (StudentID& ID: IDs) {
        cerr << ID << endl;
    }

    return 0;
}