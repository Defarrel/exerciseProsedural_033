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

