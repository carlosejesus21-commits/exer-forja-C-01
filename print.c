//inclui a biblioteca stdio.h, permitir o uso de entrada e saida de valores como o print
#include<stdio.h>
//inclui a bibliote stdlib.h, para funcoes utilitarias como o system
#include<stdlib.h>

//inicio da funcao, onde o programo começa a ser executado
int main(){

    float num1 = 100.45;
    int num2 = 200;

    //printar os numeros das variaveis
    printf("%f %d", num1, num2);

    //pausa o programa, até q o usuario presseione qualquer tecla
    system("pause");
    //finaliza o pragrama retornando 0, indicando que  deu tudo certo
    return 0;
}