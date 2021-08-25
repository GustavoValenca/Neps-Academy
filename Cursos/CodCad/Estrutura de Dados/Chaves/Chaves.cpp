#include <bits/stdc++.h>

using namespace std;

int main(){ 
    int n;
    cin >> n;

    string linha;
    stack<char> chaves;

    getchar();
    for (int i = 0; i < n; i++){
        getline(cin, linha);

        for (int j = 0; j < linha.size(); j++){
            if (linha[j] == '{') chaves.push(linha[j]);
            else if (linha[j] == '}'){
                if (!chaves.empty()) chaves.pop();
                else{
                    cout << "N\n";
                    return 0;
                }
            }
        }
    }

    if (chaves.empty())
        cout << "S\n";
    else cout << "N\n";

    return 0;
}
