all: main.cpp reservoir.cpp reservoir.h reverseorder.cpp reverseorder.h

g++ -std=c++11 -o main main.cpp reservoir.cpp reverseorder.cpp

clean:

rm -f main