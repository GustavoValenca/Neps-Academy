#include <bits/stdc++.h>

using namespace std;

int main(){
    int m, n, left, right;

    queue<char> times;
    for (int i = 0; i < 16; i++){
        times.push(i);
    }   

    for (int i = 0; i < 15; i++){
        cin >> m >> n;
        left = times.front();
        times.pop();
        right = times.front();
        times.pop();

        if (m > n) times.push(left);
        else times.push(right);
    }

    cout << (char) (times.front() + 65) << endl;

    return 0;
}
