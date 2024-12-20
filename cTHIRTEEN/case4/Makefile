MyProgram:worker.o main.o
	g++ -o MyProgram worker.o main.o

main.o:main.cpp
	g++ -c main.cpp

worker.o:worker.cpp
	g++ -c worker.cpp

clean:
	del *.o *.exe
	
