// Variáveis Locais, Globais e Operadores matemáticos
#include <iostream>
using namespace std;

int m1 = 7, m2 = 4; //Variáveis Globais

int main(){
/*-----------------------------------------------------
  Alguns dos Operadores matemáticos:
  Multiplicação: *
  Divisão: / 
  Soma: +
  Subtração: -
  Mod: % -> Ele dá o resto de uma divisão
  Priorizar operação: (). Ex: total = (a + b) * c;
-----------------------------------------------------*/
  int n1 = 10, n2 = 5; // Variáveis Locais.
  int res, res2;

  res = (n1 + m1 + n2 + m2) - 11;
  cout << "O Valor das variáveis resultou em: " << res << "\n\n"; 

  res2 = n1%n2;
  cout << "Resto da divisão: " << res2 <<"\n\n";

  return 0;
}

