#include<iostream>
#include "degree.h"
#include "roster.h"

using namespace std;

void Roster::add(
        string studentID, 
        string firstName, 
        string lastName, 
        string emailAddress, 
        int age, 
        int daysInCourse1, 
        int daysInCourse2, 
        int daysInCourse3,
        Degree degree
        ){ 
            if (degree == SOFTWARE)
            {
                classRosterArray[position++] = new SoftwareStudent(studentID,firstName,lastName, emailAddress,age,daysInCourse1,daysInCourse2,daysInCourse3, degree);
            }else if (degree == SECURITY)
            {
                classRosterArray[position++] = new SecurityStudent(studentID,firstName,lastName, emailAddress,age,daysInCourse1,daysInCourse2,daysInCourse3, degree);
            }else if (degree == NETWORK)
            {
                classRosterArray[position++] = new NetworkStudent(studentID,firstName,lastName, emailAddress,age,daysInCourse1,daysInCourse2,daysInCourse3, degree);
            }else
            {
                cout << "This student is Undeclared." << endl;
            }
            
            
        }

void Roster::printAll(){
    int size = sizeof(classRosterArray)/sizeof(classRosterArray[0]);
    
    for(int i = 0; i < size + 1; i++){
        classRosterArray[i]->print();
    }
}

void Roster::printInvalidEmails(){
    string email;
    string spaces = " ";
    string period = ".";
    string  at_sign= "@";
    
    int size = sizeof(classRosterArray)/sizeof(classRosterArray[0]);

    for(int i = 0; i < size + 1; i++){

        size_t have_spaces;
        size_t have_period;
        size_t have_at_sign;

        email = classRosterArray[i]->get_email();
        have_spaces = email.find(spaces);
        have_period = email.find(period);
        have_at_sign = email.find(at_sign);
        
        if((have_period == -1) || (have_spaces != -1) || (have_at_sign == -1)){
            cout << "Invalid email: " << email << endl;
        }else{}
    }
}
void Roster::printAverageDaysInCourse(string studentID){
    string student_id = studentID;
    string search;
    Student student;
    int count = 0;
    int * days;
    int day1;
    int day2;
    int day3;
    int average;
    
    do{
        student = *classRosterArray[count];
        search = student.get_student_id();
        count++;
    }while(search != student_id);
    cout << "Student: " << search << endl;
    days = student.get_days();
    
    for (int i = 0; i < 3; i++)
    {
        switch (i)
        {
        case 0:
            day1 = *(days + i);
            break;
        case 1:
            day2 = *(days + i);
            break;
        case 2:
            day3 = *(days + i);
            break;
        
        
        default:
            break;
        }
    }

    average = (day1 + day2 + day3) / 3;
    cout << student_id << " average is " << average << endl;
    
}

void Roster::printByDegreeProgram(Degree degreeProgram){
    Degree search = degreeProgram;
    int size = sizeof(classRosterArray)/sizeof(classRosterArray[0]);
    
    for (int i = 0; i < size + 1; i++)
    {
        if (classRosterArray[i]->getDegreeProgram() == search)
        {
            classRosterArray[i]->print();
        }else
        {
            /* code */
        }
    }
}

void Roster::remove(string student_id){
    cout << "Remove student from roster." << endl;
    string studentID = student_id;
    Student *student;
    int count = 0;
    int found = 0;
    int size = sizeof(classRosterArray)/sizeof(classRosterArray[0]);

    for (int i = 0; i < size + 1; i++)
    {
        student = classRosterArray[i];   
        if (student->get_student_id() == studentID )
        {
            for(int j = i; j < size - 1; j++ ){
                classRosterArray[j] = classRosterArray[j + 1];
            
            }
            if(i == size - 1){
                classRosterArray[i] = nullptr;
            }
            cout << "The student was deleted!" << endl;
            found = 1;
        }
        
    }

    if(found == 0){
        cout << "Student was not found." << endl;
    }else
    {
        
    }
        
    
    
}

int main(void){

    Roster classRoster;

    string students[5] = {
        "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Ishmauel,Martin,imart55@wgu.edu,25,21,27,29,SOFTWARE"
    };

    cout << "Scripting and Programming C867 \n";
    cout << "C++ \n";
    cout << "#001079482 \n";
    cout << "Ishmauel Martin" << endl;
    int size = sizeof(students)/sizeof(students[0]);

    for (int i = 0; i < size; i++)
    {
        string line = students[i];
        int start = 0;
        size_t target;
        int counter = 0;

        string studentID;
        string firstName;
        string lastName;
        string email;
        int age;
        int dayInCourse1;
        int dayInCourse2;
        int dayInCourse3;
        Degree degree;

        do{
                
            target = line.find(",", start);
            string data = line.substr(start, target - start);
            start = target + 1;

            switch(counter)
            {
                case 0:
                    studentID = data;
                    break;
                
                case 1:
                    firstName = data;
                    break;

                case 2:
                    lastName = data;
                    break;

                case 3:
                    email = data;
                    break;

                case 4:
                    age = stoi(data);
                    break;

                case 5:
                    dayInCourse1 = stoi(data);
                    break;

                case 6:
                    dayInCourse2 = stoi(data);
                    break;

                case 7:
                    dayInCourse3 = stoi(data);
                    break;

                case 8:
                    if(data == "SOFTWARE")
                    {
                        degree = SOFTWARE;
                    } else if(data == "SECURITY"){
                        degree = SECURITY;
                    } else if(data == "NETWORK"){
                        degree = NETWORK;
                    } else{
                        degree = NONE;
                    }
                    break;
            } 
            
            counter++;
            
        }while (target != -1);

        classRoster.add(studentID, 
                        firstName, 
                        lastName, 
                        email, 
                        age, 
                        dayInCourse1, 
                        dayInCourse2, 
                        dayInCourse3, 
                        degree);

    }

    classRoster.printAll();
    classRoster.printInvalidEmails();
    //loop through classRosterArray and for each element:
    //int size = sizeof(*classRoster.classRosterArray)/sizeof(*classRoster.classRosterArray[0]);
    for(int i = 0; i < 5; i++){
       Student student = *classRoster.classRosterArray[i];  
       string student_id = student.get_student_id();
       classRoster.printAverageDaysInCourse(student_id);
    }
    classRoster.printByDegreeProgram(SOFTWARE);
    classRoster.remove("A3");
    classRoster.remove("A3");
    classRoster.~Roster();
    

    return 0;
}