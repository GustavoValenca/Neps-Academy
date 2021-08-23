#include <bits/stdc++.h>

using namespace std;

vector< pair<int, int> > sorveteiros;

bool ordenar_first(pair<int, int> a, pair<int, int> b);

int main(){
    int p, s, u, v;
    cin >> p >> s;

    for (int i = 0; i < s; i++){
        cin >> u >> v;
        sorveteiros.push_back({u, v});
    }

    sort(sorveteiros.begin(), sorveteiros.end(), ordenar_first);

    for (int i = 0; i < sorveteiros.size(); i++){
        for (int j = 0; j < sorveteiros.size(); j++){

            // // Debug //
            // cout << "i\n";
            // cout << sorveteiros[i].first << " " << sorveteiros[i].second << endl;
            // cout << sorveteiros[j].first << " " << sorveteiros[j].second << endl;

            if (i != j){
                // Analisando se o intervalo pertence ao intervalo i
                if ( (sorveteiros[j].second >= sorveteiros[i].first) && (sorveteiros[j].second <= sorveteiros[i].second) ){
                    if (sorveteiros[j].first < sorveteiros[i].first){
                        sorveteiros[i].first = sorveteiros[j].first;
                    }
                    sorveteiros.erase(sorveteiros.begin()+j);
                    j--;
                }
            }
        }
    }

    sort(sorveteiros.begin(), sorveteiros.end());

    for (int i = 0; i < sorveteiros.size(); i++){
        cout << sorveteiros[i].first << " " << sorveteiros[i].second << endl;
    }
    cout << endl;

    return 0;
}

bool ordenar_first(pair<int, int> a, pair<int, int> b){
    return a.second > b.second;
}
