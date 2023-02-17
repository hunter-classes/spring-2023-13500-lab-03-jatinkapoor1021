all: main.cpp reservoir.cpp reservoir.h

g++ -std=c++11 -o main main.cpp reservoir.cpp

clean:

rm -f main