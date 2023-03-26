#include<stdio.h>
#include<stdlib.h>

void exibeAltera(int x, int y, int z){
    printf("Valores de x, y, z %d, %d, %d \n x, y, z");//o valor sera o mesmo pois não retorna nada
    x = 100;
    y = 100;
    z = 100;
    printf("Valores finais de x, y, z dentro da função x, y, z");//os valores val ser somados com mais 100
}

int main(void){
    int a = 1, b = 2, c = 3;
    exibeAltera(a, b, c);
    printf("Valres finais em main de a, b, c: %d %d %d, a, b, c");//os valores vao ser 1, 2, 3
}