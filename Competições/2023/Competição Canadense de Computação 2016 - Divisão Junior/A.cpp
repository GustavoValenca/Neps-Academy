#include <bits/stdc++.h>

using namespace std;

int main(){
    char match;
    int score = 0;

    for (int i = 0; i < 6; i++){
        cin >> match;

        if (match == 'W'){
            score++;
        }
    }

    if (score >= 5) cout << 1 << endl;
    else if (score >= 3) cout << 2 << endl;
    else if (score >= 1) cout << 3 << endl;
    else cout << -1 << endl;
}