MyProgram:worker.o main.o
	g++ -o MyProgram worker.o main.o


#complier the worker
worker.o:worker.cpp
	g++ -c worker.cpp

#complier the main
main.o:main.cpp
	g++ -c main.cpp


clean:
	del -f MyProgram.exe *.o