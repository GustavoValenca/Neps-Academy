#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> fila;

    int n;
    cin >> n;

    int tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        fila.push_back(tmp);
    }

    int m;
    cin >> m;

    int tamanho;
    tamanho = fila.size();
    for (int i = 0; i < m; i++){
        cin >> tmp;

        for (int j = 0; j < tamanho; j++){
            if (fila[j] == tmp){
                fila.erase(fila.begin() + j);
                tamanho--;
                break;
            }
        }
    }

    for (int i = 0; i < tamanho; i++){
        cout << fila[i] << " ";
    }
    cout << endl;

    return 0;
}