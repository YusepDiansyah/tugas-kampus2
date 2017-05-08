#include <iostream>
using namespace std;
//prototype


int main() {
	// kamus
	string nama[3];
int i;
	
	// algoritma
	for(i=0;i<3;i++)
	cin >> nama[i];


    for(i=0;i<3;i++)
	cout << "nama ke" << i << ":" << nama[i]<< endl;
return 0;
}