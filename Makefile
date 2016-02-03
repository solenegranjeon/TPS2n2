all: main

main: main.o ImagePPM.o
	g++ main.o ImagePPM.o -o main -g
	
main.o: main.cpp ImagePPM.h
	g++ -c main.cpp -o main.o -std=c++11 -g
	
ImagePPM.o: ImagePPM.cpp ImagePPM.h
	g++ -c ImagePPM.cpp -o ImagePPM.o -std=c++11 -g
	
clean:
	rm *.o

