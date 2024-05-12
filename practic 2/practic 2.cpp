#include <iostream>


using namespace std;



int main() {
	int size_sym = 0;
	int user_size_sym;
	int opt;
	char user_sym;
	cout << "Enter character: ";
	cin >> user_sym;
	cout << "Enter number of characters: ";
	cin >> user_size_sym;
	cout << "Enter option: \n" << "1.Vertical line \n" << "2.Horizontal line\n";
	cin >> opt;
	if (opt == 1) {
	while (size_sym < user_size_sym) {
				cout << user_sym;
				size_sym++;
			}
		
		cout << "\n";
	}
	else if (opt == 2) {
		
			while (size_sym < user_size_sym) {
				cout << user_sym<<"\n";
				size_sym++;
			}
		
		cout << "\n";
	}

	main();

}

	
	
