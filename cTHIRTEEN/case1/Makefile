# 生成最终的可执行文件
MyProgram: main.o students.o
	g++ -o MyProgram main.o students.o

# 编译 students.cpp 生成目标文件
students.o: students.cpp students.h
	g++ -c students.cpp

# 编译 main.cpp 生成目标文件
main.o: main.cpp students.h
	g++ -c main.cpp

# 清理生成的文件
clean:
	rm -f MyProgram students.o main.o
