#include <bits/stdc++.h>

using namespace std;

bool ordenar_por_habilidade(pair<string, int> a, pair<string, int> b);

int main(){
    int n, t, habilidade;
    string nome;
    cin >> n >> t;

    vector< pair<string, int> > jogadores;
    for (int i = 0; i < n; i++){
        cin >> nome >> habilidade;
        jogadores.push_back({nome, habilidade});
    }

    // Ordenando os jogadores por habilidade
    sort(jogadores.begin(), jogadores.end(), ordenar_por_habilidade);

    // Separando os times
    vector< pair<string, int> > times[t];
    for (int i = 0, j = 0; i < n; i++, j++){
        if (j == t) j = 0;
        times[j].push_back(jogadores[i]);
    }

    // // Outra Maneira //
    // for (int i = 0; i < jogadores.size(); i++){
    //     times[i % t].push_back(jogadores[i]);
    // }

    for (int i = 0; i < t; i++){
        // Ordenando times pelo nome de cada jogador
        sort(times[i].begin(), times[i].end());

        cout << "Time " << i + 1 << endl;
        for (pair<string, int> j : times[i]){
            cout << j.first << endl;
        }
        cout << endl;
    }

    return 0;
}

bool ordenar_por_habilidade(pair<string, int> a, pair<string, int> b){
    return a.second > b.second;
}
