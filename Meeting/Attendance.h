#ifndef ATTENDANCE_H
#define ATTENDANCE_H

#include <bits/stdc++.h>
#include "./StudentID.h"
#include "./MeetingID.h"

using namespace std;

class Attendance {
    private:
        StudentID studentID;
        MeetingID meetingID;
        bool status;
        string reason;

    public:
        Attendance (StudentID __studentID, MeetingID __meetingID, bool __status = false, string __reason = "####") {
            studentID = __studentID;
            meetingID = __meetingID;
            status = __status;
            reason = __reason;
        }

        void setStudentID(StudentID __studentID) {
            this->studentID = __studentID;
        }

        void setMeetingID(ClassID __meetingID) {
            this->meetingID = __meetingID;
        }

        void setStatus(bool __status) {
            this->status = __status;
        }

        void setReason(string __reason) {
            this->reason = __reason;
        }

        StudentID getStudentID() {
            return this->studentID;
        }

        ClassID getMeetingID() {
            return this->meetingID;
        }

        bool getStatus() {
            return this->status;
        }

        string getReason() {
            return this->reason;
        }

        friend ostream& operator << (ostream& cout, Attendance attendance) {
            cout << "Student " << attendance.getStudentID() << (attendance.getStatus() == true ? " attended " : " absented ") << "Reason: " << attendance.getReason();
            return cout;
        }
};

#endif