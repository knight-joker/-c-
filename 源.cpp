#include<stdio.h>
void move(int n, char A, char B, char C)
{
	if (n == 1)
	{
		printf("%c ->%c\n",A,C);//����
	}
	else
	{
		move(n - 1, A, B, C);
		printf("%c ->%c\n", A, C);
		move(n-1, B, A, C);//�ݹ�
	}
}
int main()
{
	int d = 0;
	scanf_s("%d", &d);//����n
	move(d, 'A', 'B','C');
	printf("��Ϸ����");
	return 0;
}