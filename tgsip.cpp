#include <iostream>
using namespace std;
//prototype
void iswithinrange ();

int main () {
float ip, rataip = 0, totalip = 0;
int jumlahsiswa = 0, lulus = 0, tdklulus = 0;



while (ip != -999 ) {

 if (ip >= 0 && ip <= 4) {
   jumlahsiswa++;
if (ip >= 2.75) {
	lulus++;
}   else {
	tdklulus++;
}
	totalip = totalip  + ip;
	rataip = totalip / jumlahsiswa;
	
 }
 cin >> ip;
}

iswithinrange();

cout << "jumlah mahasiswa : "<< jumlahsiswa << endl;
cout << "jumlah mahasiswa lulus : "<< lulus << endl;
cout << "jumlah mahasiswa tidak lulus : "<< tdklulus << endl;
cout << "rata-rata ip : "<< rataip << endl;
cout << "status data : " << iswithinrange << endl;
 return 0;
 


}



void iswithinrange (float ip, int max, int min){
	if (ip >0 && ip <=4) {
		return ip++;
	}
	else if (ip <=0 && ip >4) {
		return ip++;
	}
	}