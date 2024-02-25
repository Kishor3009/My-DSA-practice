#include <stdio.h>
#include <stdlib.h>
int *func(int a) {
    int *array = (int *)malloc(10*sizeof(int));
    int i;
    for (i=0; i<10; i++) {
        array[i] = a;
    }
    free(array);
    return array;
}
int main() {
    int *array = func(3);
    printf("%d\n", array[7]);
}

