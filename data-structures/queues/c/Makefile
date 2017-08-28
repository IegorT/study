# compiler
CC = clang

# flag to pass compiler
CFLAGS = -ggdb3 -O0 -Qunused-arguments -std=c11 -Wall -Werror

# same for executable
EXE = test

# space-separated list of headers file
HDRS = queue.h

# space-separated list of libraries, if any,
# each of which should be prefixed with -l
LIBS =

# space-separated list of source file
SRCS = queue.c main.c

# avtomatically generated list of object files
OBJS = $(SRCS:.c =.o)

#default target 
$(EXE): $(OBJS) $(HDRS) Makefile 
	$(CC) $(CFLAGS) -o $@ $(OBJS) $(LIBS)

# dependences
$(OBJS): $(SRCS) Makefile

# housekeeping
clean:
	rm -f core $(EXE) *.o