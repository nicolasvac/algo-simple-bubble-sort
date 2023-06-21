//
// Created by nicol on 21/06/2023.
//

#include "bubble_sort.h"

int main(int argc, char *argv[]) {
    int vec[] = {22, 17, 3, 2, 15};
    int vec_size = sizeof(vec) / sizeof(int);

    printf("Printing unordered vector: ");
    print_vec(vec, vec_size);
    printf("\n");

    sort(&vec, vec_size);

    printf("Printing ordered vector: ");
    print_vec(vec, vec_size);
    printf("\n");
}