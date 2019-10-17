#include <stdio.h>

#define N 25

int main(int argc, char* argv[]) {
    printf("Hello World!\n");

    for (size_t i = 0; i < N; i++) {
        printf("%zu ", i+1);
    }
    printf("\n");

    size_t sum = 0;
    for (size_t i = 0; i < N; i++) {
        sum += i;
    }
    printf("Sum: %zu\n", sum);

    return 0;
}
