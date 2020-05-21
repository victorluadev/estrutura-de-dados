#include <iostream>
using namespace std;

bool primo(int num){
  int c=0;

  for(int i=1; i<=num; i++){
    if(i % 2 == 0){
      c++;
    }
  }

  if(c>2) {
    return 0;
  } else{
    return 1;
  }

}


int main(){
  int value = 0;

  cout << "Digite um numero qualquer: "; cin >> value;

  if(primo(value))
    cout << "\nO valor digitado e primo";
  else
    cout << "\nO valor nao e primo";

  return 0;
}