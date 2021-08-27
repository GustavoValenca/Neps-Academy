#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, x;
    cin >> a >> b;

    set<int> alice, beatriz;
    vector<int> alice_af, beatriz_af;

    for (int i = 0; i < a; i++){
        cin >> x;
        if (alice.find(x) == alice.end()) alice_af.push_back(x);
        alice.insert(x);
    }

    for (int i = 0; i < b; i++){
        cin >> x;
        if (beatriz.find(x) == beatriz.end()) beatriz_af.push_back(x);
        beatriz.insert(x);
    }

    // Couting how many card alice has and beatriz doesn't
    int distintas_a = 0, distintas_b = 0;
    for (int i = 0; i < beatriz.size(); i++){
        if (alice.find(beatriz_af[i]) == alice.end()) distintas_a++;
    }

    // Couting how many card beatriz has and alice doesn't
    for (int i = 0; i < alice.size(); i++){
        if (beatriz.find(alice_af[i]) == beatriz.end()) distintas_b++;
    }

    // Printing the minimum they can exchange
    cout << min(distintas_a, distintas_b) << endl;

    return 0;
}
