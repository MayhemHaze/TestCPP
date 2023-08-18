/*-----------------------------------------------------------------
Incremento e Decremento de variáveis. Operadores pós e pré-fixados.
-----------------------------------------------------------------*/

#include <iostream>
using namespace std;

int main(){
  n1 = 5;  

  cout << n1 << "\n\n";
  n1 = n1 + 1;
  // ou poderia ser: n1 += 1;

  cout << n1 << "\n\n";

  //adicionar 1 ao valor de uma variável: n1++;
  /*
  usar operadores na conta:
  n1*= 2; -> Multiplica n1 por 2.
  n1/=2; -> Divide n1 por 2.
  n1-= 2 -> Subtrai 2 de n1.
  n1+= 2 -> Soma 2 a n1.
  
  n1++ -> Pós Incremento
  Usa o valor primeiro e depois incrementa.
  
  ++n1 -> Pré Incremento
  Incrementa o valor e depois utiliza.
    */
  
  return 0;
}
