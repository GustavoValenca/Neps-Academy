#include <bits/stdc++.h>

using namespace std;

vector<int> friends[1001];
bool check[1001];

void verificar(int a);

int main(){
    int n, m, x, y;
    cin >> n >> m;

    for (int i = 0; i < m; i++){
        cin >> x >> y;

        friends[x].push_back(y);
        friends[y].push_back(x);
    }   

    int equipes = 0;
    
    for (int i = 1; i < n + 1; i++){
        check[i] = true;
    }

    for (int i = 1; i < n + 1; i++){
        if (check[i]){
            verificar(i);

            equipes++;
        }
    }

    cout << equipes << endl;

    return 0;
}

void verificar(int a){
    if (friends[a].size() > 0){
        for (int j = 0; j < friends[a].size(); j++){
            if (check[friends[a][j]]){
                check[friends[a][j]] = false;
                verificar(friends[a][j]);
            }
        }
    }
}
