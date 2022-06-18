#include <bits/stdc++.h>

using namespace std;

int dinos[100000];

int main(void){
    int n, x, y, maior = 0, menor = 0, dinoss = 0;

    cin >> n;

    for (int i = 0; i < 100000; i++){
        dinos[i] = 0;
    }
    
    for (int i = 0; i < n; i++){
        cin >> x >> y;

        if (i == 0){
            menor = x;
            maior = y;
        }
        else {
            if (x < menor) menor = x;
            if (y > maior) maior = y;
        }

        for (int j = x; j <= y; j++){
            dinos[j]++;
        }
    }

    for (int i = menor; i < maior; i++){
        if (dinos[i] > dinoss) dinoss = dinos[i];
    }

    cout << dinoss << endl;

    return 0;
}