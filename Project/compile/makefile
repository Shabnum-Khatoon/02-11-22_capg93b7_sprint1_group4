SRCDIR = src
INCLUDEDIR = inc
OBJDIR = obj
BINDIR = bin
VALGRIND = tools/valgrind

INCLUDEFLAGS = -I${INCLUDEDIR}
CPPFLAGS = -ansi -c -g -Wall -std=gnu++11  -DDEBUG ${INCLUDEFLAGS}

main : details.o registration.o ticket.o management.o main.o 
	g++ -o ${BINDIR}/main ${OBJDIR}/details.o ${OBJDIR}/registration.o ${OBJDIR}/ticket.o ${OBJDIR}/management.o ${OBJDIR}/main.o 

main.o : ${SRCDIR}/main.cpp
	g++ -o ${OBJDIR}/main.o ${CPPFLAGS} ${SRCDIR}/main.cpp

management.o : ${SRCDIR}/management.cpp
	g++ -o ${OBJDIR}/management.o ${CPPFLAGS} ${SRCDIR}/management.cpp

ticket.o : ${SRCDIR}/ticket.cpp
	g++ -o ${OBJDIR}/ticket.o ${CPPFLAGS} ${SRCDIR}/ticket.cpp

registration.o : ${SRCDIR}/registration.cpp
	g++ -o ${OBJDIR}/registration.o ${CPPFLAGS} ${SRCDIR}/registration.cpp

details.o : ${SRCDIR}/details.cpp
	g++ -o ${OBJDIR}/details.o ${CPPFLAGS} ${SRCDIR}/details.cpp

valgrind : main
	valgrind --leak-check=full --show-reachable=yes ${BINDIR}/main 2> ${VALGRIND}/valgrind.txt

clean :
	echo "cleaning up .o and exes"
	rm ${BINDIR}/main ${OBJDIR}/main.o ${OBJDIR}/details.o ${OBJDIR}/registration.o ${OBJDIR}/ticket.o ${OBJDIR}/management.o ${VALGRIND}/valgrind.txt

