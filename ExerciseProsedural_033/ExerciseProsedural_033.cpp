#include <iostream>
using namespace std;

float ratarata(float a, float b) {
	return (a * b) / 2;
}

string status(float r, float n) {
	if (r >= 70 or n >= 80) {
		return "Diterima";
	}else
		return "Ditolak";
}

string nama[20];
float nilM[20], nilB[20], rataNil[20];
int jumlahditerima = 0;
int jumlahditolak = 0;

void input() {
	int i = 0;
	do {
		cout << "Masukan nama Mahasiswa: ";
		cin >> nama[i];
		cout << "Masukan nilai matematika: ";
		cin >> nilM[i];
		cout << "Masukan nilai B. Inggris: ";
		cin >> nilB[i];

		cout << ratarata(nilM[i], nilB[i]);
		i++;
	} while (i < 20);
}

void tampilandata() {
	cout << "===================================";
	cout << "Nama" << "\t\t" << "Status" << endl;
	cout << "===================================";
	for (int i = 0; i < 20; i++) {
		cout << nama[i] << "\t\t" << status(rataNil[i], nilM[i]);
	}
}

void kandidatditerima() {
	for (int i = 0; i < 20; i++) {
		if (status(rataNil[i], nilM[i]) == "Diterima"){
			jumlahditerima++;
		}else {
			jumlahditolak++;
		}
	}

}

int main() {
	void input();
	void tapilandata();
	void kandidatditerima();
	return 0;
}