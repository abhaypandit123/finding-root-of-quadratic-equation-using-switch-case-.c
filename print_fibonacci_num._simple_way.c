//FIRST N FIBONACCI NUMBER 
#include <stdio.h>

int main() {
    int n, a = 0, b = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        printf("%d ", a);
        b = a + b;   // next term
        a = b - a;   // update a
    }
    return 0;
}