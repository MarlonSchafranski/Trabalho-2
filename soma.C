#include<stdio.h>
#include<stdlib.h>

void soma(int x, int y, int *z);//decla as variaveis x e y  e declara o panteiro z

void soma(int x, int y, int *z){
  int i;
  for ( i = x; i <= y; i++)
  {
    *z+=i;
  }
}

int main(){
    int a, b, s = 0;
    printf("digite 2 nros: ");//entra com os numeros
    scanf("%d %d", &a, &b);
    if (a<=b)
    {
        soma(a, b, &s);
        printf("na soma de %d e %d --> %d", a, b, s);//soma os numeros
        getch();
        return 0;
    }
}