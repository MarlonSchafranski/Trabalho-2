#include<stdio.h>
#include<stdlib.h>

int verifica(int n);

int verifica(int n){
    int n1, n2, s;//declara as variaveis n1, n2, e s 
    n1=(n/100);//o numero sera dividido por 100
    n2=(n%100);// ira declarar o resto da divisão
    s=n1+n2;//ira somar o numero dividido por 100 + o resto da divisão
    printf("\n soma %d", s);//sera printado soma
    if (s*s==n)//se s*s for igual a n retorna 1
    return 1;
    else return 0;//se não retorna 0
}

int main(int argc, char const *argv[])
{
    int num, x;//declara a variavel num

    do
    {
        printf("digite um nro: \n");//printa digite um nro:
        scanf("%d", &num);//valida a variavel num
    } while (num<100 || num>9999);
    x=verifica(num);
    
    if (x==1)
        printf("\n --> %d possui a caracteristica \n ", num);
        else printf("\n nro --> %d não possui nem um ");
    return 0;
}