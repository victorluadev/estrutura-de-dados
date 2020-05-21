#include <iostream>
using namespace std;

float soma( float vA, float vB){
  return vA + vB;
}

float subtracao( float vA, float vB){
  return vA - vB;
}

float multiplicacao( float vA, float vB){
  return vA * vB;
}

float divisao( float vA, float vB){
  return (vB > 0) ? vA / vB : 0;
}

int main(){
	
  int opt = 0;
  float val1 = 0, val2 = 0, result = 0;

  while(opt != 5){
    cout << "\nDigite o primeiro valor: ";cin >> val1;
    cout << "\nDigite o segundo valor: ";cin >> val2;

    cout << "\nDigite a operacao que deseja: " << endl;
    cout << "1 - Soma" << endl;
    cout << "2 - Subtracao" << endl;
    cout << "3 - Multiplicacao" << endl;
    cout << "4 - Divisao" << endl;
    cout << "5 ou outro - Cancelar operacao" << endl;
    cout << "\nEntrada: ";cin >> opt;

    switch(opt){
      case 1:
        result = soma(val1,val2);
      break;
      case 2:
        result = subtracao(val1,val2);
      break;
      case 3:
        result = multiplicacao(val1,val2);
      break;
      case 4:
        result = divisao(val1,val2);
      break;
      default:
        cout << "Opcao invalida!!" << endl;
        result = 0;
        opt = 5;
      break;
    }

    cout << "Resultado: " << result << endl;
  }

  return 0;
}