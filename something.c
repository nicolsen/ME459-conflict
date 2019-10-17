#include <stdio.h>

#define N 25

int main(int argc, char* argv[]) {
    printf("Hello world!!!!\n");

    for (size_t i = 0; i < N; i++) {
        printf("%zu ", i+2);
    }
    printf("\n");

    int accumulate = 0;
    for(int i = 0; i < N; i++) {
        if (i % 2) {
            accumulate += i;
        } else {
            accumulate -= i;
        }
    }

    printf("Accumulate: %d\n", accumulate);

    return 0;
}
