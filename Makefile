all: add-nbo

add-nbo : main.o
	g++ -o add-nbo main.o

add_nbo.o : main.cpp

clean : 
	rm -f add-nbo *.o