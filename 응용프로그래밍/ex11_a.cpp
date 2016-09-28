// 함수 사용

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
	printf(" 문자 한개 정수 2개 입력 받습니다.\n");
	printf(" 문자 a, s, d 중의 하나이면 반복하고, 그외 문자면 종료합니다.\n\n");
	while (1)
	{
		printf(" 문자 한개, 저우 2개를 입력하세요 ");
		scanf(" %c %d %d", &c,&x,&y);
		switch (c)
		{
		case 'a':
			z = minimum(x, y);
			printf(" 1부터 두 수 중 최소값 %d 까지의 합은 %d\n\n",z,findsum(1,z));
			
			break;
		case 's':
			z = maxmum(x, y);
			printf(" 1부터 두 수 중  최대값 %d까지의 합은 %d\n\n", z,findsum(1,z));
			break;
		case 'd':
			z = minimum(x, y);
			w = maxmum(x, y);
			printf(" 최소값 %d 부터 최대값 %d까지의 합은 %d\n\n", z, w, findsum(z,w));
			
			break;
		default:
			printf(" 1부터 두 수 중 두 수의 합%d까지의 합은 %d\n\n", x+y,findsum(1,x+y));
			printf(" 프로그램 종료합니다\n\n");
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