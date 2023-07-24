#include <bits/stdc++.h>

using namespace std;
int main(){

int n1,n2;
 
    do{
      cout <<"Digite dois numeros: ";
    cin >> n1 >> n2;
        if (n1 < n2) {
        cout <<("Crescente\n");
        } else if (n1>n2){
        cout <<("Decrescente\n");
        }  
    }while(n1 != n2);
    
    return 0;
}

