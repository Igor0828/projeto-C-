#include <bits/stdc++.h>

using namespace std;
int main(){

int numero, soma;
   soma=0;
   do{
  cout << "Digite um numero: ";
  cin >> numero;
  if(numero%2 != 0){
    soma += numero;
  }

}while(numero%2 != 0);
cout << "Soma dos numeros imapares: "<< soma;
   
    return 0;
}