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

