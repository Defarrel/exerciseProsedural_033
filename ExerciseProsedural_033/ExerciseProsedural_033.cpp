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
float nilM[20], nilB[20], ratarata[20];
int jumlahditerima = 0;
int jumlahditolak = 0;


