# Makefile for cross-platform (Linux/Windows)

# 目标文件
TARGET = Main
OBJS = main.o student.o

# 默认目标
all: $(TARGET)

# 链接
$(TARGET): main.o student.o
	g++ -o $(TARGET) main.o student.o

# 编译
student.o: student.cpp
	g++ -c student.cpp

main.o: main.cpp
	g++ -c main.cpp

# 清理
clean:
ifeq ($(OS),Windows_NT)
	del $(TARGET).exe $(OBJS)
else
	rm -f $(TARGET) $(OBJS)
endif
