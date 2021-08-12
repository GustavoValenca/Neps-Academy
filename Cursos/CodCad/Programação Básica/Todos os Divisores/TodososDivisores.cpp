#include <bits/stdc++.h>

using namespace std;

int main(){
    int x;
    cin >> x;

    cout << 1;
    for (int i = 2; i <= x; i++){
        if (x % i == 0) cout << " " << i;
    }
    cout << endl;

    return 0;
}
