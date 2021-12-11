#include <bits/stdc++.h>

using namespace std;

int aeroportos[110];

int main(){
    int a, v, x, y, qtd_voos;
    int testes = 0;
    vector<int> maior_trafego;

    cin >> a >> v;
    while (a !=0 and v != 0){
        testes++;

        // Reseting info from previous test
        for (int i = 1; i <= a; i++){
            aeroportos[i] = 0;
        }
        qtd_voos = 0;
        maior_trafego.clear();
        
        // Adicionando voos
        for (int i = 1; i <= v; i++){
            cin >> x >> y;

            aeroportos[x]++;
            aeroportos[y]++;
        }

        // Selecionando os aeroportos com maior tráfego
        for (int i = 1; i <= a; i++){
            if (aeroportos[i] > qtd_voos){
                qtd_voos = aeroportos[i];

                maior_trafego.clear();
                maior_trafego.push_back(i);
            }
            else if (aeroportos[i] == qtd_voos){
                maior_trafego.push_back(i);
            }
        }
        
        // Output
        cout << "Teste " << testes << endl;
        if (!maior_trafego.empty()){
            cout << maior_trafego.front();

            for (int i = 1; i < maior_trafego.size(); i++){
                cout << " " << maior_trafego[i];
            }
            cout << endl;
        }
        cout << endl;

        // New input
        cin >> a >> v;
    }

    return 0;
}
