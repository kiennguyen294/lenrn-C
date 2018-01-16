#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int convertCelsius(int fahr);

int convertCelsius(int fahr) {
	int Celsius = 0;
	Celsius = (fahr - 32) * 5/9;
	return Celsius;
}
int main() {
	//int lower = 0, upper = 300, step = 20;
	int fahr = LOWER;
	int Celsius = 0;

	while(fahr <= UPPER){
		Celsius = convertCelsius(fahr);
		printf("%d\t%d\n",fahr, Celsius );
		fahr += STEP;
	}
}