
#include <stdio.h>

int main()
{
    int num1, num2, soma;
    int i, n;
    printf("Digite um numero: \n");
    scanf("%d", &num1);
    printf("Digite outro numero maior que o primeiro: \n");
    scanf("%d", &num2);
    n = num2 - num1;
    i=1;
    soma=0;
      while(i<n){
    soma = soma + (num1+i) ;  
      i=i+1;    
      }
    printf("A soma dos numeros entre %d e %d é: %d ", num1, num2, soma);
   
}
