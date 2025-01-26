# 设置编译器
CXX = g++

# 编译选项
CXXFLAGS = -std=c++17 -Wall -g

# 输出文件名
TARGET = project_executable

# 自动获取当前目录下所有的 .cpp 文件
SRCS = $(wildcard *.cpp)

# 对应的目标文件
OBJS = $(SRCS:.cpp=.o)

# 默认目标：编译并链接所有文件
all: $(TARGET)

# 链接目标文件生成可执行文件
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

# 编译每个源文件
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# 清理生成的文件
clean:
	del $(TARGET) $(OBJS)

# 伪目标，防止与文件名冲突
.PHONY: all clean
