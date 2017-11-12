#include <stdio.h>
#include <string.h>
typedef unsigned char *byte_point;

void show_byte(byte_point start, int len);
void show_int(int x);
void show_float(float x);
void show_poiter(void *x);

int main(int argc, char const *argv[])
{
	const char *s = "abcde";
	show_byte((byte_point) s, strlen(s));
	return 0;
}

void show_byte(byte_point start, int len) {
	int i;
	for (int i = 0; i <len; ++i)
	{
		printf("%.2x", start[i]);
	}
	printf("\n");
}

void show_int(int x) {
	show_byte((byte_point) &x, sizeof(int));
}

void show_float(float x) {
	show_byte((byte_point) &x, sizeof(float));
}

void show_poiter(void *x) {
	show_byte((byte_point) &x, sizeof(void *));
}