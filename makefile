person: main.o stomach.o heart.o
	g++ -o person main.cpp person.cpp stomach.cpp heart.cpp

main.o: main.cpp person.h stomach.h heart.h
	g++ -c main.cpp

stomach.o: stomach.cpp stomach.h
	g++ -c stomach.cpp

heart.o: heart.cpp heart.h
	g++ -c heart.cpp

clean:
	rm *.o person
