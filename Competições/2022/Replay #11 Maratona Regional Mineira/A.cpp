#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n, x;
    int jovem = 0, adulta = 0, idosa = 0;

    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> x;

        if (x == 1) {
            adulta++;
        }
        else if (x == 2) {
            idosa++;
            jovem++;
        }
    }

    cout << "Jovem: " << jovem << endl;
    cout << "Adulta: " << adulta << endl;
    cout << "Idosa: " << idosa << endl;

    return 0;
}
