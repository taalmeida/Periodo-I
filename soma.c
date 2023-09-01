#include <stdio.h>
int main()
{
  int n,i,soma;
  i=0;
     printf("Digite 10 numeros: \n");
  while(i<10){
      printf(" - ");
      scanf("%d", &n);
      
       if(n>40){
          soma=soma+n;
        }
    i =i+1;   
  }
      printf("A soma dos numeros maiores que 40 é: %d", soma);
}