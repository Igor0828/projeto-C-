#include<bits/stdc++.h>
using namespace std;
int main() {
    
    int n,soma_idade=0;
    cout <<"Quantas pessoas serao digitadas? ";
    cin >> n;
    
    char nome[n][50];
    int idade[n];
    float altura[n];
    float soma_altura = 0;
    for (int i=0; i < n; i++){
    
        cout <<"Dados da a pessoa:\n" << i+1;
        cout <<"Nome: ";
        cin.ignore(INT_MAX, '\n');
        gets(nome[i]);
        cout <<"Idade: ";
        cin >> idade[i];
        soma_idade += idade[i];
        
        cout <<("Altura em metros: ");
        cin >>altura[i] ;
        soma_altura+=altura[i];
        
    }

    float media_idade=0;
    float media_altura=0;
    //calculando média de idade

    media_idade += soma_idade / n;
    media_altura += soma_altura / n;

    cout <<"\nMedia idade = \n" << media_idade;
    cout << "\nMedia altura = \n" << media_altura;



    return 0;
}
