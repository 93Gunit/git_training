#include <stdio.h>

#define BYTE_TO_BINARY_PATTERN "%c%c%c%c%c%c%c%c"
#define BYTE_TO_BINARY_PATTERN_2 "%c%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c"
#define BYTE_TO_BINARY(byte) \
	(byte & 0x80 ? '1' : '0'), \
	(byte & 0x40 ? '1' : '0'), \
	(byte & 0x20 ? '1' : '0'), \
	(byte & 0x10 ? '1' : '0'), \
	(byte & 0x08 ? '1' : '0'), \
	(byte & 0x04 ? '1' : '0'), \
	(byte & 0x02 ? '1' : '0'), \
	(byte & 0x01 ? '1' : '0')
#define BYTE_TO_BINARY_2(byte) \
	(byte & 0x8080 ? '1' : '0'), \
	(byte & 0x4080 ? '1' : '0'), \
	(byte & 0x2080 ? '1' : '0'), \
	(byte & 0x1080 ? '1' : '0'), \
	(byte & 0x0880 ? '1' : '0'), \
	(byte & 0x0480 ? '1' : '0'), \
	(byte & 0x0280 ? '1' : '0'), \
	(byte & 0x0180 ? '1' : '0'), \
	(byte & 0x80 ? '1' : '0'), \
	(byte & 0x40 ? '1' : '0'), \
	(byte & 0x20 ? '1' : '0'), \
	(byte & 0x10 ? '1' : '0'), \
	(byte & 0x08 ? '1' : '0'), \
	(byte & 0x04 ? '1' : '0'), \
	(byte & 0x02 ? '1' : '0'), \
	(byte & 0x01 ? '1' : '0')

int main(void)
{
	printf(" \\\\\\\ Homework #3 20131201 �̰��� \" ��Ʈ ������ ���� \" \\\\\\\ \n\n " );

	int x;

	printf(" x ���� 0 ~ 255 ������ ������ �Է��ϼ��� ");
	scanf(" %d", &x);
	printf("\n\n");

	printf(" x�� ���� 1����Ʈ�� 2������ ���� : x = %d = ", x);
	printf(BYTE_TO_BINARY_PATTERN, BYTE_TO_BINARY(x));
	printf("\n\n");

	x = x | 0x80;
	x = x | 0x20;
	x = x | 0x04;
	x = x | 0x01;
	printf(" x7,x5,x2,x0 �� 1�� �ٲٸ� : x = %d = ",x);
	printf(BYTE_TO_BINARY_PATTERN, BYTE_TO_BINARY(x));
	printf("\n\n");

	x = x & ~0x80;
	x = x & ~0x10;
	x = x & ~0x08;
	x = x & ~0x04;
	printf(" x7,x4,x3,x2 �� 0�� �ٲٸ� : x = %d = ", x);
	printf(BYTE_TO_BINARY_PATTERN, BYTE_TO_BINARY(x));
	printf("\n\n");

	x = x ^ 0x08;
	x = x ^ 0x04;
	x = x ^ 0x02;
	x = x ^ 0x01;
	printf(" x3,x2,x1,x0 �� �ݴ�(1��0����, 0�� 1��)�ϸ� : x = %d = ", x);
	printf(BYTE_TO_BINARY_PATTERN, BYTE_TO_BINARY(x));
	printf("\n\n");

	printf(" x�� ���� 2����Ʈ�� 2������ ���� : x = %d = ", x);
	printf(BYTE_TO_BINARY_PATTERN_2, BYTE_TO_BINARY_2(x));
	printf("\n\n");

	x = ~x;
	printf(" ~x�� ���� 2����Ʈ�� 2������ ���� : ~x = %d = ", x);
	printf(BYTE_TO_BINARY_PATTERN_2, BYTE_TO_BINARY_2(x));
	printf("\n\n");

	return 0;
}