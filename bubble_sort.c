//
// Created by nicol on 21/06/2023.
//

#include "bubble_sort.h"

void sort(int *vec, int vec_size) {
    if (vec_size <= 1) {
        return;
    }

    int vec_max_size = vec_size;

    while (vec_max_size != 0) {
        // Minus 1 because we already do +1 while checking the bubble
        for (int i = 0; i < vec_max_size - 1; ++i) {
            if (vec[i] > vec[i + 1]) {
                // swap
                int temp = vec[i + 1];
                vec[i + 1] = vec[i];
                vec[i] = temp;
            }
        }

        vec_max_size--;
    }
}

void print_vec(int *vec, int vec_size) {
    for (int i = 0; i < vec_size; i++) {
        // Print the number
        printf("%d ", vec[i]);

        // Go to a new line every 50 characters
        if (i % 50 == 0 && i != 0) {
            printf("\n");
        }
    }

    printf("\n");
}
