#include <bits/stdc++.h>

using namespace std;

int main(){
    int bino, cino;
    cin >> bino;
    cin >> cino;

    if ( (bino + cino) % 2 == 0) cout << "Bino\n";
    else cout << "Cino\n";

    return 0;
}
