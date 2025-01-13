# 编译器及其选项
CXX = g++
CXXFLAGS = -std=c++11 -Wall -g

# 生成的可执行文件名称
TARGET = test4.exe

# 源文件列表
SRCS = main.cpp baddude.cpp gunslinger.cpp person.cpp pokerplayer.cpp

# 对应的目标文件列表（将 .cpp 替换为 .o）
OBJS = $(SRCS:.cpp=.o)

# 默认目标，生成可执行文件
all: $(TARGET)

# 链接目标文件，生成可执行文件
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# 编译每个 .cpp 文件为 .o 文件
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# 清理生成的目标文件和可执行文件（Windows 使用 del 命令）
clean:
	del /q $(OBJS) $(TARGET)

# 声明伪目标，避免和文件名冲突
.PHONY: all clean
