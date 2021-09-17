#include <bits/stdc++.h>

using namespace std;

int faixas[100010];

int busca_binaria(int a, int base, int topo, int size);

int main(){
    int n, m, x;
    cin >> n >> m;

    for (int i = 0; i < n - 1; i++){
        cin >> faixas[i];
    }

    int premios[n];
    for (int i = 0; i < n; i++){
        cin >> premios[i];
    }

    vector< pair<int, int> > ogros;
    for (int i = 0; i < m; i++){
        cin >> x;
        ogros.push_back({x, 0});
    }

    int ponto;
    for (int i = 0; i < m; i++){
        ponto = busca_binaria(ogros[i].first, 0, n-1, n-1);
        ogros[i].second = premios[ponto+1];
    }

    for (int i = 0; i < m; i++){
        cout << ogros[i].second;

        if (i != m-1) cout << " ";
        else cout << endl;
    }
    
    return 0;
}

int busca_binaria(int a, int base, int topo, int size){
    int meio = (base + topo) / 2;

    if (a >= faixas[meio] and meio == size-1) {
        return meio;
    }
    else if (a >= faixas[meio] and a < faixas[meio + 1]){
        return meio;
    }
    else if (a >= faixas[meio] and a > faixas[meio + 1]){
        return busca_binaria(a, meio + 1, topo, size);
    }
    else if (a < faixas[meio] and meio == 0){
        return -1;
    }
    else if (a < faixas[meio] and a >= faixas[meio-1]){
        return meio - 1;
    }
    else if (a < faixas[meio] and a < faixas[meio-1]){
        return busca_binaria(a, base, meio-1, size);
    }
}
