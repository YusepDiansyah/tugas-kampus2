#include <iostream>
using namespace std;

int main(){
	int x[3][3];
	int x1[3][3];
	int x2[3][3];
	
	for(int i=0; i < 3; i++){
		for(int j=0; j < 3; j++){
			cout << "X1 : Masukkan Baris ke- " << i <<" Kolom ke- " << j << " : ";
			cin >> x1[i][j];
			cout << "X2 : Masukkan Baris ke- " << i <<" Kolom ke- " << j << " : ";
			cin >> x2[i][j];
			x[i][j] = x1[i][j] + x2[i][j];
		}
	}	
	//Menampilkan data X1
	
	cout << "X1	" << endl;
	cout << "============" << endl;
	for(int i=0; i < 3; i++){
		for(int j=0; j < 3; j++){
			cout << x1[i][j] << " ";
		}
		cout << endl;
	}
	
	//Menampilkan data X2
	cout << endl << endl;
	cout << "X2	" << endl;
	cout << "============" << endl;
	for(int i=0; i < 3; i++){
		for(int j=0; j < 3; j++){
			cout << x2[i][j] << " ";
		}
		cout << endl;
	}
		// Menampilkan data X
	cout << endl << endl;
	cout << "X	" << endl;
	cout << "============" << endl;

	for(int i=0; i < 3; i++){
		for(int j=0; j < 3; j++){
			cout << x[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
	
}