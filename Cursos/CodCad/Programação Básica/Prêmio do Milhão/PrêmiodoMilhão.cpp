#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, a, dias = 0, total = 0;
    cin >> n;

    for (int i = 0; i < n; i++){
        if (total < 1000000) dias++;
        cin >> a;
        total += a;

        // Debug //
        // cout << total << " dias:" << dias << endl;
    }

    cout << dias << endl;

    return 0;
}
