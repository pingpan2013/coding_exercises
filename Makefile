# makefile for leetcode exercises
# Just modify the SOURCE to the .cc file that you would like to test
# And modify the OBJS to the corresponding .o file
LIBS = -ldl
STD = -std=c++11
CC = g++
DEBUG = -g
CFLAGS = -Wall -O1 ${STD} -c
LFLAGS = -Wall
OUTPUT = main
SOURCE = binaryTree.h binaryTree.cc convertArrayToBST.cc
OBJS = binaryTree.o convertArrayToBST.o

all:${OUTPUT}
.PHONY:all

${OUTPUT}:${OBJS}
	${CC} ${LFLAGS} ${OBJS} ${LIBS} -o ${OUTPUT}

${OBJS}:${SOURCE}
	${CC} ${CFLAGS} ${SOURCE}


.PHONY:clean
clean:
	rm -f *.o *~ *.*swp ${OUTPUT}
