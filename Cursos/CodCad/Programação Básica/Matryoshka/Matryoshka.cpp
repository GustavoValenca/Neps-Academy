#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    int bonecas[n], bonecas_organizadas[n];
    for (int i = 0; i < n; i++){
        cin >> bonecas[i]; 
        bonecas_organizadas[i] = bonecas[i];
    }

    sort(bonecas_organizadas, bonecas_organizadas + n);

    vector<int> alturas;
    for (int i = 0; i < n; i++){
        if (bonecas[i] != bonecas_organizadas[i]) alturas.push_back(bonecas[i]);
    }

    sort(alturas.begin(), alturas.end());
    
    cout << alturas.size() << endl;
    if (alturas.size() != 0){
        for (int i = 0; i < alturas.size(); i++){
            cout << alturas[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
