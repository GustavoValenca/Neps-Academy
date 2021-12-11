#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int combinations[3];
    combinations[0] = abs((a + b) - (c + d));
    combinations[1] = abs((a + c) - (b + d));
    combinations[2] = abs((a + d) - (b + c));

    int menor = combinations[0];
    for (int i = 1; i < 3; i++){
        if (combinations[i] < menor) menor= combinations[i];
    }

    cout << menor << endl;

    return 0;
}
