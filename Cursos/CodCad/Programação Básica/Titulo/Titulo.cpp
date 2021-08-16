#include <iostream>

using namespace std;

string title(string F){
	for (int i = 0; i < F.size(); i++){
		if (i == 0){
			if (F[i] >= 'a' and F[i] <= 'z') F[i] -= 32;
		}
		else{
			if (!(F[i-1] == ' ') and F[i] >= 'A' and F[i] <= 'Z') F[i] += 32;
			else if (F[i-1] == ' ' and F[i] >= 'a' and F[i] <= 'z') F[i] -= 32;
		}
 	}
	return F;
}

int main(){ 
	string F;

	getline(cin, F);

	cout << title(F) << "\n";
}
