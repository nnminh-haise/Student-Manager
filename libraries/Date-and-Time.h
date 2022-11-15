#ifndef DATEANDTIME_H
#define DATEANDTIME_H

#include <bits/stdc++.h>

using namespace std;

/*
* A class represent date, month and year.
* Class has three private information: date, month and year.
* It has one constructor function. Three setters and three getters.
* It comes with three methods and one friend method.
*/
class Date {
    private:
        unsigned int date;
        unsigned int month;
        unsigned int year;

    public:
        /*
        * Default constructor for class Date.
        @param __date: contains information of the date.
        @param __month: contains information of the month.
        @param __year: contains information of the year.
        */
        Date(unsigned int __date = 1, unsigned int __month = 1, unsigned int __year = 2000) {
            date = __date;
            month = __month;
            year = __year;
        }

        /*
        * Setter function for the attribute date.
        @param __date: contains infomation of the date.
        */
        void setDate(unsigned int __date) {
            this->date = __date;
        }

        /*
        * Setter function for the attribute month.
        @param __month: contains infomation of the month.
        */
        void setMonth(unsigned int __month) {
            this->month = __month;
        }

        /*
        * Setter function for the attribute year.
        @param __year: contains infomation of the year.
        */
        void setYear(unsigned int __year) {
            this->year = __year;
        }

        /*
        * Getter function for the attribute date.
        */
        unsigned int getDate() {
            return this->date;
        }

        /*
        * Getter function for the attribute month.
        */
        unsigned int getMonth() {
            return this->month;
        }

        /*
        * Getter function for the attribute year.
        */
        unsigned int getYear() {
            return this->year;
        }

        /*
        * Method returns a string represent the date in format DD/MM/YYYY.
        @param currentDate: contains the date which will be represented.
        */
        friend string dateToString(Date currentDate) {
            if (currentDate.dateValidation() == false) {
                return "";
            }

            string result = "";
            if (currentDate.getDate() < 10) {
                result += "0";
            }
            result += to_string(currentDate.getDate());
            result += "/";
            if (currentDate.getMonth() < 10) {
                result += "0";
            }
            result += to_string(currentDate.getMonth());
            result += "/";
            result += to_string(currentDate.getYear());

            return result;
        }

        /*
        * Method returns true if the current year is a leap year otherwise return false.
        @param year: the year which needed to be checked.
        */
        bool checkLeapYear(unsigned int year) {
            if (year % 4 == 0) {
                if (year % 100 == 0 && year % 400 == 0) {
                    return true;
                }
                else if (year % 100 != 0) {
                    return true;
                }
            }
            return false;
        }

        /*
        * Method returns true if the date is a valid date of a year otherwise return false.
        */
        bool dateValidation() {
            if (this->date == 0 || this->month == 0 || this->year == 0) {
                return false;
            }

            switch (this->month) {
                case (1):
                case (3):
                case (5):
                case (7):
                case (8):
                case (10):
                case (12):
                    return (this->date <= 31);
                case (2):
                    return (this->date <= (28 + checkLeapYear(this->year)));
                case (4):
                case (6):
                case (9):
                case (11):
                    return (this->date <= 30);
            }
            return false;
        }

        /*
        * Method which is overloading operator << of the ostream.
        @param cout: a reference to ostream object.
        @param currentDate: the date which will be represented.
        */
        friend ostream& operator << (ostream& cout, Date currentDate) {
            cout << "Date: ";
            cout << (currentDate.getDate() < 10 ? "0" : "") << currentDate.getDate() << "/";
            cout << (currentDate.getDate() < 10 ? "0" : "") << currentDate.getMonth() << "/" << currentDate.getYear();
            return cout;
        }
};

#endif