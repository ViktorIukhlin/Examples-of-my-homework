#include <iostream>
using namespace std;

int main() {
	

	long sek;
	cout << "Enter the number of seconds: ";cin >> sek; //31600000 
	short a,b,c,e;
	a = sek / 60 / 60 / 24;
	b = (sek - (a * 24 * 60 * 60))/60/60;
	c = (sek - (a * 24 * 60 * 60) - (b * 60 * 60))/60;
	e = (sek - (a * 24 * 60 * 60) - (b * 60 * 60) - (c * 60));
	
	cout << sek << " seconds = " << a << " days, " <<b << " hours, " << c << " minutes, " << e << " seconds."<<endl ;

	return 0;
}