#include <bits/stdc++.h>

using namespace std;

int main(){
    int matriz[4][4];
    bool magic = true;

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            cin >> matriz[i][j];
        }
    }
    
    int sum = 0;
    for (int i = 0; i < 4; i++){
        sum += matriz[0][i];
    }

    int tmp;
    for (int i = 1; i < 4; i++){
        tmp = 0;
        for (int j = 0; j < 4; j++){
            tmp += matriz[i][j];
        }

        if (tmp != sum){
            magic = false;
            // cout << tmp << " " << sum << endl;
        } 
    }

    for (int i = 0; i < 4; i++){
        tmp = 0;
        for (int j = 0; j < 4; j++){
            tmp += matriz[j][i];
        }

        if (tmp != sum){
            magic = false;
            // cout << tmp << " " << sum << endl;
        } 
    }

    if (magic) cout << "magic" << endl;
    else cout << "not magic" << endl;
}