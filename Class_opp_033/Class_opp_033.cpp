#include <iostream>
using namespace std;



class Mahasiswa {
private:
	int nim;
	string nama;
public:
	void inputdata() {
		cout << "Masukan NIM : ";
		cin >> nim;
		cout << "Masukan Nama : ";
		cin >> nama;
	}
	void tampildata() {
		cout << "NIM : " << nim << endl;
		cout << "Nama : " << nama << endl;
	}
};

class Matakuliah {
private:
	string kodemk;
	string namamk;
	int sks;
public:
	void inputandata();
	void tampilkandata();
};

void Matakuliah::inputandata() {
	cout << "Masukan Kode MK : ";
	cin >> kodemk;
	cout << "Masukan Nama MK : ";
	cin >> namamk;
	cout << "Masukan SKS : ";
	cin >> sks;
}

void Matakuliah::tampilkandata() {
	cout << "KodeMK : " << kodemk << endl;
	cout << "NamaMK : " << namamk << endl;
	cout << "SKS : " << sks << endl;
}

int main() {
	Mahasiswa mhs;
	Matakuliah mk;

	mhs.inputdata();
	mhs.tampildata();

	mk.inputandata();
	mk.tampilkandata();
}
