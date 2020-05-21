#include <iostream>
using namespace std;

int soma(int num1, int num2){
  return num1 + num2;
}

int quad(int num1){
  return num1 * num1;
}

int somaQuad(int quad1, int quad2){
  return soma(quad(quad1), quad(quad2));
}

int main(){
  int valueA = 0, valueB = 0;

  cout << "Digite o valor de A: ";cin >> valueA;
  cout << "\nDigite o valor de B: ";cin >> valueB;

  cout << endl;

  cout << "Soma dos quadrados: " << somaQuad(valueA, valueB);

  return 0;
}