CXX = g++
CXXFLAGS = -std=c++17 -O2 -Wall -Wextra
TARGET = main
SOURCE = main.cpp

.PHONY: all clean run test

all: $(TARGET)

$(TARGET): $(SOURCE)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SOURCE)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

debug: CXXFLAGS += -g -DDEBUG
debug: $(TARGET)

template:
	cp ../template/template.cpp main.cpp

test: $(TARGET)
	./$(TARGET) < input.txt