void print_char(char c);

char *my_char_replace(char *origin, char toFind, char toReplace) {
    for (int i = 0; origin[i] != '\0'; i++) {
        if (origin[i] == toFind) {
            origin[i] = toReplace;
    }
    }
    return origin;
}