main: ./library/formula.c ./library/libprint.c ./src/main.c

    $(CC) ./library/formula.c ./library/libprint.c ./src/main.c -o main