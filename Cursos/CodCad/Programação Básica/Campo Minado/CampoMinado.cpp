#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    int tabuleiro[n];
    for (int i = 0; i < n; i++){
        cin >> tabuleiro[i];
    }

    // Caso haja apenas uma célula
    if (n == 1) cout << tabuleiro[0] << endl;

    else{
        for (int i = 0; i < n; i++){
            // Primeira célula
            if (i == 0) cout << tabuleiro[i] + tabuleiro[i+1] << endl;

            // Segunda célula
            else if (i == n-1) cout << tabuleiro[i] + tabuleiro[i-1] << endl;
            
            else cout << tabuleiro[i-1] + tabuleiro[i] + tabuleiro[i+1] << endl;
        }
    }

    return 0;
}
