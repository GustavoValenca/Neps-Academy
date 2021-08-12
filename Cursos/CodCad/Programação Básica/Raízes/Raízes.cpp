#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    double x;
     
    for (int i = 0; i < n; i++){
        cin >> x;

        cout.precision(4);
        cout.setf(ios::fixed);
        cout << sqrt(x) << endl;
    }

    // Teste //
    // cout.precision(0);
    // cout << sqrt(81);


    return 0;
}
