#include <stdio.h>
#include <limits.h> 

int uadd_ok(unsigned int x, unsigned int y);

int uadd_ok(unsigned int x, unsigned int y) {
	unsigned sum = x-y;
	/*if(sum >=x) {
		return 0 ;
	} else {
		return 1;
	}*/
	printf("sum = %d\n",sum );
	return sum >= x ;
}

int main() {
	int check = 0;
	check = uadd_ok(5,14);
	printf("%d\n", check);
	printf("==============================================================\n");

	unsigned a =200 , b = 201;
	double x,y;

	x = a - b + 108.0;
    y = a - b + 108;



   /* prinln(x);
    prinln(y);*/
    printf("unsigned int MAX = %d\n", sizeof(int));
}