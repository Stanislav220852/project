#include <iostream>


using namespace std;



int main() {
	setlocale(LC_ALL, "RU");

	int size_sym = 0;
	int user_size_sym;
	int opt;
	char user_sym;
	cout << "Введите символ: ";
	cin >> user_sym;
	cout << "Введите число символов: ";
	cin >> user_size_sym;
	cout << "Введите опцию: \n" << "1.Вертикальная линия\n" << "2.Горизонтальная линия\n";
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

	
	/*switch (sym)
	{
	case '!': {
		if (opt == 1) {
			while (size_sym < user_size_sym) {
				cout << "! ";
				size_sym += 1;
			}
		}
		else if (opt == 2) {
			while (size_sym < user_size_sym) {
				cout << "! \n";
				size_sym += 1;
			}
		}
		else {
			cout << "Error";
		}
		cout << "\n";
		main();

	}
			break;

	case '@': {
		if (opt == 1) {
			while (size_sym < user_size_sym) {
				cout << "@ ";
				size_sym += 1;
			}
		}
		else if (opt == 2) {
			while (size_sym < user_size_sym) {
				cout << "@ \n";
				size_sym += 1;
			}
		}
		else {
			cout << "Error";
		}
		cout << "\n";
		main();
	}
			break;

	case '#': {
		if (opt == 1) {
			while (size_sym < user_size_sym) {
				cout << "# ";
				size_sym += 1;
			}
		}
		else if (opt == 2) {
			while (size_sym < user_size_sym) {
				cout << "# \n";
				size_sym += 1;
			}
		}
		else {
			cout << "Error";
		}
		cout << "\n";
		main();
	}
			break;
	case '$': {
		if (opt == 1) {
			while (size_sym < user_size_sym) {
				cout << "$ ";
				size_sym += 1;
			}
		}
		else if (opt == 2) {
			while (size_sym < user_size_sym) {
				cout << "$ \n";
				size_sym += 1;
			}
		}
		else {
			cout << "Error";
		}
		cout << "\n";
		main();
	}
			break;
	case '%': {
		if (opt == 1) {
			while (size_sym < user_size_sym) {
				cout << "% ";
				size_sym += 1;
			}
		}
		else if (opt == 2) {
			while (size_sym < user_size_sym) {
				cout << "% \n";
				size_sym += 1;
			}
		}
		else {
			cout << "Error";
		}
		cout << "\n";
		main();
	}
			break;
	case '^': {
		if (opt == 1) {
			while (size_sym < user_size_sym) {
				cout << "^ ";
				size_sym += 1;
			}
		}
		else if (opt == 2) {
			while (size_sym < user_size_sym) {
				cout << "^ \n";
				size_sym += 1;
			}
		}
		else {
			cout << "Error";
		}
		cout << "\n";
		main();
	}
			break;
	case '&': {
		if (opt == 1) {
			while (size_sym < user_size_sym) {
				cout << "& ";
				size_sym += 1;
			}
		}
		else if (opt == 2) {
			while (size_sym < user_size_sym) {
				cout << "& \n";
				size_sym += 1;
			}
		}
		else {
			cout << "Error";
		}
		cout << "\n";
		main();
	}
			break;
	default: {
		cout << "Error\n";
	
		main();
	}
		   break;
	}*/



	