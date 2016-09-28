#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf(" --- Hw #4 20131201 이건희 \"반복문 연습\" ---\n\n ");

	
	int line_n, line, space, print_n;
	int sum = 0;
	while (1)
	{
		sum = 0;
		printf("0~9의 범위의 정수를 입력하세요(종료는 0) ");
		scanf(" %d", &line_n);
		printf("\n");
		if (line_n > 0 && line_n < 11)
		{
			for (line = 0; line <= line_n; line++)
			{
				for (space = 1; space <= line_n - line; space++) // 공백 개수
				{
					printf(" ");
				}

				for (print_n = 1; print_n <= line; print_n++) // 좌측 출력 
				{
					if ((print_n <= line) && (line - print_n+1 > 0))
					{
						printf("%d", line - print_n+1); // line - print_n+1 
						sum += (line - print_n+1);
					}
				}

				printf("0"); // 가운데 0 출력
				 
				for (print_n = 1; print_n <= line; print_n++) // 우측 출력 
				{
					if (print_n < line+1)
					{
						printf("%d", print_n);
						sum += (print_n);
					}
				}

				if (line == line_n)
				{
					printf("	삼각형 안 모든 숫자의 합 = %d", sum);
				}
				
				printf("\n");

			}
			printf("\n");
		}
		else exit(1);
	}
		return 0;
	
}