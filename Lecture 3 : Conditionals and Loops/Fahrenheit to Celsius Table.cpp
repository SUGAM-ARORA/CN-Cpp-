#include <iostream>
using namespace std;
int main () {
	int S,E,W;
	cin >> S;
	cin >> E;
	cin >> W;
	int C;
	while (S<=E) {
		C= (S-32)*5/9 ;
		cout << S <<"\t"<< C << endl;
		S=S+W;
	} 
	
}
