#include <stdio.h>

int main() {
  
    int x = 33;
    int y;
    int *p;

    p = &x;
    printf("El valor de p es %d \d", *p);
    return 0;
}