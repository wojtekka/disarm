all:	test

test:	test.c disarm.c
	gcc -Wall $^ -o $@

clean:
	rm -f test *.o *~ core
