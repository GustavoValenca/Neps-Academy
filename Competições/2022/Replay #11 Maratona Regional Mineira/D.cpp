#include <bits/stdc++.h>

using namespace std;

int main(void){
    double e, g;

    cin >> e >> g;

    if (e / g <= 0.73) cout << "ETANOL" << endl;
    else cout << "GASOLINA" << endl;

    return 0;
}