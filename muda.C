#include<stdio.h>
#include<stdlib.h>

void mudaPrimeiro(int *primeiro, int segundo);

void mudaPrimeiro(int *primeiro, int segundo){
    *primeiro = segundo; //atribui o valor do primeiro ao segundo
}

int main(void)
{
    int a = 0, b = 5;

    printf("Valor de a: %d - Valor de b %d  \n a, b");//pega os valores 0 e 5 nas vaiaveis a e b
    mudaPrimeiro(&a, b);//pega os valores de mudaPrimeiro
    printf("Valor de a: %d - Valor de b %d  \n a, b");// os valores não muda
    return 0;
}