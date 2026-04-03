#include <stdio.h>
#include <stdlib.h>

void alloc(int **p) {
    *p = malloc(sizeof(int));
}

int main(void) {
    int b = 3;
    int *a = NULL;
    a = &b;

    printf("a value   : %p\n", (void *)a);
    printf("&a address: %p\n", (void *)&a);
    printf("%d\n", *a);

    alloc(&a);

    printf("a value   : %p\n", (void *)a);
    printf("&a address: %p\n", (void *)&a);
    printf("%d\n", *a);

    free(a);
    return 0;
}