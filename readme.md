# Student System Migration

## Overview

This project revolves around the task of migrating a university's existing student system to a new platform using C++. 
The existing application already has requirements which you, as the hired contractor, must fulfill in implementing this system. 
The system is responsible for reading and manipulating the provided data, maintaining a current roster of students within a given 
course, and handling student information such as IDs, names, email addresses, age, course completion days, and degree programs. 
The implementation must strictly adhere to the guidelines provided, without the use of third-party libraries.

### Key Features

- Two main classes: `Student` and `Roster`, to encapsulate all student data and manipulations.
- Data Input: Accepts student data in a specific string format, parsed into proper objects and stored within an array.
- Detailed Requirements: Various functions and methods for accessing, modifying, and displaying student data.
- Output Handling: Specific data-related outputs directed to the console.

## Requirements

### Project Structure

The project structure requires the creation of the following files:
- `degree.h`
- `student.h` and `student.cpp`
- `roster.h` and `roster.cpp`
- `main.cpp`

### Enumerated Data Types

- Definition of a data type `DegreeProgram` containing values `SECURITY`, `NETWORK`, and `SOFTWARE`.

### Classes

- **Student class**: Includes variables for student ID, name, email address, age, course completion days, and degree program, along with accessor, mutator functions, constructors, and a print function.
- **Roster class**: Holds the student data, methods for adding, removing, printing all student data, printing average days in courses, validating email addresses, and printing by degree program.

### Main Functionality

- Demonstrate the required functionality through function calls in `main.cpp`.
