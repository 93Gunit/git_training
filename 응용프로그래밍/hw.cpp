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
	printf(" \\\\\\\ Homework #3 20131201 이건희 \" 비트 연산자 연습 \" \\\\\\\ \n\n " );

	int x;

	printf(" x 값을 0 ~ 255 범위의 정수로 입력하세요 ");
	scanf(" %d", &x);
	printf("\n\n");

	printf(" x의 하위 1바이트만 2진수로 보면 : x = %d = ", x);
	printf(BYTE_TO_BINARY_PATTERN, BYTE_TO_BINARY(x));
	printf("\n\n");

	x = x | 0x80;
	x = x | 0x20;
	x = x | 0x04;
	x = x | 0x01;
	printf(" x7,x5,x2,x0 을 1로 바꾸면 : x = %d = ",x);
	printf(BYTE_TO_BINARY_PATTERN, BYTE_TO_BINARY(x));
	printf("\n\n");

	x = x & ~0x80;
	x = x & ~0x10;
	x = x & ~0x08;
	x = x & ~0x04;
	printf(" x7,x4,x3,x2 을 0로 바꾸면 : x = %d = ", x);
	printf(BYTE_TO_BINARY_PATTERN, BYTE_TO_BINARY(x));
	printf("\n\n");

	x = x ^ 0x08;
	x = x ^ 0x04;
	x = x ^ 0x02;
	x = x ^ 0x01;
	printf(" x3,x2,x1,x0 을 반대(1은0으로, 0은 1로)하면 : x = %d = ", x);
	printf(BYTE_TO_BINARY_PATTERN, BYTE_TO_BINARY(x));
	printf("\n\n");

	printf(" x의 하위 2바이트를 2진수로 보면 : x = %d = ", x);
	printf(BYTE_TO_BINARY_PATTERN_2, BYTE_TO_BINARY_2(x));
	printf("\n\n");

	x = ~x;
	printf(" ~x의 하위 2바이트를 2진수로 보면 : ~x = %d = ", x);
	printf(BYTE_TO_BINARY_PATTERN_2, BYTE_TO_BINARY_2(x));
	printf("\n\n");

	return 0;
}