TARGET = ../../lib/libsolver3d.a
LIBS = -L../../lib -lmesh3d -lm -lqhull
CC = gcc
CFLAGS = -g -I /usr/include/mpi -I /usr/include/petsc  -I /usr/local/include -I /opt/local/include -I ../mesh3d -Wall -DDEBUG -fopenmp 

.PHONY: default all clean

default: $(TARGET)
all: default

OBJECTS = $(patsubst %.c, %.o, $(wildcard *.c))
HEADERS = $(wildcard *.h)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

.PRECIOUS: $(TARGET) $(OBJECTS)

$(TARGET): $(OBJECTS)
	ar rcs $(TARGET) $(OBJECTS)
#	$(CC) $(OBJECTS) -Wall $(LIBS) -o $@

clean:
	-rm -f *.o
	-rm -f $(TARGET)

