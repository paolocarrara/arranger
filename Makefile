CC = gcc
WFLG = -W -Wextra -Wall -Wunused -Wformat -Wformat-security -Wuninitialized -Wunreachable-code -Wreturn-type -Wimplicit-function-declaration -Winline
SRC = src/
INC = inc/
OBJ = obj/
OBJECTS = $(OBJ)*

arranger: $(OBJ)main.o $(OBJ)arranger.o
	$(CC) $(OBJECTS) -o $@

$(OBJ)arranger.o: $(SRC)arranger.c $(INC)arranger.h
	$(CC) -c $(WFLG) $< -o $@

$(OBJ)main.o: $(SRC)main.c $(INC)arranger.h
	$(CC) -c $(WFLG) $< -o $@

#TESTS
test: test1 test2 test3

test1:
	valgrind ./arranger -l3 -c[a-Z] -k[1,g]
test2:
	valgrind ./arranger -l3
test3:
	valgrind ./arranger -l3 -c[a-z]


clean:
	rm arranger $(OBJ)*
