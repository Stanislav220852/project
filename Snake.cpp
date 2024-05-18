#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
void map();
void input();
void logic();
void setUp();
void result();
bool gameover;
const int wight = 20;
const int height = 20;
enum movement
{
	STOP = 0,
	RIGHT = 1,
	LEFT = 2,
	UP = 3,
	DOWN = 4
};
movement dir;
int x, y, fruitX, fruitY, score;
int tailX[100], tailY[100];
int nTail;
int main()
{
	srand(time(NULL));
	setUp();
	while (!gameover)
	{
		map();
		input();
		logic();
	}

	result();

	return 0;
}
void map()
{
	system("cls");
	Sleep(100);
	cout << "Score: " << score << "\n";
	for (int i = 0; i < wight + 1; ++i)
	{
		cout << "#";
	}
	cout << "\n";
	for (int i = 0; i < height; ++i)
	{
		for (int j = 0; j < wight; j++)
		{
			if (j == 0 || j == wight - 1)
			{
				cout << "#";
			}
			if (i == y && j == x)
			{
				cout << "%";
			}
			else if (i == fruitY && j == fruitX)
			{
				cout << "@";
			}
			else
			{
				bool print = false;
				for (int k = 0; k < nTail; k++)
				{

					if (tailX[k] == j && tailY[k] == i)
					{
						print = true;
						cout << "#";
					}
				}
				if (!print)
				{
					cout << " ";
				}
			}
		}
		cout << "\n";
	}
	for (int i = 0; i < wight + 1; ++i)
	{
		cout << "#";
	}
	cout << "\n";
}
void input()
{
	if (_kbhit())
	{
		switch (_getch())
		{
		case 'a':
			dir = LEFT;
			break;
		case 's':
			dir = DOWN;
			break;
		case 'd':
			dir = RIGHT;
			break;
		case 'w':
			dir = UP;
			break;
		case 'x':
			gameover = true;
			break;
		}
	}
}
void logic()
{
	int prevX = tailX[0];
	int prevY = tailY[0];
	int prev2X, prev2Y;
	tailX[0] = x;
	tailY[0] = y;
	for (int i = 1; i < nTail; i++)
	{
		prev2X = tailX[i];
		prev2Y = tailY[i];
		tailX[i] = prevX;
		tailY[i] = prevY;
		prevX = prev2X;
		prevY = prev2Y;
	}
	switch (dir)
	{
	case RIGHT:
		x++;
		break;
	case LEFT:
		x--;
		break;
	case UP:
		y--;
		break;
	case DOWN:
		y++;
		break;
	}
	if (x > wight || x < 0)
	{
		gameover = true;
	}
	else if (y > height || y < 0)
	{
		gameover = true;
	}
	if (x == fruitX && y == fruitY)
	{
		score += 10;
		fruitX = rand() % wight;
		fruitY = rand() % height;
		nTail++;
	}
}
void setUp()
{
	bool gameover = false;
	dir = STOP;
	x = wight / 2 + 1;
	y = height / 2 + 1;
	fruitX = rand() % wight;
	fruitY = rand() % height;
	score = 0;
}
void result() {
	std::cout << "########     ###     ###     ###  ########       ####     #      #  ########  #######     \n";
	std::cout << "#     ##    #####    #  #   #  #  #             #    #    #      #  #         #      #    \n";
	std::cout << "#          ##   ##   #   # #   #  #            #      #   #      #  #         #      #    \n";
	std::cout << "########  ##     ##  #    #    #  ########     #      #   #      #  ########  #######     \n";
	std::cout << "#      #  #########  #         #  #            #      #    #    #   #         #     #     \n";
	std::cout << "#      #  ##     ##  #         #  #             #    #      #  #    #         #      #    \n";
	std::cout << "########  ##     ##  #         #  ########       ####        ##     ########  #       #  " << std::endl;
	cout << "SCORE: " << score;
}