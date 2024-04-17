void print_char(char c);

void my_get_words(char *sentance) {
    for (int i = 0; sentance[i] != '\0'; i++) {
        if (sentance[i] == ' ') {
            if (sentance[i + 1] != ' ') {
                print_char(10);
            }
        }
        else {
            print_char(sentance[i]);
        }
    }
}