#include <iostream>
using namespace std;

typedef struct{
string hari;
string bulan;
string tahun;
} tanggal;

typedef struct{
	int jam;
	int menit;
	int detik;
} jam;

typedef struct{
	int noka;
	string kotaasalka;
	jam jamberangkat;
	tanggal tanggalberangkat;
	string kotatujuanka;
	jam jamtiba;
	tanggal tanggaltiba;
} jadwalka;

int main() {
	jadwalka jadwalkeretaapi;
	
	jadwalkeretaapi.noka=1;
	jadwalkeretaapi.kotaasalka = "yogyakarta";
	jadwalkeretaapi.jamberangkat.jam=10;
	jadwalkeretaapi.jamberangkat.menit=46;
	jadwalkeretaapi.jamberangkat.detik=33;
	jadwalkeretaapi.tanggalberangkat.hari = "senin/08";
	jadwalkeretaapi.tanggalberangkat.bulan = "januari";
	jadwalkeretaapi.tanggalberangkat.tahun = "2017";
	jadwalkeretaapi.kotatujuanka = "bandung";
	jadwalkeretaapi.jamtiba.jam=10;
	jadwalkeretaapi.jamtiba.menit=46;
	jadwalkeretaapi.jamtiba.detik=33;
	jadwalkeretaapi.tanggaltiba.hari = "selasa/09";
	jadwalkeretaapi.tanggaltiba.bulan = "januari";
	jadwalkeretaapi.tanggaltiba.tahun = "2017";
	
	cout << "no kereta : " <<jadwalkeretaapi.noka << endl;
	cout << "kota asal : " <<jadwalkeretaapi.kotaasalka << endl;
	cout << "jam berangkat : " <<jadwalkeretaapi.jamberangkat.jam << ":" << jadwalkeretaapi.jamberangkat.menit << ":" << jadwalkeretaapi.jamberangkat.detik <<  " WIB" << endl;
	cout << "tanggal berangkat : " << jadwalkeretaapi.tanggalberangkat.hari << "-" << jadwalkeretaapi.tanggalberangkat.bulan << "-" << jadwalkeretaapi.tanggalberangkat.tahun << endl;
	cout << "kota tujuan : "<< jadwalkeretaapi.kotatujuanka << endl;
	cout << "jam tiba : " << jadwalkeretaapi.jamtiba.jam << ":" << jadwalkeretaapi.jamtiba.menit << ":" << jadwalkeretaapi.jamtiba.detik << endl;
	cout << "tanggal tiba : " << jadwalkeretaapi.tanggaltiba.hari << "-" << jadwalkeretaapi.tanggaltiba.bulan << "-" << jadwalkeretaapi.tanggaltiba.tahun <<  " WIB" << endl;
	
	return 0;
	
}