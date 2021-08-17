#include <bits/stdc++.h>

using namespace std;

struct paises{
    int identificador;
    int ouro = 0;
    int prata = 0;
    int bronze = 0;
};

bool ordenar_competidores(paises a, paises b);

int main(){
    int n, m, o, p , b;
    cin >> n >> m;

    paises competidores[n];
    for (int i = 0; i < n; i++){
        competidores[i].identificador = i+1;
    }

    for (int i = 0; i < m; i++){
        cin >> o >> p >> b;
        competidores[o-1].ouro++;
        competidores[p-1].prata++;
        competidores[b-1].bronze++;
    }

    // // Debug //
    // for (int i = 0; i < n; i++){
    //     cout << competidores[i].identificador << " " << competidores[i].ouro << " " << competidores[i].prata << " " << competidores[i].bronze << endl;
    // }

    sort(competidores, competidores + n, ordenar_competidores);

    for (int i = 0; i < n; i++){
        cout << competidores[i].identificador << " ";
    }
    cout << endl;

    return 0;
}

bool ordenar_competidores(paises a, paises b){
    if (a.ouro != b.ouro) return a.ouro > b.ouro;
    else if (a.prata != b.prata) return a.prata > b.prata;
    else if (a.bronze != b.bronze) return a.bronze > b.bronze;
    else return a.identificador < b.identificador;
}
