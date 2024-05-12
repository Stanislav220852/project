#include <iostream>


using namespace std;



int main() {
	setlocale(LC_ALL, "RU");
        int size_sym = 0;
	int user_size_sym;
	int opt;
	char user_sym;
	cout << "Ââĺäčňĺ ńčěâîë: ";
	cin >> user_sym;
	cout << "Ââĺäčňĺ ÷čńëî ńčěâîëîâ: ";
	cin >> user_size_sym;
	cout << "Ââĺäčňĺ îďöčţ: \n" << "1.Âĺđňčęŕëüíŕ˙ ëčíč˙\n" << "2.Ăîđčçîíňŕëüíŕ˙ ëčíč˙\n";
	cin >> opt;
	if (opt == 1) {
		if (user_sym == user_sym) {
			while (size_sym < user_size_sym) {
				cout << user_sym;
				size_sym++;
			}
		}
		cout << "\n";
	}
	else if (opt == 2) {
		if (user_sym == user_sym) {
			while (size_sym < user_size_sym) {
				cout << user_sym<<"\n";
				size_sym++;
			}
		}
		cout << "\n";
	}
	main();

}




	
