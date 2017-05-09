#include <iostream>
using namespace std;

int main() {
	int M [3] [3];
	for (int i=0;i<3;i++)
	{
		for (int j=0;j<3;j++){
 
		cin >> M[i][j];
	}
		
    }
	// cout << "baris 1 kolom 1 = " << M[1] [1];
	for (int a = 0; a < 3 ; a++){
		for ( int b = 0; b < 3; b++){
			cout << M [a] [b] << " " ;
		}
		cout << endl ;
	}
	return 0;
}