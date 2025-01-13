#编译器
CXX=g++
CXXFLAGS=-std=c++11 -Wall -g

#可执行文件
TARGET=case1.exe

#源文件列表
SRCS=main.cpp tv.cpp

#对应的目标文件列表
OBJS=$(SRCS:.cpp=.o)

all:$(TARGET)

$(TARGET):$(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o:%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	del /q $(OBJS) $(TARGET)

.PHONY:all clean
