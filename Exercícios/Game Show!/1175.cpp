#include <bits/stdc++.h>

using namespace std;

int main(){
    int c;
    cin >> c;

    int numeros_soma[c];
    cin >> numeros_soma[0];
    for (int i = 1; i < c; i++){
        cin >> numeros_soma[i];
        numeros_soma[i] += numeros_soma[i-1];
    }

    sort(numeros_soma, numeros_soma+c);

    if (numeros_soma[c-1] < 0) cout << 100 << endl;
    else cout << 100 + numeros_soma[c-1] << endl;

    return 0;
}
