// �Լ� ���

#include <stdio.h>
#include <stdlib.h>

long findsum(int m, int n); 
int minimum(int m, int n);
int maxmum(int m, int n);

int main(void)
{
	char c;
	int x, y;
	int z,w;
	printf(" ���� �Ѱ� ���� 2�� �Է� �޽��ϴ�.\n");
	printf(" ���� a, s, d ���� �ϳ��̸� �ݺ��ϰ�, �׿� ���ڸ� �����մϴ�.\n\n");
	while (1)
	{
		printf(" ���� �Ѱ�, ���� 2���� �Է��ϼ��� ");
		scanf(" %c %d %d", &c,&x,&y);
		switch (c)
		{
		case 'a':
			z = minimum(x, y);
			printf(" 1���� �� �� �� �ּҰ� %d ������ ���� %d\n\n",z,findsum(1,z));
			
			break;
		case 's':
			z = maxmum(x, y);
			printf(" 1���� �� �� ��  �ִ밪 %d������ ���� %d\n\n", z,findsum(1,z));
			break;
		case 'd':
			z = minimum(x, y);
			w = maxmum(x, y);
			printf(" �ּҰ� %d ���� �ִ밪 %d������ ���� %d\n\n", z, w, findsum(z,w));
			
			break;
		default:
			printf(" 1���� �� �� �� �� ���� ��%d������ ���� %d\n\n", x+y,findsum(1,x+y));
			printf(" ���α׷� �����մϴ�\n\n");
			exit(1);
		}
	}

	return 0;
}

long findsum(int m, int n)
{
	int i;
	int sum = 0;
	if (m < n)
	{
		for (i = m; i <= n; i++)
		{
			sum += i;
		}
	}
	else 
	{
		for (i = n; i <= m; i++)
		{
			sum += i;
		}
	}
	return sum;
}
int minimum(int m, int n)
{
	int i;
	
	if (m < n)
	{
		return m;
	}
	else
	{
		return n;
	}
	
}
int maxmum(int m, int n)
{
	int i;
	
	if (m < n)
	{
		return n;
	}
	else
	{
		return m;
	}
	
}