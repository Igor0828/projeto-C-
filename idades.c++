#include <bits/stdc++.h>

using namespace std;
int main(){

char nome1[50],nome2[50];
    int idade1,idade2;
    double media;
        
        cout <<"Dados da primeira pessoa:" << endl;
        cout <<"Nome:" << endl;
        cin >> nome1;
        cin.ignore(INT_MAX, '\n');
        
        cout << "Idade:" << endl;
        cin >> idade1;
        
        cout <<"Dados da segunda pessoa:"<< endl;
        cout <<"Nome: ";
        cin >> nome2;
        cin.ignore(INT_MAX, '\n');
        
        cout <<"Idade:" << endl;
        cin >> idade2;;

       media = (double)(idade1 + idade2)/2.0;

       cout << "A meida de idade de: " << nome1 <<" e "<< nome2 << " = "<< media;
    
    return 0;
}