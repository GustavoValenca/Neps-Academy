#include <bits/stdc++.h>

using namespace std;

struct piloto{
    int identificador;
    int pontos = 0;
};

struct chegada{
    int identificador;
    int ordem;
};

bool ordenar_competidores_points(piloto a, piloto b);
bool ordenar_competidores_id(piloto a, piloto b);
bool ordernar_chegadas(chegada a, chegada b);

int main(){
    int g, p, s, k;
    cin >> g >> p;

    while(g != 0 and p != 0){
        piloto competidores[p];
        for (int i = 0; i < p; i++){
            competidores[i].identificador = i + 1;
        }

        chegada grandes_premios[g][p];
        for (int i = 0; i < g; i++){
            for (int j = 0; j < p; j++){
                cin >> grandes_premios[i][j].ordem;
                grandes_premios[i][j].identificador = j+1;
            }
        }

        for (int i = 0; i < g; i++){
            sort(grandes_premios[i], grandes_premios[i]+p, ordernar_chegadas);
        }

        cin >> s;
        for (int i = 0; i < s; i++){
            cin >> k;
            int pontuacao[k];
            for (int j = 0; j < k; j++){
                cin >> pontuacao[j];
            }

            for (int j = 0; j < g; j++){
                for (int l = 0; l < k; l++){

                    // // Debug // 
                    // cout << pontuacao[l] << endl;

                    competidores[grandes_premios[j][l].identificador - 1].pontos += pontuacao[l];
                }
            }

            // cout << "Pontos\n";
            // for (int j = 0; j < p; j++){
            //     cout << competidores[j].identificador << " " << competidores[j].pontos << endl; 
            // }

            // Colocando os pilotos em ordem decrescente de pontos
            sort(competidores, competidores+p, ordenar_competidores_points);

            // Determinando quantos vencedores
            bool tem_vencedor = true;
            int contador = 0;
            int vencedores[p];
            while (tem_vencedor){
                vencedores[contador] = competidores[contador].identificador;
                if (competidores[contador].pontos != competidores[contador+1].pontos) tem_vencedor = false;
                contador++; 
            }

            // Colocando os vencedores em ordem crescente
            sort(vencedores, vencedores+contador);
            for (int j = 0; j < contador; j++){
                cout << vencedores[j] << " ";
            }
            cout << endl;

            // Resetar os pontos de cada piloto
            for (int j = 0; j < p; j++){
                competidores[j].pontos = 0;
            }

            // Colocar de volta na ordem por id
            sort(competidores, competidores+p, ordenar_competidores_id);
        }

        cin >> g >> p;
    }

    return 0;
}

bool ordenar_competidores_points(piloto a, piloto b){
    return a.pontos > b.pontos;
}

bool ordenar_competidores_id(piloto a, piloto b){
    return a.identificador < b.identificador;
}

bool ordernar_chegadas(chegada a, chegada b){
    return a.ordem < b.ordem;
}
