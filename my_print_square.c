void print_char(char c);

void my_print_square(int size, char c) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            print_char(c);
        }
        print_char(10);
    }
}