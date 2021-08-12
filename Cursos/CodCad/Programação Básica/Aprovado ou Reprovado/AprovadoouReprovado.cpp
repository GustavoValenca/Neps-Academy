#include <bits/stdc++.h>

using namespace std;

int main(){
    double a, b, media;    
    cin >> a >> b;

    media = (a + b) / 2;

    if (media >= 7) cout << "Aprovado\n";
    else if (media < 4) cout << "Reprovado\n";
    else cout << "Recuperacao\n";

    return 0;
}
