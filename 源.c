
#include"game.h"
void menu()
{
	printf("******************");
	printf("***1,play0,exit***");
	printf("******************");
}

void game()
{
	char board[ROW][COL] = { 0 };//����---����߳���������Ϣ/	ȫ���ǿո�
	InitBoard(board, ROW, COL);//��ʼ������
	DisplayBoard(board,ROW,COL);
	while(1)//����     // �ж���Ӯ
	{
		int ret = 0;
		playermove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		ret= Iswin();
		if (ret != 'c')
		{
			break;
		}
		computermove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret =Iswin();
		if(ret!='c')
		{
			break;
		}
		if (ret == '*')
		{
			printf("���Ӯ\n");;
		}
		else if (ret == '#')
		{
			printf("����Ӯ\n");
		}
		else
		{
			printf("ƽ��\n");
		}
	}
}
void test()
{
	int input = 0;
	srand((unsigned int) time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			printf("������\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������!\n");
			break;
		}
		
	}

	while (input);
}
int main()
{



	return 0;
}