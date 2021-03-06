LIBS = -L/usr/local/lib -L/opt/local/lib -L../../lib -L/usr/local/Cellar/lzlib/1.7/lib -lsolver3d -lmesh3d -lm -lqhull -fopenmp -lz -lpetsc -lmpi -g
CC = gcc
CFLAGS = -g -I /usr/include/mpi -I /usr/include/petsc -I /opt/local/include -I ../mesh3d -I ../solver3d -Wall -DDEBUG -Os -fopenmp

.PHONY: default all clean

default: mesh3d vofsolver solver3d inspect_cell
all: mesh3d vofsolver solver3d inspect_cell

OBJECTS = $(patsubst %.c, %.o, $(wildcard *.c))
HEADERS = $(wildcard *.h)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

.PRECIOUS: $(TARGET) $(OBJECTS)

libmesh3d: 
	$(MAKE) -C ../mesh3d

libsolver3d:
	$(MAKE) -C ../solver3d

mesh3d: clean libmesh3d libsolver3d mesh3d.o
	$(CC) mesh3d.o -Wall $(LIBS) -o ../../bin/$@
	test -d ../../bin/civil-cfd.app/Contents/MacOS && cp ../../bin/$@ ../../bin/civil-cfd.app/Contents/MacOS

vofsolver: clean libmesh3d libsolver3d vofsolver.o
	$(CC) vofsolver.o -Wall $(LIBS) -o ../../bin/$@
  
inspect_cell: clean libmesh3d libsolver3d inspect_cell.o
	$(CC) inspect_cell.o -Wall $(LIBS) -o ../../bin/$@
	test -d ../../bin/civil-cfd.app/Contents/MacOS && cp ../../bin/$@ ../../bin/civil-cfd.app/Contents/MacOS


solver3d: clean libmesh3d libsolver3d solver3d.o
	$(CC) solver3d.o -Wall $(LIBS) -o ../../bin/$@
	test -d ../../bin/civil-cfd.app/Contents/MacOS && cp ../../bin/$@ ../../bin/civil-cfd.app/Contents/MacOS

clean:
	-rm -f *.o
	-rm -f mesh3d
	-rm -f vofsolver
	-rm -f solver3d
	-rm -f inspect_cell

distclean:
	-rm -f *.o
	-rm -f mesh3d
	-rm -f vofsolver
	-rm -f solver3d
	-rm -f inspect_cell
	-cd ../mesh3d && make clean
	-cd ../solver3d && make clean
	-rm ../../bin/civil-cfd.app/Contents/MacOS/mesh3d
	-rm ../../bin/civil-cfd.app/Contents/MacOS/solver3d
	-rm ../../bin/civil-cfd.app/Contents/MacOS/inspect_cell
	-rm ../../bin/mesh3d
	-rm ../../bin/solver3d
	-rm ../../bin/inspect_cell
