/*
* The meeting's ID will be constructed base on the date which the meeting will be held and the order of the meeting.
* The format for the meeting's ID will be DDMMYYYYXXXXX where DD, MM, YYYY is the format DD/MM/YYYY of the meeting's date.
* And XXXXX is the order of the meeting in that day.
* Let's say that on the 24/12/2022, there are 2 meeting's so, the two meeting's ID are: 241220220001 and 241220220002
*/

#ifndef MEETINGID_H
#define MEETINGID_H

#include <bits/stdc++.h>
#include "./Date-and-Time.h"

using namespace std;

class MeetingID {
    private:
        Date date;
        unsigned int order;

    public:
        MeetingID (Date __date = Date(), unsigned int __order = 0) {
            date = __date;
            order = __order;
        }

        void setDate(Date __date) {
            this->date = __date;
        }

        void setOrder(unsigned int __order) {
            this->order = __order;
        }

        Date getDate() {
            return this->date;
        }

        unsigned int getOrder() {
            return this->order;
        }

        string stringify() {
            string result = "";
            result += this->date.stringify(true);
            if (this->order < 10) {
                result += "0";
            }
            if (this->order < 100) {
                result += "0";
            }
            if (this->order < 1000) {
                result += "0";
            }
            if (this->order < 10000) {
                result += "0";
            }
            result += to_string(this->order);
            return result;
        }

        friend ostream &operator<< (ostream &cout, MeetingID meetingID) {
            cout << meetingID.stringify() << endl;
            return cout;
        }
};

#endif