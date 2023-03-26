#include<stdio.h>
#include<stdlib.h>

void incrementar(int *num);

void incrementar(int *num){
    *num+=10;//soma num mais 10
    printf("\n num --> %d", *num);//printa num -->
}

int main(int argc, char const *argv[])
{
    int i=1; //atribui np i o valor 1
    incrementar(&i);
    printf("\n --> %d", i);//printa --> 11
    getch();
    return 0;
}