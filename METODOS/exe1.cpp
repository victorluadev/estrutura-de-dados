#include <iostream>
using namespace std;

float toCelsius(float fahrenheit){
  return (fahrenheit - 32) * 5/9;
}

float toFahrenheit(float celsius){
	return (celsius * 9/5) + 32;
}

int main(){
	
  int opt = 0;
  float value = 0, result = 0;

  cout << "Digite a operacao que deseja realizar"<<endl;
  cout << "1 - Celsius para Fahreinheit\n2 - Fahrenheit para Celsius: ";
  cin >> opt;

  switch (opt)
  {
    case 1:
      cout << "Digite o valor em C °: ";cin >> value;
      
      result = toFahrenheit(value);

      cout << "\nConvertido C ° " << value << " para F ° " << result;
    break;
    case 2:
      cout << "Digite o valor em F °: ";cin >> value;
      
      result = toCelsius(value);

      cout << "\nConvertido F ° " << value << " para C ° " << result;
    break;
    default:  
      cout << "Opcao invalida!";
      
      result = 0;
    break;
  }

  return EXIT_SUCCESS;
}