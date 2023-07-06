#include<iostream>
#include <string>
#include "degree.h"
#include "student.h"

using namespace std;

//Getters
std::string Student::get_student_id(){
    return Student::student_id;
}

std::string Student::get_first_name(){
    return Student::first_name;
}

std::string Student::get_last_name(){
    return Student::last_name;
}

std::string Student::get_email(){
    return Student::email;
}

int Student::get_age(){
    return Student::age;
}

int * Student::get_days(){
    return Student::days;
}

Degree Student::get_degree_type(){
    return Student::degree_type;
}
        

//Setters
void Student::set_student_id(std::string student_id){
    Student::student_id = student_id;
}

void Student::set_first_name(std::string first_name){
    Student::first_name == first_name;
}

void Student::set_last_name(std::string last_name){
    Student::last_name = last_name;
}

void Student::set_email(std::string email){
    Student::email = email;
}

void Student::set_age(int age){
    Student::age = age;
}

void Student::set_days(int days1, int days2, int days3){
    const int size = 3;
    for(int i = 0; i < size; i++){
        if(i == 0){
            Student::days[i] = days1;
        }
        if(i == 1){
            Student::days[i] = days2;
        }
        else
        {
            Student::days[i] = days3;
        }
        
    }
}

//Constructors
Student::Student(){}
Student::Student(std::string student_id, 
        std::string first_name, 
        std::string last_name, 
        std::string email, 
        int age,
        int day1,
        int day2,
        int day3,
        Degree degree_type){
            Student::student_id = student_id;
            Student::first_name = first_name;
            Student::last_name = last_name;
            Student::email = email;
            Student::age = age;
            Student::days[0] = day1;
            Student::days[1] = day2;
            Student::days[2] = day3;
        }

Degree Student::getDegreeProgram(){
    return NONE;
}

void Student::print(){
    string first_name = get_first_name();
    string last_name = get_last_name();
    int age = get_age();
    int *days = get_days();
    Degree degree_type = getDegreeProgram();

    cout << "First Name: " << first_name << "\t";
    cout << "Last Name: " << last_name << "\t";
    cout << "Age: " << age << "\t";
    cout << "Days In Course: " << "{" << days[0] << "," << days[1] << "," << days[2] << "}" << "\t";
    cout << "Degree Program: ";
    if(degree_type == NETWORK)
    {
        cout << "Networking \n" << endl;
    }
    if(degree_type == SECURITY)
    {
        cout << "Security \n" << endl;
    }
    if(degree_type == SOFTWARE)
    {
        cout << "Software \n" << endl;
    }
    
}

