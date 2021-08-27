#include <bits/stdc++.h>

using namespace std;

int main(){
    int c, x, fabricados = 0;
    cin >> c;

    set<int> tacos;
    for (int i = 0; i < c; i++){
        cin >> x;

        // In case there is not any of the x size, make 2 and store 1
        if (tacos.find(x) == tacos.end()){
            fabricados += 2;
            tacos.insert(x);
        }

        // In case there is one, remove it from the storage and give it to the client
        else tacos.erase(x);
    }

    cout << fabricados << endl;

    return 0;
}
