#include<stdio.h>

main(){
    /*
    Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se  aposentar. 
    As condições para aposentadoria são: • Ter pelo menos 65 anos; • Ou ter trabalhado pelo menos 30 anos;, 
    • Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos. 
    */

   int idade, tempoServiço;

   printf("Digite a idade");
   scanf("%d", &idade);
   printf("Digite o tempo de serviço");
   scanf("%d", &tempoServiço);

   if(idade >= 65 || tempoServiço >= 30 || (idade >= 60 && tempoServiço >= 25)){
   printf("Pode se aposentar");
   }else{
    printf("Nao pode se aposentar");
   }
}