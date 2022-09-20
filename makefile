linking_enable=NO
linking_type=STATIC

all: myFemtoShell

myFemtoShell : rand.o fact.o fib.o main.o prog.o

ifeq ($(linking_enable),NO)
	gcc -o myFemtoShell rand.o fact.o fib.o main.o
else
  ifeq ($(linking_type),STATIC)
	ar -rs libFemtoShell.a rand.o fact.o fib.o
	gcc -o myFemtoShell prog.o ./libFemtoShell.a
  else ifeq ($(linking_type),DYNAMIC)
	gcc -shared -fpic -o libFemtoShell.so rand.c fact.c fib.c
	gcc -o myFemtoShell prog.c ./libFemtoShell.so
  endif
endif



main.o: main.c
	gcc -c main.c

prog.o:prog.c
	gcc -c prog.c

rand.o: rand.c
	gcc -c rand.c

fact.o: fact.c
	gcc -c fact.c

fib.o: fib.c
	gcc -c fib.c

libFemtoShell.a: rand.o fact.o fib.o
	ar -rs libFemtoShell.a rand.o fact.o fib.o

libFemtoShell.so: rand.c fact.c fib.c
	gcc -shared -fpic -o libFemtoShell.so rand.c fact.c fib.c

run : myFemtoShell
	./myFemtoShell


