#ifndef NETWORKSTUDENT_H
#define NETWORKSTUDENT_H

#include "degree.h"
#include "student.h"
#include <iostream>
#include <string>


using namespace std;

class NetworkStudent : public Student{
    private:
        Degree degree_type;

    public:
        //Constructors
        
        NetworkStudent(std::string student_id, 
                std::string first_name, 
                std::string last_name, 
                std::string email, 
                int age,
                int day1,
                int day2,
                int day3,
                Degree degree_type);
        
        Degree getDegreeProgram() override;

       
};
#endif