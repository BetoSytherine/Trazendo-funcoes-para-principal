#include <stdio.h>
#include <stdlib.h>
// Usando fun��es
// main -> principal(a��o que o o programa vai ler)

void msg(){

printf("Opa...");
}



int main(){
   msg();// para trazen uma fun��o para a fun��o principal, basta chama-l�(funcao())
   printf("salve fi...\n");
  //int resultado = sla(9, 8);
  //printf("%d", resultado);

  printf("%d\n", sla(9 , 8));
// ________ formas de executar a fun��o no main________
// ------------------------------------------------------


//char cara = 97;
 //slv(cara);
 slv(100);




    return 0;}


int sla ( int num1, int  num2)//aqui ele diz que vai receber dois valores, para executar na fun��o principal, � neceserio colcoar esses 2 valores
{ int res = num1 + num2;
    return res;
}


 //char = '97' ou 'a' = Tabela ASCII
void slv(char ret)
{

printf("%c", ret+1);
}
// as fun��es deve ser feita em oredm, pois � executada por ordem, mas se n tiver em ordem, ele vai procurar as outras fun��es de acordo como esta inserido na fun��o main
