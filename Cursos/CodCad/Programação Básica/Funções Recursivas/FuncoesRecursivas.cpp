#include <bits/stdc++.h>

using namespace std;

int fibonacci(int x);

int main(){
    int n;
    cin >> n;

    cout << fibonacci(n) << endl;

    return 0;
}

int fibonacci(int x){
    if (x == 0 or x == 1) return 1;
    return fibonacci(x - 1) + fibonacci(x - 2);
}
