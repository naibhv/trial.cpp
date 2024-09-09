#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int i;
    printf("masukkan angka:");
    scanf ("%d", &i);
    printf("\n");
    
    if (i % 2 == 0){
        printf("genap \n", i);
    }
    else {
        printf("ganjil \n", i);
    }
    return 0;
}