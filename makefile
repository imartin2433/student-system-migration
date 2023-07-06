student-system-migration: networkStudent.o securityStudent.o  softwareStudent.o student.o roster.o
	g++ networkStudent.o securityStudent.o softwareStudent.o student.o roster.o -o student-system-migration

networkStudent.o: networkStudent.cpp
	g++ -c networkStudent.cpp

securityStudent.o: securityStudent.cpp
	g++ -c securityStudent.cpp

softwareStudent.o: softwareStudent.cpp
	g++ -c softwareStudent.cpp

student.o: student.cpp
	g++ -c student.cpp

roster.o: roster.cpp
	g++ -c roster.cpp

clean:
	rm *.o student-system-migration
