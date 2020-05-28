#include <iostream>
using namespace std;

class Estacionamento{
  
  public:	

  int horaEntrada, horaSaida;

  void solicita(){
	  cout << "Digita a hora de entrada: "; cin >> horaEntrada;
    cout << "Digite a hora de saida: "; cin >> horaSaida;
  }

  int calcula(){
    return (horaSaida - horaEntrada) * 5;
  }	
    	
};

int main(){
  Estacionamento est;
  est.solicita();
  
  cout << "Valor a ser pago no total: " << est.calcula() << endl;

  return 0;

}