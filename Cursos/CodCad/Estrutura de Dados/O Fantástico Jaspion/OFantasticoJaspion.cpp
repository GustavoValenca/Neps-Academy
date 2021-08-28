#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, m, n;
    cin >> t;
    
    for (int i = 0; i < t; i++){
        cin >> m >> n;

        map<string, string> dicionario;
        string japan, portuguese;

        // Getting the words in japanese with the translations and storing them 
        getchar();
        for (int j = 0; j < m; j++){
            getline(cin, japan);
            getline(cin, portuguese);

            dicionario[japan] = portuguese;
        }

        string verso, palavra = "";
        vector<string> palavras;
        for (int j = 0; j < n; j++){
            getline(cin, verso);

            // Spliting the sentence in words
            for (int k = 0; k < verso.size(); k++){
                if (verso[k] != ' '){
                    palavra += verso[k];
                }
                else{
                    palavras.push_back(palavra);
                    palavra = "";
                }
            }
            palavras.push_back(palavra);
            palavra = "";

            // Debug //
            // for (string i : palavras){
            //     cout << i << endl;
            // }
            // cout << "FIM\n";

            for (int k = 0; k < palavras.size(); k++){
                if (dicionario.find(palavras[k]) != dicionario.end()){
                    if (k != 0) cout << " ";
                    cout << dicionario[palavras[k]];
                }
                else {
                    if (k != 0) cout << " ";
                    cout << palavras[k];
                }
            }
            cout << endl;
            palavras.clear();

        }
        cout << endl;
    }

    return 0;
}
