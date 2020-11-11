CC=gcc
AR=ar
OBJECTS=myMath.o power.o
MAIN=main.o
FLAGS= -Wall -g

all: mains maind mymaths mymathd

mains: $(MAIN) mymaths
	$(CC) $(FLAGS) -o mains $(MAIN) libmyMath.a

maind: $(MAIN) mymathd
	$(CC) $(FLAGS) -o maind $(MAIN) ./libmyMath.so

mymaths: $(OBJECTS) 
	$(AR) -rcs libmyMath.a $(OBJECTS)

mymathd: $(OBJECTS)
	$(CC) -shared -o libmyMath.so $(OBJECTS)

$(MAIN): main.c myMath.h
	$(CC) $(FLAGS) -c main.c -o $(MAIN)

myMath.o: basicMath.c myMath.h
	$(CC) $(FLAGS) -c basicMath.c -o myMath.o

power.o: power.c myMath.h
	$(CC) $(FLAGS) -c power.c -o power.o

.PHONY: clean all

clean:
	rm -f maind mains *.o *.a *.so