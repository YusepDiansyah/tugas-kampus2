#include <iostream>
using namespace std;
//prototype
int Bagi(int a,int b);
int Kali(int a,int c);

//program utama
int main (){
	int a,b,c;
	//proses membaca
	cout << "Pinjaman Pokok (Rp) : ";
	cin >> a;
	
	cout << "Jangka Waktu (Bulan) : ";
	cin >> b;
	
	cout << "Bunga Per Bulan (%) : ";
	cin >> c;
	
	cout << "Angsuran Pokok (Rp):" << Bagi (a,b) << endl;
	cout << "Angsuran Bunga (Rp):" << Kali (a,c) << endl;
	return 0;
	
}
int Kali (int a,int c){
    return a*c/100;
}
int Bagi (int a,int b){
    return a/b;
}