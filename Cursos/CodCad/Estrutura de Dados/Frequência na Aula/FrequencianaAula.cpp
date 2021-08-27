#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x;
    cin >> n;

    set<int> alunos;
    for (int i = 0; i < n; i++){
        cin >> x;
        alunos.insert(x);
    }

    cout << alunos.size() << endl;

    return 0;
}
