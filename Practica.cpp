#include <iostream>
int main() {

    using namespace std;
	setlocale(LC_ALL,"RU");
	//#1
	/*for (int i = 10; i <= 20; ++i) {
		cout << i * i<<"\n";
	}*/
	//#2
	/*int userNum;
	int sum = 0;
	cout << "Enter Limit sum: ";
	cin >> userNum;
	for (int i = 1; i <= userNum; ++i) {
		sum += i;

	}
	cout << sum;*/
	//#3
	//int userNum;
	//int prod = 1 ;
	//cout << "Enter limit: ";
	//cin >> userNum;
	//for (int i = 1; i < userNum; i++) {
	//	prod *= i;
	//}
	//cout << prod;
    //#4
	/*int n;
	int num;
	int negativeNum=0;
	int positiveNum=0;
	int zeroNum=0;
    cout << "Enter any numbers: ";
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cout << "Enter number: ";
		cin >> num;
		if (num == 0) {
			zeroNum += 1;
		} else if (num > 0 ) {
			positiveNum += 1;
		} else
			negativeNum += 1;
		
		
	}
	
	cout << "Positive num: " << positiveNum<<"\n";
	cout << "Negative num: " << negativeNum<<"\n";
	cout << "Zero num: " << zeroNum<<"\n";*/
    //#5
	char num;
	float res;
    int size = 0;
	cout << "Select operation: \n";
	cout << "1.from fathoms(саженей) to meters\n"
		 << "2.inches to centimeters\n"
		 << "3.feet to meters\n"
		 << "4.drachmas to grams\n"
		 << "5.ounces to grams\n"
		 << "6.from pounds to kilograms\n"
		 << "7.from arshins to meters\n"
		 << "8.from spools to grams\n"
		 << "9.inches to millimeters\n";
	cin >> num;
	switch (num) {
	case '1': {
		float fathoms;
		cout << "Enter quantity fathoms: ";
		cin >> fathoms;
		for (int i = 0; i < fathoms; ++i) {
			size += i;
		}
		res = size * 2.1366;
		cout << res << " meters";
	}
			break;
	case '2': {
		float inches;
		cout << "Enter quantity inches: ";
		cin >> inches;
		for (int i = 0; i < inches; ++i) {
			size += i;
		}
		res = size * 2.5;
		cout << res << " centimeters";
	} 
		  break;
		 
	case '3': {
		float feet;
		cout << "Enter quantity feet: ";
		cin >> feet;
		for (int i = 0; i < feet; ++i) {
			size += i;
		}
		res = size * 0.3048;
		cout << res << " meters";
	}
			break;
	case '4': {
		float drachmas;
		cout << "Enter quantity drachmas: ";
		cin >> drachmas;
		for (int i = 0; i < drachmas; ++i) {
			size += i;
		}
		res = size * 3.7325;
		cout << res << " grams";
	}
			break;
	case '5': {
		float ounces;
		cout << "Enter quantity ounces: ";
		cin >> ounces;
		for (int i = 0; i < ounces; ++i) {
			size += i;
		}
		res = size * 29.86;
		cout << res << " grams";
	}
			break;
	case '6': {
		float pounds;
		cout << "Enter quantity pounds: ";
		cin >> pounds;
		for (int i = 0; i < pounds; ++i) {
			size += i;
		}
		res = size * 0.40951;
		cout << res << " kilograms";
	}
			break;
	case '7': {
		float arshins;
		cout << "Enter quantity arshins: ";
		cin >> arshins;
		for (int i = 0; i < arshins; ++i) {
			size += i;
		}
		res = size * 0.7112;
		cout << res << " meters";
	}
			break;
	case '8': {
		float spools;
		cout << "Enter quantity spools: ";
		cin >> spools;
		for (int i = 0; i < spools; ++i) {
			size += i;
		}
		res = size * 4.2657;
		cout << res << " grams";
	}
			break;
	case '9': {
		float inches;
		cout << "Enter quantity inches: ";
		cin >> inches;
		for (int i = 0; i < inches; ++i) {
			size += i;
		}
		res = size * 25.3995;
		cout << res << " millimeters";
	}
			break;
	

		
	}

}


