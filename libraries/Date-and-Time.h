/*
TODO: Thêm toán tử + và += cho class Date và class Time
*/

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

/*
* A class represent time in hour, minute and second.
* This class has three private attribute: hour, minute and second.
* It has one constructor, three setter methods and three getter methods.
*/
class Time {
    private:
        unsigned int second;
        unsigned int minute;
        unsigned int hour;

    public:
        /*
        * Constructor function automatically constructs the object when the object is decleared.
        @param __hour: current hour.
        @param __minute: current minute.
        @param __second: current second.
        */
        Time (unsigned __hour = 0, unsigned int __minute = 0, unsigned int __second = 0) {
            hour = __hour;
            minute = __minute;
            second = __second;
        }

        /*
        * Setter function for setting value for attribute second of the class.
        @param __second: current second.
        */
        void setSecond(unsigned int __second) {
            this->second = __second;
        }

        /*
        * Setter function for setting value for attribute minute of the class.
        @param minute: current minute.
        */
        void setMinute(unsigned int __minute) {
            this->minute = __minute;
        }

        /*
        * Setter function for setting value for attribute hour of the class.
        @param hour: current hour.
        */
        void setHour(unsigned int __hour) {
            this->hour = __hour;
        }

        /*
        * Getter function for getting value of attribute second of the class.
        */
        unsigned int getSecond() {
            return this->second;
        }

        /*
        * Getter function for getting value of attribute minute of the class.
        */
        unsigned int getMinute() {
            return this->minute;
        }

        /*
        * Getter function for getting value of attribute hour of the class.
        */
        unsigned int getHour() {
            return this->hour;
        }

        /*
        * Method return true if the format of the Time object is correct otherwise return false.
        */
        bool timeValidation() {
            if (this->hour < 0 || this->hour > 23 || this->minute < 0 || this->minute > 59 || this->second < 0 || this->second > 59) {
                return false;
            }
            return true;
        }

        /*
        * Overloading operator << for class Time.
        @param cout: ostream's object.
        @param currentTime: Time object in which will be displayed.
        */
        friend ostream& operator << (ostream& cout, Time currentTime) {
            cout << "Time: ";
            cout << (currentTime.getHour() < 10 ? "0" : "") << currentTime.getHour() << ":";
            cout << (currentTime.getMinute() < 10 ? "0" : "") << currentTime.getMinute() << ":";
            cout << (currentTime.getSecond() < 10 ? "0" : "") << currentTime.getSecond();
            return cout;
        }
};

#endif