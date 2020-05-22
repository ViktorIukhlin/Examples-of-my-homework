#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while (T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;

		cout << left << hex << showbase << nouppercase << (long)A << "\n";
		cout << right << setw(15) << setfill('_') << showpos << fixed << setprecision(2) << B << "\n";
		cout << setw(0) << uppercase << resetiosflags(ios::showpos) << resetiosflags(ios::fixed) << setiosflags(ios::scientific) << setprecision(9) << C << endl;

	}
	return 0;

}