#ifndef ROSTER_H
#define ROSTER_H

#include <iostream>
#include "degree.h"
#include "student.h"
#include "softwareStudent.h"
#include "securityStudent.h"
#include "networkStudent.h"

using namespace std;

class Roster{
    private:
        
    public:
        int position = 0;
        Student *classRosterArray[4];

        void add(string studentID, 
                string firstName, 
                string lastName, 
                string emailAddress, 
                int age, 
                int daysInCourse1, 
                int daysInCourse2, 
                int daysInCourse3,
                Degree degree
            );
        
        void remove(string studentID);

        void printAll();
        void printInvalidEmails();
        void printAverageDaysInCourse(string studentID);
        void printByDegreeProgram(Degree degreeProgram);

        ~Roster(){}

        
        
       
};
#endif