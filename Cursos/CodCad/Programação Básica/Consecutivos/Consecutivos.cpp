#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, atual, anterior, maiorqtd = 0, atualqtd = 0;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> atual;

        if (i == 0) anterior = atual;

        // Debug //
        // cout << "Anterior: " << anterior << " Atual: " << atual << endl;
        // cout << "Atualqtd: " << atualqtd << " Maiorqtd: " << maiorqtd << endl;

        if (atual == anterior) atualqtd++;
        else{
            anterior = atual;
            
            if (atualqtd > maiorqtd){
                maiorqtd = atualqtd;
            }
            atualqtd = 1;
        }
    }

    if (atualqtd > maiorqtd) maiorqtd = atualqtd;
    cout << maiorqtd << endl;

    return 0;
}
