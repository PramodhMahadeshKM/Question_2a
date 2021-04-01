PROJECT_NAME = read_csv.exe

SRC = functions.c\
main.c\
unity\unity.c

INC = inc
UNITY = unity

$(PROJECT_NAME) : $(SRC) 
	gcc -I $(INC) -I $(UNITY) $(SRC) -o read_csv.exe

RUN: $(PROJECT_NAME)
	$(PROJECT_NAME)

CLEAN:
	del /q *.exe