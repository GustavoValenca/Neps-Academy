#include <bits/stdc++.h>

using namespace std;

int main(){
    int question;
    cin >> question;

    int n;
    cin >> n;

    int dmojistan[n];
    for (int i = 0; i < n; i++){
        cin >> dmojistan[i]; 
    }

    int pegland[n];
    for (int i = 0; i < n; i++){
        cin >> pegland[i];
    }

    vector<int> dmojistan_vec (dmojistan, dmojistan+n);
    vector<int> pegland_vec (pegland, pegland+n);
    sort(dmojistan_vec.begin(), dmojistan_vec.end());
    sort(pegland_vec.begin(), pegland_vec.end());

    if (question == 1){
        int min = 0;

        for (int i = 0; i < n; i++){
            if (dmojistan_vec[i] > pegland_vec[i]){
                min += dmojistan_vec[i];
            }
            else min += pegland_vec[i];
        }
        cout << min << endl;
    }
    else {
        int max = 0;
        for (int i = 0, j = n - 1; i < n; i++, j--){
            if (dmojistan_vec[i] > pegland_vec[j]){
                max += dmojistan_vec[i];
            }
            else max += pegland_vec[j];
        }
        cout << max << endl;
    }
}