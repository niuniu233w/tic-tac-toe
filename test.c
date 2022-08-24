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
	//�洢���� - ��ά����
	char board[ROW][COL];
	//��ʼ������ - ��ʼ���ո�
	InitBoard(board, ROW, COL);
	while (1)
	{
		if (isfull(board, ROW, COL))
		{
			printf("ƽ��");
			break;
		}
		//�������
		Playermove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		if (iswin(board, ROW, COL) == '*')
		{
			printf("��һ�ʤ\n");
			break;
		}
		//��������
		Botmove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		if (iswin(board, ROW, COL) == '#')
		{
			printf("���Ի�ʤ\n");
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
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{	
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while(input);
	return 0;
	}