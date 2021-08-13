#include <bits/stdc++.h>

using namespace std;

int somaslinhas[1010][1010];
int somascolunas[1010][1010];
int somas[1010][1010];

int main(){
    int n, pesoatual, pesomaior = 0;
    cin >> n;

    int tabuleiro[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> tabuleiro[i][j];
        }
    }
   
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            // Para cada linha, é feita a soma de todos os seus elementos
            somaslinhas[i][0] += tabuleiro[i][j];

            // Para cada coluna, é feita a soma de todos os seus elementos
            somascolunas[0][i] += tabuleiro[j][i];
        }

        for (int j = 1; j < n; j++){
            // Distribuindo as somas de cada linha para o peso de todos os elementos do tabuleiro em um vetor separado
            somaslinhas[i][j] = somaslinhas[i][0];

            // Distribuindo as somas de cada coluna para o peso de todos os elementos do tabuleiro em um vetor separado
            somascolunas[j][i] = somascolunas[0][i];
        }
    }

    // Para cada elemento do tabuleiro, adicionando a soma de sua linha e de sua coluna
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            somas[i][j] += somaslinhas[i][j];
            somas[i][j] += somascolunas[i][j];

            // Removendo o proprio elemento duplicado da soma final
            somas[i][j] -= 2* (tabuleiro[i][j]);

            // Verificando se é o maior peso
            if (somas[i][j] > pesomaior) pesomaior = somas[i][j];
        }
        
    }

    // Test //
    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < n; j++){
    //         cout << somas[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    
    // Imprimindo o maior peso 
    cout << pesomaior << endl;

    return 0;
}
