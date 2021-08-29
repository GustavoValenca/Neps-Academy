#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int pinos[n];
    for (int i = 0; i < n; i++){
        cin >> pinos[i];
    }

    int movimentos = 0;
    for (int i = 0; i < n - 1; i++){
        while (pinos[i] != m){
            if (pinos[i] < m){
                pinos[i]++;
                pinos[i+1]++;
                movimentos++;
            }
            else {
                pinos[i]--;
                pinos[i+1]--;
                movimentos++;
            }
        }
    }

    cout << movimentos << endl;

    return 0;
}
