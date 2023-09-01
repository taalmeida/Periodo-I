
#include <stdio.h>
#include<math.h>
int main()
{
    int fat, num;
    int i;
    printf("Calculadora Fatorial!\n");
    printf("Digite um numero: \n");
    scanf("%d", &num);
    if(num==0){
        printf("0! = 1");
    }
    
    else{
        i=num;
        fat =1;
        while(i>=1){
            fat = fat * i;
            i= i - 1;
        }
        
        printf("%d! = %d",num, fat);
        
    }
}


