#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m, t, a, b;
    vector<int> ilhas[100010];
    bool found;

    cin >> n >> m;
    for (int i = 0; i < m; i++){
        cin >> t >> a >> b;

        if (t == 0){
            found = false;
            for (int j = 0; j < ilhas[a].size(); j++){
                if (ilhas[a][j] == b){
                    found = true;   
                }
            }
            if (found) cout << 1 << endl;
            else cout << 0 << endl;
        }
        else if (t == 1){
            ilhas[a].push_back(b);
            ilhas[b].push_back(a);
        }
    }
    
    return 0;
}
