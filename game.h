	#pragma once
	#define _CRT_SECURE_NO_WARNINGS 1
    //头文件的包含
    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
	//符号的定义
	#define ROW 3
	#define COL 3
	
	//函数的声明
	void InitBoard(char board[ROW][COL], int row, int col);

	//打印棋盘的函数
	void DisplayBoard(char board[ROW][COL], int row, int col);

	//玩家移动函数
	void Playermove(char board[ROW][COL], int row, int col);

	//电脑移动函数
	void Botmove(char board[ROW][COL], int row, int col);

	//判断获胜函数
	char iswin(char board[ROW][COL], int row, int col);

	//判断是否走满
	int isfull(char board[ROW][COL], int row, int col);

