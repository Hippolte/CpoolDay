void print_char(char c);

char *my_rotate_alpha(char *sentance) {
    char *alphabet = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; sentance[i] = '\0'; i++) {
        int lettre = 0;
        for (int j = 0; alphabet[j] != '\0'; j++) {
            if (sentance[i] == alphabet[j]) {
                lettre = j;
            }
        lettre = 2 * lettre;
        while (lettre > 26) {
            lettre -= 26;
        }
        sentance[i] = alphabet[lettre];
        }
    }
    return sentance;
}