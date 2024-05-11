#include <iostream>
using  std::cout;
using std::cin;
void calc();
void game();

int main() {
	setlocale(LC_ALL, "RU");
	
	char sym;
	cout << "Введите символ чтобы открыть: Калькулятор(+),Игру'Угадай число'(#) ";
	cin >> sym;
	switch (sym)
	{
	case '+': 
		cout << "Калькулятор\n";
		calc();
		break;
	case '#':
		cout << "Игра:'Угадай число'\n";
		game();
		break;

	default: {
		cout << "Неправильный символ!\n";
		main();
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
	cout << "Enter math symbol(+,-,*,/):  ";
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
	cout << res << "\n";
	main();
	
}
void game() {
	
	int rand_num = 1 + rand() % 3;
	int user_num;
	bool stop = false;
	while (!stop)
	{
		cout << "Enter number: ";
		cin >> user_num;
		if (user_num != rand_num) {
			cout << "Ты не угадал\n";
			rand_num = 1 + rand() % 20;
		}
	
		else stop = true;

	}
	cout << "Ты выйграл!\n";
	main();
	
}
