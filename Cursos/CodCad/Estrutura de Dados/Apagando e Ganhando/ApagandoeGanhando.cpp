#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, d;

    cin >> n >> d;
    while (n != 0 and d != 0){

        string number;
        cin >> number;

        stack<char> digits;
        
        for (int i = 0; i < number.size(); i++) {
            if (digits.empty() || digits.top() >= number[i]) digits.push(number[i]);

            else {
                while ( (d > 0) and !digits.empty() and digits.top() < number[i]) {
                    digits.pop();
                    d--;
                }

                digits.push(number[i]);
            }
        }

        while (d > 0) {
            digits.pop();
            d--;
        }

        vector<char> output;
        while (!digits.empty()) {
            output.push_back(digits.top());
            digits.pop();
        }

        reverse(output.begin(), output.end());

        for (int i = 0; i < output.size(); i++){
            cout << output[i];
        }
        cout << endl;

        cin >> n >> d;
    }
    
    return 0;
}
