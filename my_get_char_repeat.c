int my_get_char_repeat(char to_find, const char *to_search) {
    int result = 0;
    for (int i = 0; to_search[i] != '\0'; i++) {
        if (to_search[i] == to_find) {
            result += 1;
    }
    }
    return result;
}