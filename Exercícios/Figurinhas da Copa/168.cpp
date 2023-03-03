#include <stdio.h>
#include <bits/stdc++.h>

int main(){
    int n, c, m;

    std::cin >> n >> c >> m;

    int carimbadas[c];
    for (int i = 0; i < c; i++){
        std::cin >> carimbadas[i];
    }

    int compradas[m];
    for (int i = 0; i < m; i++){
        std::cin >> compradas[i];
    }

    int carimbadas_compradas = 0;
    for (int i = 0; i < c; i++){
        for (int j = 0; j < m; j++){
            if (compradas[j] == carimbadas[i]){
                carimbadas_compradas++;
                break;
            }
        }
    }

    std::cout << c - carimbadas_compradas;

    return 0;
}
