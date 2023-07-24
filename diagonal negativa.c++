#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,cont;
    cont = 0;
    cout <<"Quantos a ordem da matriz: ";
    cin >> n;
    
    int mat [n][n];
    
    for(int i = 0; i < n; i++){
        for( int j= 0; j < n; j++){
        cout << "Elemento"<< "[" << i  << "," << j << "]"<<":";
        cin >> mat [i][j];
        if (mat [i][j] < 0){
            cont ++ ;
        }
        }
    }
    
    cout << "Diagonal principal :\n";

    for( int i = 0; i < n; i++){
        cout << mat [i][i] << " ";
    }

    cout << endl;
    cout << "QUANTIDADE DE NEGATIVOS = " << cont;


    return 0;
}