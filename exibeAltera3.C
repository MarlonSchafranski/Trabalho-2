#include <stdio.h>
#include <stdlib.h>

void porValor(int a, int b, int c);
void porRef(int *a, int *b, int *c);

void porValor(int a, int b, int c){
    a = b = c = 0;
}

void porRef(int *a, int *b, int *c){
    *a = *b = *c = 0;
}

int main(int argc, char const *argv[])
{
    int x = 2, y = 4, z = 6;
    printf("\n Antes de chamar porValor: x = %d, y = %d, z = %d, x, y, z");//os valores vão ser os 0
    porValor(x, y, z);
    printf("\n depois de chamar porValor: x = %d, y = %d, z = %d x, y, z");// os valores vao ser 2, 4, 6
    printf("\n antes de chamar porRef: x = %d, y = %d, z = %d");//os valores vão ser os 0
    porRef(&x, &y, &z);
    printf("depois dd chamar porRef: x = %d, y = %d, z = %d x, y, z");// os valores vao ser 2, 4, 6
    return 0;
}