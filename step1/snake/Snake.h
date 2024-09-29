#ifndef _SNAKE_H__
#define _SNAKE_H__

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include <conio.h>

#define HEIGHT 20
#define WEIGHT 60

// 一个点的构成
typedef struct Dot
{
	int x;	// 纵坐标
	int y;	// 横坐标
	char ch;// 该点显示的字符
}DOT;

// 场景构成
typedef struct Wall
{
	DOT wall[HEIGHT][WEIGHT];
}WALL;

// 蛇的身体
typedef struct Snake
{
	int size;							// 蛇的身体大小
	DOT body[(HEIGHT-2)*(WEIGHT-2)];	// 蛇的身体
}SNAKE;

// 初始化地图
WALL* initWall();

// 初始化蛇
SNAKE* initSnake();

// 初始化食物
DOT* initFood(SNAKE*snake);

// 输出场景
int showScene(DOT* food,SNAKE *snake,WALL *wall);

// 移动操作
SNAKE* moveSnake(int down,int right,SNAKE*snake);

// 碰撞判定
int collisionDetermination(DOT* food, SNAKE* snake, WALL* wall);

// 开始游戏
int startGame();

// 结束游戏
int endGame();

// 定位光标输出字符
void myPutChar(DOT dot);

// 获取蛇在某一位置的字符
char getSnakeChar(SNAKE* snake,int x,int y);

#endif // !_SNAKE_H__