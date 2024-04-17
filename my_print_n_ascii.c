void print_char(char c);

void my_print_n_ascii(int howMany)
{
    for (int i = 32; i < howMany + 33; i++) {
        print_char(i);
    }
}