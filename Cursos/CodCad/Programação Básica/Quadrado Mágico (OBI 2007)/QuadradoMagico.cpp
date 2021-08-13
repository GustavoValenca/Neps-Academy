#include <bits/stdc++.h>

using namespace std;

// Declara todos os valores como 0
int somas[110];

int main(){
    int n;
    cin >> n;

    // Test //
    // cout << somas[22] << endl;

    int quadrado[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> quadrado[i][j];
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            // Realizando a soma dos elementos das n linhas
            somas[i] += quadrado[i][j];

            // Realizando a soma da diagonal principal
            if (i == j) somas[(n*2)] += quadrado[i][j];

            // Realizando a soma da diagonal secundária
            if (i + j == n - 1) somas[(n*2) + 1] += quadrado[i][j];
        }
    }

    // Realizando a soma dos elementos das n colunas
    for (int j = 0; j < n; j++){
        for (int i = 0; i < n; i++){
            somas[n+j] += quadrado[i][j];
        }
    }

    // Verificando se todas as somas são iguais
    bool magico = true;
    int soma = somas[0];
    for (int i = 1; i < (n*2) + 2; i++){
        if (somas[i] != soma) magico = false;
    }

    if (magico) cout << soma << endl;
    else cout << -1 << endl;

    return 0;
}
