#include <bits/stdc++.h>

using namespace std;

int algarismos[10];

int char_to_int(char a);

int main(){
    int n;
    string x;
    cin >> n;


    for (int i = 0; i < n; i++){
        cin >> x;
        for (int j = 0; j < x.size(); j++){
            // Primeiro transforma o caractere em algarismo n, e a posicao n do vetor será somada 1
            algarismos[char_to_int(x[j])]++;
        }
    }

    for (int i = 0; i < 10; i++){
        cout << i << " - " << algarismos[i] << endl;
    }

    return 0;
}

int char_to_int(char a){
    return a - '0';
}
