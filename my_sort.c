void print_number(int value);

void my_sort(int *nlist, int size) {
    for (int i = 0; i < size; i++) {
        int nombre_tres_haut = 100000;
        int min = nlist[0];
        int indice_min = 0;
        for (int j = 0; j < size; j++) {
            if (nlist[j] < min) {
                min = nlist[j];
                indice_min = j;
            }
        }
        print_number(min);
        nlist[indice_min] = nombre_tres_haut;
    }
}