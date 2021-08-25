#include <bits/stdc++.h>

using namespace std;

bool expressao_valida(string expressao);

int main(){
    int t;
    string cadeia;
    cin >> t;

    for (int i = 0; i < t; i++){
        cin >> cadeia;

        if (expressao_valida(cadeia)) cout << "S\n";
        else cout << "N\n";
    }

    return 0;
}

bool expressao_valida(string expressao){
    stack<char> caracteres;

    for (int i = 0; i < expressao.size(); i++){
        if (expressao[i] == '(' || expressao[i] == '[' || expressao[i] == '{') caracteres.push(expressao[i]);

        else if (!caracteres.empty()){
            if (expressao[i] == ')')
                if (caracteres.top() == '(') caracteres.pop();
                else return false;

            else if (expressao[i] == '}')
                if (caracteres.top() == '{') caracteres.pop();
                else return false;

            
            else if (expressao[i] == ']')
                if (caracteres.top() == '[') caracteres.pop();
                else return false;
        }

        else return false;
    }

    if (caracteres.empty()) return true;
    else return false;
}
