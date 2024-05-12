
#include <iostream>

int main() {
	char figure;
	int whightFigure;
	int hightFigure;
	std::cout << "Enter symbol figure( square - !;rectangle = @: ";
	std::cin >> figure;
	std::cout << "Enter whight your figure: ";
	std::cin >> whightFigure;
	std::cout << "Enter hight your figure: ";
	std::cin >> hightFigure;
	switch (figure)
	{
	case '!': {
		
		for (int i = 0; i < hightFigure; i++)
		{
			for (int j = 0; j < whightFigure; j++)
			{
				std::cout << "!";
			}
			std::cout << "\n";
		}
		break;
	case '@':
		for (int i = 0; i < hightFigure; i++)
		{
			for (int j = 0; j < whightFigure+1; j++)
			{
				std::cout << "!";
			}
			std::cout << "\n";
		}
		break;
	default:
		std::cout << "Error\n";

	}
	}
}

	