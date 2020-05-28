#include <iostream>
using namespace std;

class Matematica{

  public:

  float valueA, valueB;

  void populaValores(){
    cout << "Digite o valor de A: "; cin >> valueA;
    cout << "Digite o valor de B: "; cin >> valueB; 
  }

  float soma(){
    return valueA + valueB;
  }

  float subtracao(){
    return valueA - valueB;
  }

  float multiplicacao(){
    return valueA * valueB;
  }

  float divisao(){
    return (valueB > 0) ? valueA / valueB : 0;
  }

};

int main(){
  Matematica calc;

  calc.populaValores();

  cout << "\n---------------" << endl;
  cout << "Soma: " << calc.soma() << endl;
  cout << "Subtracao: " << calc.subtracao() << endl;
  cout << "Divisao: " << calc.divisao() << endl;
  cout << "Multiplicacao: " << calc.multiplicacao();
  cout << "\n---------------" << endl;
  
  return 0;
}