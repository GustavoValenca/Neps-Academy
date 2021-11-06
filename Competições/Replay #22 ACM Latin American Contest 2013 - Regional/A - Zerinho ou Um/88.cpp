#include <bits/stdc++.h>

using namespace std;

int main(){
    int choices[3];
    cin >> choices[0] >> choices[1] >> choices[2];

    int soma = choices[0] + choices[1] + choices[2];
    char c;
    if (soma == 3 || soma == 0) cout << "*\n";
    else if (soma == 2){
        for (int i = 0; i < 3; i++){
            if (choices[i] == 0) {
                c = 65 + i;
                cout << c << endl;
            }
        }
    } 
    else {
        for (int i = 0; i < 3; i++){
            if (choices[i] == 1) {
                c = 65 + i;
                cout << c << endl;
            }
        }
    }
    return 0;
}
