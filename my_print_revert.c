void print_char(char c);

int my_strlen(char *str) {
    int result = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        result++;
    }
    return result;
}

void my_print_revert(char *toRevert) 
{   
    for (int i = 0; i < my_strlen(toRevert) + 1; i++) {
        print_char(toRevert[my_strlen(toRevert) - i]);
    }
}