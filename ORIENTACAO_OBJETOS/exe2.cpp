#include <iostream>
using namespace std;

class Triangulo{

  public:

  float ladoA, ladoB, ladoC;

  void populaValores(){
    cout << "Digite o valor de A: "; cin >> ladoA;
    cout << "Digite o valor de B: "; cin >> ladoB; 
    cout << "Digite o valor de C: "; cin >> ladoC;
  }

  bool isValid(){
    if (ladoA + ladoB <= ladoC || ladoA + ladoC <= ladoB || ladoB + ladoC <= ladoA) 
      return false; 
    else
      return true;
  }

  void tipoTriangulo(){
    if(isValid()){
      if((ladoA == ladoB) && (ladoB == ladoC) && (ladoC == ladoA)){
        cout << "Triangulo equilatero";
      }
      else if((ladoA == ladoB) || (ladoB == ladoC) || (ladoC == ladoA)){
        cout << "Triangulo isosceles"; 
      } else {
        cout << "Triangulo escaleno";
      }
    } else {
    	cout << "Triangulo invalido!";
	}
  }
  
};

int main(){
  Triangulo tri;

  tri.populaValores();
  cout << "\n----------" << endl;
  tri.tipoTriangulo();
  cout << "\n----------" << endl;

  return 0;
}