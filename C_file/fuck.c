#include <stdio.h>

void ETC() ;
void BBC();

int main() {
	int etx=1;
	int bbc=2;
	ETC();
	BBC();
	return 0;
}

void ETC() {
	float t = 0;
	float num=3.67913206,buy=17.32;
	float current_ETC;
	printf("enter current_ETC: ");
	scanf("%f",&current_ETC);

	t = (current_ETC - buy) * num;
	printf("t = %4.2f\n",t);
}

void BBC() {
	float t = 0;
	float num=0.00799787,buy=1312.73;
	float current_BBC;
	printf("enter current_BBC: ");
	scanf("%f",&current_BBC);

	t = (current_BBC - buy) * num;
	printf("t = %6.2f\n",t);
}
