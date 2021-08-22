#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x, m;
    cin >> n;

    vector<int> fila;
    for (int i = 0; i < n; i++){
        cin >> x;
        fila.push_back(x);
    }

    // // Test //
    // cout << endl << 'v' << endl;
    // for (int i = 0; i < n ; i++){
    //     cout << fila[i] << " ";
    // }
    // cout << endl;

    cin >> m;
    for (int i = 0; i < m; i++){
        cin >> x;
        for (int j = 0; j < n; j++){
            if (fila[j] == x){
                fila.erase(fila.begin() + j);
                break;
            }
        }
    }

    for (int i = 0; i < n - m; i++){
        cout << fila[i] << " ";
    }
    cout << endl;

    return 0;
}
