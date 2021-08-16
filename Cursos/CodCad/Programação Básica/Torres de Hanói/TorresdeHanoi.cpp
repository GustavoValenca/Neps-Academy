#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, contador = 0;
    cin >> n;
    
    while (n != 0){
        contador++;
        int x = pow(2, n) - 1;
        cout << "Teste " << contador << endl << x << endl << endl;

        cin >> n;
    }

    return 0;
}
