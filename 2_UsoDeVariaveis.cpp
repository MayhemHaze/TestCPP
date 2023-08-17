#include <iostream>
using namespace std;
// trabalhar com as variáveis nesse programa.
int main(){
  // indicar tipo, nome e valor inicial das variáveis.
  // tipo nome; Ex: int salário;
  // tipo nome = valor; Ex: int salário = 1500;
  int vidas = 0;
  char letra = 'B';// letra única, a não ser que especifique uma quantidade, Ex: char letras[20]; -> irá aceitar até 20 caracteres.
  double decimal = 5.2; // numeros decimais, Ex: 2.49999999
  float decimal2 = 5.2; //arredonda, precisão menor Ex: 2,5
  bool vivo = true; //verdadeiro ou falso
  String nome = "Breno"; //variável que receberá um texto

  cout << "Digite o número de vidas: ";
  cin >> vidas;
  
  cout << "Digite uma letra: ";
  cin >> letra;

  cout << "Digite a quantia de dinheiro: ";
  cin >> decimal;
  
  cout << "Digite o seu nome: ";
  cin >> nome;

  cout << "\nVidas: " << vidas << "\nDinheiro";
  cout << "\nLetra: " << letra;
  cout << "\nDinheiro: " << decimal;
  cout << "\nVivo: " << vivo;
  cout << "\nNome" << nome;
  
  return 0
}
