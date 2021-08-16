#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    int sequencia[n];
    for (int i = 0; i < n; i++){
        cin >> sequencia[i];
    }

    sort(sequencia, sequencia + n);

    for (int i = 0; i < n; i++){
        cout << sequencia[i] << " ";
    }
    cout << endl;

    return 0;
}
