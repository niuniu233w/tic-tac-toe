	#pragma once
	#define _CRT_SECURE_NO_WARNINGS 1
    //ͷ�ļ��İ���
    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
	//���ŵĶ���
	#define ROW 3
	#define COL 3
	
	//����������
	void InitBoard(char board[ROW][COL], int row, int col);

	//��ӡ���̵ĺ���
	void DisplayBoard(char board[ROW][COL], int row, int col);

	//����ƶ�����
	void Playermove(char board[ROW][COL], int row, int col);

	//�����ƶ�����
	void Botmove(char board[ROW][COL], int row, int col);

	//�жϻ�ʤ����
	char iswin(char board[ROW][COL], int row, int col);

	//�ж��Ƿ�����
	int isfull(char board[ROW][COL], int row, int col);

