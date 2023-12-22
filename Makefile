all: ex2.c
	gcc -Wall -o exercise2 ex2.c

stepwise: ex2.c
	gcc -o exercise2 ex2.c

exercise2: ex2.c
	gcc -o exercise2 ex2.c

exercise3: ex3.c
	gcc -o exercise3 ex3.c

ex2.o: ex2.c
	gcc -c ex2.c

clean:
	rm -rf *.o
