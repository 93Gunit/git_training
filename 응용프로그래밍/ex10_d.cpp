/// for while 

#include <stdio.h>

int main(void)
{
	int n;

	printf(" ����� ���� ����(0~26 ������ ����)�� �Է��ϼ���.  ");
	scanf(" %d", &n);

	int i,j,k;

	for (i = 1; i <= n; i++)
	{
		for (j = n - 1; j > 0; j--)
		{
			printf(" ");
		}
		j = 0;
		for (k = 1; k <=i; k++)
		{
			printf("%c", 123 - k);
			
		}
		k = 0;
		printf("\n");
	}

	printf("helow world!\n");

	return 0;
}