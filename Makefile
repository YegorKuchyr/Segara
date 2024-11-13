CXX = g++
CXXFLAGS = -std=c++11 -Wall
TARGET = main

All: $(TARGET)

$(TARGET): main.o funcA.o
	$(CXX) $(CXXFLAGS) -o $(TARGET) main.o funcA.o

main.o: main.cpp funcA.h
	$(CXX) $(CXXFLAGS) -c main.cpp

funcA.o: funcA.cpp funcA.h
	$(CXX) $(CXXFLAGS) -c funcA.cpp

clean:
	rm -f *.o $(TARGET)

