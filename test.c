#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"
void menu()
{
	printf("********************\n");
	printf("*******1.play*******\n");
	printf("*******0.exit*******\n");
	printf("********************\n");
}


void game()
{
	//存储数据 - 二维数组
	char board[ROW][COL];
	//初始化棋盘 - 初始化空格
	InitBoard(board, ROW, COL);
	while (1)
	{
		if (isfull(board, ROW, COL))
		{
			printf("平局");
			break;
		}
		//玩家下棋
		Playermove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		if (iswin(board, ROW, COL) == '*')
		{
			printf("玩家获胜\n");
			break;
		}
		//电脑下棋
		Botmove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		if (iswin(board, ROW, COL) == '#')
		{
			printf("电脑获胜\n");
			break;
		}
	}
}




int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择\n");
		scanf("%d", &input);
		switch (input)
		{	
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while(input);
	return 0;
	}