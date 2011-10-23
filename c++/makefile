FLAGS = -ansi -pedantic
COMPILER = g++

all : tester

tester : token.h token.o tester.cpp
	$(COMPILER) -c tester.cpp -o tester.o $(FLAGS)
	$(COMPILER) token.o tester.cpp -o tester $(FLAGS)

token.o : token.cpp
	$(COMPILER) -c token.cpp -o token.o $(FLAGS)

clean :
	rm -f -r *.o *.~ tester