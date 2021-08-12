#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, total = 0;
    cin >> n;
    
    int valores[n];
    for (int i = 0; i < n; i++){
        cin >> valores[i];
    }

    for (int i = 1; i < (n - 1); i++){
        if (valores[i-1] == 1 and valores[i] == 0 and valores[i+1] == 0) total++;
    }
    cout << total << endl;

    return 0;
}
