#include<iostream>
#include <string>

#include "securityStudent.h"

using namespace std;

Degree SecurityStudent::getDegreeProgram(){
    
    return SECURITY;
}

SecurityStudent::SecurityStudent(std::string student_id, 
                std::string first_name, 
                std::string last_name, 
                std::string email, 
                int age,
                int day1,
                int day2,
                int day3,
                Degree degree_type):Student(student_id, first_name, last_name, email, age, day1, day2, day3, degree_type){}

