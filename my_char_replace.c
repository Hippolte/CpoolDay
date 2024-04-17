void print_char(char c);

char *my_char_replace(char *origin, char toFind, char toReplace) {
    char *result = "";
    for (int i = 0; origin[i] != '\0'; i++) {
        if (origin[i] == toFind) {
            strcat(result, toReplace);
        }
        else {
            strcat(result, origin[i]);
        }
    }
    return result;
}

#include <stdio.h>

int main(int ac, char **av)
{
    char str[] = "bienvenue à epitech !";
    printf("%s\n", my_replace_char(str, 'e', 'a'));
    return 0;
}