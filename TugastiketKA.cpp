#include <iostream>
using namespace std;

typedef struct{
int Tgl;
string Bulan;
string Tahun;
}Tanggal;

typedef struct{
int Menit;
int Jam;
}Jam;

typedef struct{
string NamaD;
string Ktp;
string Alamat;
}DataPel;

typedef struct{
string KodeBooking;
int NoKA;
string NamaKA;
string Kelas;
string Kursi;
DataPel DataDiri;
string KotaAsalKA;
Tanggal TglBerangkat;
Jam JamBerangkat;
string KotaTujuanKA;
Tanggal TglTiba;
Jam JamTiba;
int Bayar;
int Admin;
int TBayar;
}JadwalKA;

//variable global
JadwalKA A;
int asal, tujuan, a, k, n;

//prototype
void KetKereta();
void DetailPesanan();
void DataPelanggan();
void Asal();
void Tujuan();
void Berangkat();
void Tiba();


int main(){
	cout << "|==============================================|" << endl;
	cout << "|	  Program Pemesanan Tiket Kereta Api		|"		  << endl;
	cout << "|==============================================|" << endl;
	
// Data Diri
DataPelanggan();
// keterangan kereta
KetKereta();
	
//Asal
Asal();
// Keberangkatan
Berangkat();
//tujuan
Tujuan();
// Tiba
Tiba();
//Detail Pemesanan
DetailPesanan();
	
	return 0;
}

void DataPelanggan(){
cout << "\nMasukkan Data Diri Anda! \n" << endl;
cout << "===================================================" << endl;
cout << "Nama Anda : ";
cin >> A.DataDiri.NamaD;
cout << "No KTP : ";
cin >> A.DataDiri.Ktp;
cout << "Alamat : ";
cin >> A.DataDiri.Alamat;
cout << endl;
cout << "===================================================" << endl;
	
}
void KetKereta(){
	
	// No KA 
	A.NoKA = 102;
	A.KodeBooking = "66RJ02";
	A.NamaKA = "Rajawali";
	A.Kursi = "6A";

	cout << "\nPilih Kelas :  " << endl;
	cout << "1. Eksekutif" << endl;
	cout << "2. Ekonomi" << endl << endl;
	cout << "Pilih Kelas Kereta Anda (1-2) : ";
	cin >> k;
	
if (k == 1 ){
	A.Kelas = "Eksekutif";
	} else if(k == 2){
		A.Kelas = "Ekonomi";
		}else{
			cout << "Tidak ada Pilihan";
	}
	
cout << endl;
cout << "===================================================" << endl;
}

