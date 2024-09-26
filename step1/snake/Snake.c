#include"Snake.h"

// 初始化地图
WALL* initWall()
{
	WALL* wall = (WALL*)malloc(sizeof(WALL));
	for (int y = 0; y < HEIGHT; y++)
	{
		for (int x = 0; x < WEIGHT; x++)
		{
			if (y == 0 || x == 0 || y == HEIGHT - 1 || x == WEIGHT - 1)
			{
				wall->wall[y][x].ch='#';
			}
			else
			{
				wall->wall[y][x].ch = ' ';
			}
			wall->wall[y][x].x = x;
			wall->wall[y][x].y = y;
		}
	}
	return wall;
}

// 初始化蛇
SNAKE* initSnake()
{

}

// 初始化食物
DOT* initFood()
{

}

// 输出场景
int showScene(DOT* food, SNAKE* snake, WALL* wall)
{

}

// 移动操作
int moveSnake(int up, int down, int left, int right, SNAKE* snake)
{

}

// 碰撞判定
int collisionDetermination(DOT* food, SNAKE* snake, WALL* wall)
{

}

// 开始游戏
int startGame()
{
	WALL* wall = initWall();
	for (int y = 0; y < HEIGHT; y++)
	{
		for (int x = 0; x < WEIGHT; x++)
		{
			myPutChar(wall->wall[y][x]);
		}
	}
	return 0;
}

void myPutChar(DOT dot)
{
	COORD p;
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	p.X = dot.x; p.Y = dot.y;
	SetConsoleCursorPosition(handle, p);
	putchar(dot.ch);
}