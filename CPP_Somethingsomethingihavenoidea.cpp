#include <iostream>
using namespace std;

int main() {
	int x;
	cout << "Nhap so: "; cin >> x;
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < x; j++) {
			cout << "* ";
		} cout << endl;
	} 
	cout << endl;
	for (int i = 0; i < x; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "* ";
		} cout << endl;
	} 
	cout << endl;
	for (int i = 0; i < x; i++) {
		for (int j = x; j > i; j--) {
			cout << "* ";
		} cout << endl;
	}
	return 0;
}