

#include <iostream>
using namespace std;


void add(int a, int b, int c);


int main() {
	int mass1[3];
	int mass2[3];
	int res1, res2;
	for (int i = 0; i < 3;i++) {
		cout << "Enter mass1: ";
		cin >> mass1[i];
	}
	add( res1 = mass1[0],mass1[1], mass1[2]);
	for (int i = 0; i < 3;i++) {
		cout << "Enter mass2: ";
		cin >> mass2[i];
		
	}
	add( res2 = mass2[0], mass2[1], mass2[2]);
	if (res1 > res2) {
		cout << "Mass 1 > Mass 2" << endl;

   }
	else if (res1 < res2) {
		cout << "Mass 1 < Mass 2" << endl;
	}
	else
		cout << "Mass 1 = Mass 2" << endl;
	return 0;

}
void add(int a, int b, int c) {

	cout << "Summa: " << (a + b + c) << endl;


}