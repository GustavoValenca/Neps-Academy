#include <bits/stdc++.h>

using namespace std;

int main(){
    int h, p, f, d;
    cin >> h >> p >> f >> d;

    if (h < f and f < p){
        if (d == -1) cout << "S\n";
        else cout << "N\n";
    }
    else if (f < h and h < p || h < p and p < f){
        if (d == -1) cout << "N\n";
        else cout << "S\n";
    }
    else if (f < p and p < h || p < h and h < f){
        if (d == -1) cout << "S\n";
        else cout << "N\n";
    }
    else if (p < f and f < h){
        if (d == -1) cout << "N\n";
        else cout << "S\n";
    }

    return 0;
}
