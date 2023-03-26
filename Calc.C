#include<stdio.h>
#include<stdlib.h>

void calc(int *a ,int b);

void calc(int *a ,int b){
    *a *= 2;//multiplica ponteiro a com 2
    b *= 5;//multiplica a variavel b com 5

    printf("\n a --> %d",a);//printa a -->501217928
    printf("\n b --> %d",b);//printa b -->10
}

int main(int argc, char const *argv[])
{
    int x = 4, y = 2;//atibui 4 para x e 2 para y 
    calc(&x, y);//pegas os valores de x e y e multiplica com as variaveis de cima
    printf("\n --> %d", x);// printa --> 8
    printf("\n --> %d", y);// printa --> 2
    getch(); 
    return 0;
}