#include <iostream>
using namespace std;

void ordenaVetor(int arr[], int lenght){
    int k, j, aux;

    for (k = 1; k < lenght; k++) {
        for (j = 0; j < lenght - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                aux          = arr[j];
                arr[j]     = arr[j + 1];
                arr[j + 1] = aux;
            }
        }
    }
}

int buscaBinario(int arr[], int lenght, int pos){
    int primeiro = 0;
    int ultimo = lenght - 1;
    int meio;
    
    while(primeiro <= ultimo){
        meio = (primeiro + ultimo) / 2;
        
        if (arr[meio] == pos){
          return meio;
            
        } else {
            if (pos > arr[meio]){
              primeiro = meio + 1;
            }else{
              ultimo = meio - 1;
            }
        }
    }
    
    return -1;
}

int main(){
    int vet[10], num = 0, contador = 0, resultado = 0;
    
    for(int i=0;i<10;i++){
      cout << "Digite o " << i+1 << " valor: ";cin >> vet[i];
    }
    
    ordenaVetor(vet, 10);
    
    cout << "\nOs valores do array sao: " << endl;
    
    while(contador != 10){
      cout << vet[contador] << "\t";
      contador++;
    }
    
    cout << "\n\nDigite o numero a ser encontrado: ";cin >> num;
    
    resultado = buscaBinario(vet, 10, num);
    
    if(resultado != -1)
    	cout << "\nO valor digitado esta no indice: " << resultado;
	else
		cout << "\nO valor digitado nao esta na lista";
    return 0;
}