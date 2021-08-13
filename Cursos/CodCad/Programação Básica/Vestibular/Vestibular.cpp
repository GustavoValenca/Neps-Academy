#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, acertos = 0;
    string gabarito, marcadas;
    cin >> n >> gabarito >> marcadas;

    for (int i = 0; i < n; i++){
        if (marcadas[i] == gabarito[i]) acertos++;
    }

    cout << acertos << endl;

    return 0;
}
