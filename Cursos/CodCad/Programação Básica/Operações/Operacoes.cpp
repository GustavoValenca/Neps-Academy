#include <bits/stdc++.h>

using namespace std;

int main(){
    char o;
    double a, b;
    cin >> o >> a >> b;

    if (o == 'M') cout << fixed << setprecision(2) << a * b << endl;
    else cout << fixed << setprecision(2) << a / b << endl;

    return 0;
}
