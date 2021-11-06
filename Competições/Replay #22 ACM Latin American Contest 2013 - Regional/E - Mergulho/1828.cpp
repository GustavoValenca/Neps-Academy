#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, r;
    cin >> n >> r;
    
    bool mergulhadores[n];
    for (int i = 0; i < n; i++){
        mergulhadores[i] = false;
    }

    int x;
    for (int i = 0; i < r; i++){
        cin >> x;

        mergulhadores[x - 1] = true;
    }

    int qtd = 0;
    for (int i = 0; i < n; i++){
        if (mergulhadores[i] == false){
            cout << i + 1;
            if (i == n - 1) cout << endl;
            else cout << " ";

            qtd++;
        }
    }

    if (!qtd) cout << "*\n";

    return 0;
}
