all: OneMaxSA

OneMaxSA: OneMaxSA.o main.o 
	g++ -ggdb -o OneMaxSA OneMaxSA.o main.o

OneMaxSA.o: OneMaxSA.cpp
	g++ -ggdb -c OneMaxSA.cpp

main.o: main.cpp
	g++ -ggdb -c main.cpp

plot: 
	gnuplot pic.gp

dep:
	echo "Do nothing"

clean:
	rm -f OneMaxSA OneMaxSA *.o

cleanDat:
	rm -f OneMaxSA *.dat
