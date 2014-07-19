CC = gcc
WFLG = -W -Wextra -Wall -Wunused -Wformat -Wformat-security -Wuninitialized -Wunreachable-code -Wreturn-type -Wimplicit-function-declaration -Winline
SRC = src/
INC = inc/
OBJ = obj/


arranger: $(OBJ)main.o $(OBJ)arranger.o
	$(CC) $(WFLG) $< -o $@

$(OBJ)arranger.o: $(SRC)arranger.c $(INC)arranger.h
	$(CC) -c $(WFLG) $< -o $@

$(OBJ)main.o: $(SRC)main.c $(INC)arranger.h
	$(CC) -c $(WFLG) $< -o $@

clean:
	rm arranger $(OBJ)*
