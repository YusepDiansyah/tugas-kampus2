#include <iostream>
using namespace std;
//prototype
int tambahkan(int a,int b);

//program utama
int main (){
	int a,b;
	//proses membaca
	cout << "masukkan nilai A : ";
	cin >> a;
	
	cout << "masukkan nilai B : ";
	cin >> b;
	cout << "hasil :" << tambahkan (a,b) << endl;
	return 0;
}
int tambahkan (int a,int b){
	return a+b;
}