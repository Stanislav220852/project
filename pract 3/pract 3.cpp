
#include <iostream>

int main() {
	char figure;
	int sizeFigure;
	std::cout << "Enter symbol figure( square - !;rectangle = @: ";
	std::cin >> figure;
	std::cout << "Enter size your figure: ";
	std::cin >> sizeFigure;
	switch (figure)
	{
	case '!': {
		
		for (int i = 0; i < sizeFigure; i++)
		{
			for (int j = 0; j < sizeFigure; j++)
			{
				std::cout << "!";
			}
			std::cout << "\n";
		}
		break;
	case '@':
		for (int i = 0; i < sizeFigure; i++)
		{
			for (int j = 0; j < sizeFigure+1; j++)
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

	