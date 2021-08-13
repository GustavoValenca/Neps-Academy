#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, p, q, operacao;
    char c;
    cin >> n >> p >> c >> q;

    if (c == '+') operacao = p + q;
    else operacao = p*q;

    if (operacao > n) cout << "OVERFLOW\n";
    else cout << "OK\n";

    return 0;
}
