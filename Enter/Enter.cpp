#include <iostream>
using namespace std;
void calc();
void game();
void menu();
int main() {
	setlocale(LC_ALL, "RU");
	srand(time(NULL));
	
	char sym;
	cout << "Введите символ чтобы открыть: Калькулятор(+),Игру'Угадай число'(#) ";
	cin >> sym;
	switch (sym)
	{
	case '+': 
		cout << "Калькулятор" << endl;
		calc();
		break;
	case '#':
		cout << "Игра:'Угадай число'" << endl;
		game();
		break;
		
	
		
	}
	
}

void calc ()
{
	float num1, num2, res{} ;
	cout << "Enter num1: ";
	cin >> num1;
	cout << "Enter num2: ";
	cin >> num2;
	char math_symbol;
	cout << "Enter math symbol: ";
	cin >> math_symbol;
	switch (math_symbol)
	{
	case '+': res = num1 + num2;
		break;
	case '-': res = num1 - num2;
		break;
	case '*': res = num1 * num2;
		break;
	case '/': res = num1 / num2;
		break;
	}
	cout << res << endl;
	menu();
	
}
void game() {
	int rand_num = 1 + rand() % 5;
	int user_num;
	bool stop = false;
	while (!stop)
	{
		cout << "Enter number: ";
		cin >> user_num;
		if (user_num != rand_num)
			cout << "Ты не угадал" << endl;
		else stop = true;

	}
	cout << "Ты выйграл!" << endl;
	menu();
	
}
void menu() {
	main();
}