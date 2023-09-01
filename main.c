#include <stdio.h>
int main()
{
    float n1,n2,n3,n4, media;
    int numAlunos, i ;
    printf("Digite a quantidade de alunos:");
    scanf("%d", &numAlunos);
    i =1;
     while(i<=numAlunos){
         printf("Aluno %d\n",i);
         printf("Nota do 1º Bimestre: ");
         scanf("%f", &n1);
         printf("Nota do 2º Bimestre: ");
         scanf("%f", &n2);
         printf("Nota do 3º Bimestre: ");
         scanf("%f", &n3);
         printf("Nota do 4º Bimestre: ");
         scanf("%f", &n4);
         
         media= (n1+n2+n3+n4)/4;
           if(media<70){
               printf("Média: %f. Aluno %d reprovado\n", media,i );
           }
           else{
               printf("Média: %f. Aluno %d aprovado\n", media,i );
           }
         
         i= i+1;
     }
 
}
