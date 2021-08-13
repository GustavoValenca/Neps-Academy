#include <bits/stdc++.h>

using namespace std;

int main(){
    string risada, vogaisindo = "";
    cin >> risada;

    for (int i = 0; i < risada.size(); i++){
        if (risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' || risada[i] == 'o' || risada[i] == 'u'){
            vogaisindo += risada[i];
        }
    }

    int tamanho = vogaisindo.size();
    bool funny = true;
    for (int i = tamanho - 1; i >= 0; i--){
        if (vogaisindo[i] != vogaisindo[tamanho-1-i]) funny = false;
    }

    if (funny) cout << "S\n";
    else cout << "N\n";

    return 0;
}
