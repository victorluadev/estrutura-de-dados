#include <iostream>
using namespace std;

int fatorial(int contador){
  if(contador < 1) {
    return 1;
  } else {
    return contador * (fatorial(contador - 1));
  }
}

int main(){
	int valor = 0;

  cout << "Digite o valor do fatorial: ";
  cin >> valor;

  cout << "\n"<< valor << "!: " << fatorial(valor);

  return 0;
}