void Asal(){
cout << "Stasiun Asal : " << endl << endl;
cout << "1. Bandung" << endl;
cout << "2. Bekasi" << endl;
cout << "3. Bogor" << endl << endl;
cout << "Pilih Asal Stasiun Anda: ";
cin >> asal;
	
if (asal == 1 ){
	A.KotaAsalKA = "Bandung";
	} else if(asal == 2){
		A.KotaAsalKA = "Bekasi";
		}else if(asal == 3){
			A.KotaAsalKA = "Bogor";
}else{
	cout << "Tidak ada Pilihan";
	}
}
void Berangkat(){
int brngkt;
cout << "\nKeberangkatan" << endl;
cout << "Masukkan tanggal(dd) : ";
cin >> A.TglBerangkat.Tgl;
cout << "Masukkan Bulan (mm): ";
cin >> A.TglBerangkat.Bulan;
cout << "Masukkan Tahun (yyyy): ";
cin >> A.TglBerangkat.Tahun;
	
cout << endl;
cout << "Waktu Keberangkatan : " << endl << endl;
cout << "1. 08:25" << endl;
cout << "2. 13:30" << endl;
cout << "3. 17:00" << endl;
cout << "4. 21:30" << endl << endl;
cout << "Pilih Jam Keberangkatan anda (1-4): ";
cin >> brngkt;
	
if (brngkt == 1 ){
	A.JamBerangkat.Jam =  8;
	A.JamBerangkat.Menit = 25;
	} else if(brngkt == 2){
		A.JamBerangkat.Jam =  13;
		A.JamBerangkat.Menit = 30;
		}else if(brngkt == 3){
			A.JamBerangkat.Jam =  17;
			A.JamBerangkat.Menit = 00;
}else if(brngkt == 4){
A.JamBerangkat.Jam =  21;
A.JamBerangkat.Menit = 30;
	}else{
		cout << "Tidak ada Pilihan";
	}
}
void Tujuan(){
cout << "Stasiun Tujuan : " << endl << endl;
cout << "1. Malang" << endl;
cout << "2. Solo" << endl;
cout << "3. Jogja" << endl << endl;
cout << "Masukkan Pilihan Anda : ";
cin >> tujuan;
	
if (tujuan == 1 ){
	A.KotaTujuanKA =  "Malang";
	} else if(tujuan == 2){
		A.KotaTujuanKA =  "Solo";
		}else if(tujuan == 3){
			A.KotaTujuanKA =  "Jogja";
}else{
	cout << "Tidak ada Pilihan";
	}
}
void Tiba(){
if(k == 1 ){
	if (asal == 1){
		if(tujuan == 1){
			A.JamTiba.Jam = A.JamBerangkat.Jam + 7;
			A.Bayar = 330000;
			}else if(tujuan == 2){
				A.JamTiba.Jam = A.JamBerangkat.Jam + 5;
				A.Bayar = 190000;
}else if(tujuan == 3){
	A.JamTiba.Jam = A.JamBerangkat.Jam + 4;
	A.Bayar = 170000;
		}else{
			cout << "Error 1" << endl;
			}
	}else if(asal == 2){
		if(tujuan == 1){
			A.JamTiba.Jam = A.JamBerangkat.Jam + 5;
			A.Bayar = 200000;
		}else if(tujuan == 2){
			A.JamTiba.Jam = A.JamBerangkat.Jam + 7;
			A.Bayar = 220000;
			}else if(tujuan == 3){
				A.JamTiba.Jam = A.JamBerangkat.Jam + 6;
				A.Bayar = 190000;
			}else{
				cout << "Error 2" << endl;
			}
		}else if(asal == 3){
			if(tujuan == 1){
				A.JamTiba.Jam = A.JamBerangkat.Jam + 4;
				A.Bayar = 140000;
			}else if(tujuan == 2){
				A.JamTiba.Jam = A.JamBerangkat.Jam + 5;
				A.Bayar = 180000;
			}else if(tujuan == 3){
				A.JamTiba.Jam = A.JamBerangkat.Jam + 8;
				A.Bayar = 300000;
			}else{
				cout << "Error 3" << endl;
			}
}else{
	cout << "Masukkan Pilihan yang benar" << endl;
		}
}else if( k == 2){
	if (asal == 1){
		if(tujuan == 1){
			A.JamTiba.Jam = A.JamBerangkat.Jam + 8;
			A.Bayar = 220000;
			}else if(tujuan == 2){
				A.JamTiba.Jam = A.JamBerangkat.Jam + 5;
				A.Bayar = 130000;
			}else if(tujuan == 3){
				A.JamTiba.Jam = A.JamBerangkat.Jam + 4;
				A.Bayar = 100000;
		}else{
			cout << "Error 1" << endl;
			}
	}else if(asal == 2){
		if(tujuan == 1){
			A.JamTiba.Jam = A.JamBerangkat.Jam + 5;
			A.Bayar = 180000;
			}else if(tujuan == 2){
				A.JamTiba.Jam = A.JamBerangkat.Jam + 7;
				A.Bayar = 200000;
			}else if(tujuan == 3){
				A.JamTiba.Jam = A.JamBerangkat.Jam + 3;
				A.Bayar = 160000;
			}else{
				cout << "Error 2" << endl;
			}
		}else if(asal == 3){
			if(tujuan == 1){
				A.JamTiba.Jam = A.JamBerangkat.Jam + 3;
				A.Bayar = 110000;
			}else if(tujuan == 2){
				A.JamTiba.Jam = A.JamBerangkat.Jam + 5;
				A.Bayar = 150000;
			}else if(tujuan == 3){
				A.JamTiba.Jam = A.JamBerangkat.Jam + 7;
				A.Bayar = 130000;
			}else{
				cout << "Error 3" << endl;
			}
		}else{
			cout << "Masukkan Pilihan yang benar" << endl;
		}
}else{
	A.Bayar = 0;
}	
	
	
if (A.JamTiba.Jam < 24){
	A.TglTiba.Tgl = A.TglBerangkat.Tgl;
	A.TglTiba.Bulan = A.TglBerangkat.Bulan;
	A.TglTiba.Tahun = A.TglBerangkat.Tahun;
	}else{
		A.TglTiba.Tgl = A.TglBerangkat.Tgl + 1;
		A.TglTiba.Bulan = A.TglBerangkat.Bulan;
		A.TglTiba.Tahun = A.TglBerangkat.Tahun;
	}
A.JamTiba.Menit = A.JamBerangkat.Menit;
A.Admin = 10000;
A.TBayar = A.Admin + A.Bayar;
	
}

void DetailPesanan(){
cout << endl;
cout << "===================================================" << endl;
cout << "	Resi Pemesanan Tiket Kereta " << endl;
cout << "===================================================" << endl;
cout << endl;
cout << "Kode Booking    : " << A.KodeBooking << endl;
cout << "No Kereta Api   : " << A.NoKA << endl;
cout << "Nama Kereta Api : " << A.NamaKA << endl;
cout << "Kelas & No.Kursi: " << A.Kelas << " | No." << A.Kursi  << endl << endl;
cout << "Berangkat 	: " << A.KotaAsalKA << endl;
cout << "		  " << A.TglBerangkat.Tgl << "-" << A.TglBerangkat.Bulan << "-" << A.TglBerangkat.Tahun << " " << A.JamBerangkat.Jam << ":" << A.JamBerangkat.Menit << " WIB" << endl;
cout << "Tiba 		: " <<  A.KotaTujuanKA << endl;
cout << "		  " << A.TglTiba.Tgl << "-" << A.TglTiba.Bulan << "-" << A.TglTiba.Tahun << " " << A.JamTiba.Jam << ":" << A.JamTiba.Menit << " WIB" << endl;
cout << "---------------------------------------------------" << endl << endl;
cout << "Nama   		: " << A.DataDiri.NamaD << endl;
cout << "No.KTP   	: " << A.DataDiri.Ktp << endl;
cout << "Alamat 		: " << A.DataDiri.Alamat << endl;
cout << "---------------------------------------------------" << endl << endl;
cout << "Jumlah Bayar 	: Rp. " <<  A.Bayar << endl;
cout << "Biaya Admin 	: Rp. " <<  "  " << A.Admin << endl;
cout << "------------------- +" <<  endl;
cout << "Total Bayar 	= Rp. " <<  A.TBayar << endl;
}