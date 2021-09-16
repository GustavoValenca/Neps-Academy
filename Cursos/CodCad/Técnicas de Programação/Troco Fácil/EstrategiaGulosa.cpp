#include <bits/stdc++.h>

using namespace std;

int main(){
    int v, total = 0, i = 0;
    cin >> v;

    int moedas[6] = {100, 50, 25, 10, 5, 1};
    while (i <= 5){
        if (v - moedas[i] >= 0){
            total++;
            v -= moedas[i];
        }
        else i++;
    }

    cout << total << endl;

    return 0;
}
