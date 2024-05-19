#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <time.h>
using namespace std;
void start();
void input();
void map();
void logic();
const int height = 25;
const int wight = 27;
int x, y, ballX, ballY, score = 0;
enum movement
{
	STOP = 0,
	RIGHT = 1,
	LEFT = 2
};
movement dir;
bool gameover;
int main()
{
	srand(time(NULL));
	start();
	while (!gameover)
	{
		map();
		input();
		logic();
	}
	return 0;
}
void start()
{
	gameover = false;
	x = wight / 2;
	y = height / 2 + 12;
	ballX = wight / 2;
	ballY = height / 2 - 5;
	dir = STOP;
	score = 0;
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

		case 'd':
			dir = RIGHT;
			break;
		case 'x':
			gameover = true;
			break;
		case 'e':
			dir = STOP;
		}
	}
}
void map()
{
	system("cls");
	Sleep(100);
	for (int i = 0; i < wight; ++i)
	{
		cout << "#";
	}
	cout << "\n";
	for (int i = 0; i < height; ++i)
	{
		for (int j = 0; j < wight; ++j)
		{
			if (j == 0 || j == wight - 1)
			{
				cout << "#";
			}
			else if (x == j && y == i)
			{
				cout << "###";
			}
			else if (ballX == j && ballY == i)
			{
				cout << "@";
			}
			else
				cout << " ";
		}
		cout << "\n";
	}
	for (int i = 0; i < wight; ++i)
	{
		cout << "#";
	}
	cout << "\n";
	cout << "Score: " << score;
}
void logic()
{
	switch (dir)
	{
	case RIGHT:
		x++;
		break;
	case LEFT:
		x--;
		break;
	}
	if (x < 2 || x > wight - 4)
	{
		dir = STOP;
	}
	ballY++;
	if (ballY == y && ballX == x || ballY == y && ballX == x + 1 || ballY == y && ballX == x + 2)
	{
		ballX = rand() % wight - 3;
		ballY = rand() % height / 2;
		score += 10;
	}
	if (ballY > height - 1)
	{
		gameover = true;
	}
}