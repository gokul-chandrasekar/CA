#include <stdio.h>
#include <stdlib.h>
int main() {
    int *ptr = (int *)malloc(sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    *ptr = 42;
    printf("The value at the allocated memory location is: %d\n", *ptr);
    free(ptr);
     printf("The value at the allocated memory location is: %d\n", *ptr);
    return 0;
}
