#include<stdio.h>
#include<stdlib.h>

int verifica(int n);

int verifica(int n){//inicio da função
    int i, q=2;//declaração das variaveis
    for ( i = 2; i <=(n/2); i++)  //Início do loop for que vai de 2 até a metade de "n"
    {
        if (n%i == 0)//Se o resto da divisão de "n" por "i" for zero, incrementa o valor de "q"
            q++;
        return q;//Retorna "q" assim que encontra o primeiro divisor de "n".
    }    
}

int main(int argc, char const *argv[])//Início da função principal.
{
    int num;//Declaração da variável inteira "num"
    do//Início do loop do-while
    {
        printf("digite um nro");// Pede ao usuário para digitar um número
        scanf("%d", &num);//Lê o número digitado pelo usuário e o armazena na variável "num".

        if (num!=0)//Se "num" for diferente de zero, executa o bloco de código seguinte
            printf("\n nro --> %d possui  %d  divisores \n", num, verifica(num));//Chama a função "verifica" para calcular o número de divisores de "num" e imprime o resultado.
        
    } while (num!=0);//Continua a execução do loop enquanto "num" for diferente de zero.
    getch();//Aguarda o usuário pressionar uma tecla
    return 0;//Retorna zero para indicar que o programa foi executado com sucesso.
}