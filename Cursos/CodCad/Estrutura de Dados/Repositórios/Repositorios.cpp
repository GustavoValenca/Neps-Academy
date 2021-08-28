#include <bits/stdc++.h>

using namespace std;

int main(){
    int c, n, programa, versao;
    cin >> c >> n;

    map<int, int> instalados, precisa_instalar;

    // Getting the versions installed
    for (int i = 0; i < c; i++){
        cin >> programa >> versao;
        instalados.insert(make_pair(programa, versao));
    }

    for (int i = 0; i < n; i++){
        cin >> programa >> versao;

        // Checking if the version installed is older than the available one
        if (instalados[programa] < versao){

            // Since the version available is newer, verifying if there is other version available more up to date than this one
            if (precisa_instalar[programa] < versao) precisa_instalar[programa] = versao;
        }
    }

    // Printing the versions needed to be installed
    for (map<int, int> :: iterator it = precisa_instalar.begin(); it != precisa_instalar.end(); it++){
        cout << it -> first << " " << it -> second << endl;
    }

    return 0;
}
