#ifndef STUDENT_H
#define STUDENT_H

#include "degree.h"
#include <iostream>
#include <string>


using namespace std;

class Student{
    private:
        std::string student_id;
        std::string first_name;
        std::string last_name;
        std::string email;
        int age;
        int days[3];
        Degree degree_type;

    public:
        //Getters
        std::string get_student_id();

        std::string get_first_name();

        std::string get_last_name();

        std::string get_email();

        int get_age();

        int * get_days();

        Degree get_degree_type();
        

        //Setters
        void set_student_id(std::string student_id);

        void set_first_name(std::string first_name);

        void set_last_name(std::string last_name);

        void set_email(std::string email);

        void set_age(int age);

        void set_days(int days1, int days2, int days3);

        void set_degree_type(Degree degree_type);

        //Constructors
        Student();
        Student(std::string student_id, 
                std::string first_name, 
                std::string last_name, 
                std::string email, 
                int age,
                int day1,
                int day2,
                int day3,
                Degree degree_type);

        Degree virtual getDegreeProgram();
        
        virtual void print();
       
};
#endif