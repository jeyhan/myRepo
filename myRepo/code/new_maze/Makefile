all: main
main: main.o stack.o maze.o
	gcc $^ -o $@
main.o stack.o maze.o:main.h
main.o maze.o: maze.h
main.o stack.o: stack.h

clean:
	-rm main *.o
.PHONY:clean

sources = main.c stack.c maze.c
include $(sources:.c=.d)

%.d: %.c
	set -e;rm -f $@; \
	$(CC) -MM $(CPPFLAGS) $< > $@.$$$$; \
	sed 's,\($*\)\.o[ :]*,\1.o $@ : ,g' < $@.$$$$ > $@; \
	rm -f $@.$$$$
