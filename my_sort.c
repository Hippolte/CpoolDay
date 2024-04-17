void print_number(int value);

void my_sort(int *nlist, int size) {
    char *list = nlist
    for (int i = 0; i < size; i++) {
        int nombre_tres_haut = 100000;
        int min = list[0];
        int indice_min = 0;
        for (int j = 0; j < size; j++) {
            if (list[j] < min) {
                min = list[j];
                indice_min = j;
            }
        }
        print_number(min);
        list[indice_min] = nombre_tres_haut;
    }
}