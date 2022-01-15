#include <bits/stdc++.h>

using namespace std;

bool checkland(int i, int j, string mapa[], int height, int width);

int main(){
    int m, n;

    cin >> m >> n;
    string mapa[m];
    for (int i = 0; i < m; i++){
        cin >> mapa[i];
    }

    bool costa;
    int costas = 0;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if (mapa[i][j] == '#'){
                costa = checkland(i, j, mapa, m, n);
                
                if (costa == 1) costas++;
            }
        }
    }

    cout << costas << endl;

    return 0;
}

bool checkland(int i, int j, string mapa[], int height, int width){
    if (i - 1 >= 0 and mapa[i - 1][j] == '.'){
        return true;
    }
    else if (j - 1 >= 0 and mapa[i][j - 1] == '.'){
        return true;
    }
    else if (j + 1 < width and mapa[i][j + 1] == '.'){
        return true;
    }
    else if (i + 1 < height and mapa[i + 1][j] == '.'){
        return true;
    }

    // Borda
    else if (i == 0 || j == 0 || i == height - 1|| j == width - 1){
        return true;
    }

    return false;
}
