```
# README

## Student System Migration Project

This repository contains a C++ project for migrating an existing student system to a new platform. The project includes the implementation of five classes: Student, SecurityStudent, NetworkStudent, SoftwareStudent, and Roster. The program reads and manipulates student data based on the provided requirements.

## Requirements

- Git: The project assumes that Git is installed on your system. If Git is not installed, you can download and install it from the official website: https://git-scm.com/downloads

- C++ Compiler: You need a C++ compiler to compile and run the program. Ensure that a suitable compiler is installed on your system.

## Installation

To install and run the program, follow the steps below:

1. Clone this repository to your local machine:

   ```
   git clone https://github.com/your-username/student-system-migration.git
   ```

2. Navigate to the project directory:

   ```
   cd student-system-migration
   ```

## Compilation and Execution

### Linux and macOS

1. Compile the program using the provided makefile:

   ```
   make
   ```

   This command will compile the source files and create the target executable named `c867`.

2. Run the compiled program:

   ```
   ./c867
   ```

   The program will execute and display the output in the console.

### Windows

1. Compile the program using the provided makefile (requires MinGW or a suitable C++ compiler):

   ```
   mingw32-make
   ```

   This command will compile the source files and create the target executable named `c867.exe`.

2. Run the compiled program:

   ```
   c867.exe
   ```

   The program will execute and display the output in the console.

## Project Details

The goal of this project is to migrate an existing student system to a new platform using C++. The system manages student information for a university course and includes functionality to add students, remove students, print student data, and perform various operations on the student data.

The project consists of the following files:

- `degree.h`: Defines the enumerated data type Degree for the degree programs.

- `student.h` and `student.cpp`: Contains the base Student class, which includes the variables for student information and member functions for accessing and manipulating the data.

- `networkStudent.h` and `networkStudent.cpp`: Defines the NetworkStudent class, a subclass of Student, which represents students in the networking program.

- `securityStudent.h` and `securityStudent.cpp`: Defines the SecurityStudent class, a subclass of Student, which represents students in the security program.

- `softwareStudent.h` and `softwareStudent.cpp`: Defines the SoftwareStudent class, a subclass of Student, which represents students in the software program.

- `roster.h` and `roster.cpp`: Contains the Roster class, which manages the student roster, including adding and removing students, printing student information, and performing other operations on the student data.

## Contributing

If you would like to contribute to this project, please fork the repository, make your changes, and submit a pull request.

## License

This project is licensed under the [MIT License](LICENSE).
```

