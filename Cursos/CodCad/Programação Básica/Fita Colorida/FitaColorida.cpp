#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, distancia_atual, menor_distancia;
    cin >> n;
    menor_distancia = n;

    int fita[n];
    for (int i = 0; i < n; i++){
        cin >> fita[i];
    }    

    for (int i = 0; i < n; i++){
        if (fita[i] == -1){
            for (int j = 0; j < n; j++){
                if (fita[j] == 0){
                    distancia_atual = abs(j-i);

                    // Caso a distância seja maior que 9
                    if (distancia_atual > 9) distancia_atual = 9;

                    if (distancia_atual < menor_distancia) menor_distancia = distancia_atual;
                }
            }
            fita[i] = menor_distancia;
            menor_distancia = n;
        }

        // Imprimindo a fita colorida
        if (i == 0) cout << fita[i];
        else cout << " " << fita[i];
    }
    cout << endl;

    return 0;
}
