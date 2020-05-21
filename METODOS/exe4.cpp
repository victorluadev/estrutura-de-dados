#include <iostream>
using namespace std;

bool isBissexto(int ano){
  if((ano % 4 == 0 || ano % 400 == 0) && ano % 100 != 0){
    return true;
  } else {
    return false;
  }
}

int main(){
  int ano = 0;

  cout << "Digite o ano e descubra se e bissexto: ";
  cin >> ano;

  if(isBissexto(ano)){
    cout << "\nO ano " << ano << " e bissexto";
  } else {
    cout << "\nO ano " << ano << " nao e bissexto";
  }
}