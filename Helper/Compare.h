#ifndef COMPARE_H
#define COMPARE_H

#include <bits/stdc++.h>

using namespace std;

template < typename T = int >
class Compare {
    public:
        /* 
        * This is a function pointer declaration.
        */
        bool (*func) (T, T);

        /*
        * This is a constructor for Compare Class.
        @param *__func: a function pointer, points to nullptr by default.
        */
        Compare(bool (*__func) (T, T) = nullptr) {
            return;
        }

        bool operator() (T firstValue, T secondValue) {
            return firstValue <= secondValue;
        }
};

#endif