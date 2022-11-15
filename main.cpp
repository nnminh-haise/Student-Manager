#include <bits/stdc++.h>
#include "./libraries/Date-and-Time.h"

using namespace std;

int main() {
    Date currentDate;

    cout << currentDate << endl;

    if (currentDate.dateValidation() == true) {
        cout << dateToString(currentDate) << "\n";
    }
    else {
        cout << "Error!\n";
    }


    return 0;
}