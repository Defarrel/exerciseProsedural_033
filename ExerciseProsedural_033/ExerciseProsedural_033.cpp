#include <iostream>
using namespace std;


double ratarata(double a, double b) {
    return (a + b) / 2;

}

string status(double r, double n) {
    if (r >= 70 or n >= 80) {
        return "Diterima";
    }
    else {
        return "Ditolak";
    }
}

string nama[2];
double nilM[2], nilB[2], rataNil[2];

void inputdata() {
    int i = 0;
    do {
        cout << "Masukkan Nama Siswa : ";
        cin >> nama[i];
        cout << "Masukkan Nilai Matematika : ";
        cin >> nilM[i];
        cout << "Masukkan Nilai Bahasa Inggris : ";
        cin >> nilB[i];

        rataNil[i] = ratarata(nilM[i], nilB[i]);
        i++;
    } while (i < 2);
}


void tampilandata() {
    cout << "=======================================" << endl;
    cout << "Nama\t\tStatus" << endl;
    cout << "=======================================" << endl;
    for (int i = 0; i < 20; i++) {
        cout << nama[i] << "\t\t" << status(rataNil[i], nilM[i]) << endl;

    }
}

void kandidatditerima() {
    int jumlahDiterima = 0;
    int jumlahDitolak = 0;
    for (int i = 0; i < 2; i++) {
        if (status(rataNil[i], nilM[i]) == "Diterima") {
            jumlahDiterima++;
        }
        else {
            jumlahDitolak++;
        }
    }
    cout << "========================================" << endl;
    cout << "Jumlah kandidat diterima : " << jumlahDiterima << endl;
    cout << "Jumlah kandidat tidak diterima : " << jumlahDitolak << endl;
    cout << "========================================" << endl;
}

int main() {
    inputdata();
    tampilandata();
    kandidatditerima();
    return 0;

}