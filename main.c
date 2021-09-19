#include <stdio.h>
#include <stdlib.h>
// Usando funções
// main -> principal(ação que o o programa vai ler)

void msg(){

printf("Opa...");
}



int main(){
   msg();// para trazen uma função para a função principal, basta chama-lá(funcao())
   printf("salve fi...\n");
  //int resultado = sla(9, 8);
  //printf("%d", resultado);

  printf("%d\n", sla(9 , 8));
// ________ formas de executar a função no main________
// ------------------------------------------------------


//char cara = 97;
 //slv(cara);
 slv(100);




    return 0;}


int sla ( int num1, int  num2)//aqui ele diz que vai receber dois valores, para executar na função principal, é neceserio colcoar esses 2 valores
{ int res = num1 + num2;
    return res;
}


 //char = '97' ou 'a' = Tabela ASCII
void slv(char ret)
{

printf("%c", ret+1);
}
// as funções deve ser feita em oredm, pois é executada por ordem, mas se n tiver em ordem, ele vai procurar as outras funções de acordo como esta inserido na função main
