#include <stdio.h>
#include <math.h>

void deTohex(long decimaNum);
int hexTode();
int biTode();
int deTobi();
int biTohex();
int hexTobi();

int main() {
	long a;
	printf("Enter decima number\n");
	scanf("%ld",&a);
	deTohex(a);
	return 0;
}

void deTohex(long decimaNum) {
  long remainder,quotient,temp;
  char hexadecimalNumber[100];
  int i,j=0;
  quotient = decimaNum;

  while(quotient != 0) {
  	temp = quotient % 16;
  	if (temp < 10)
  	{
  		hexadecimalNumber[j++] = temp + 48;
  		//temp = temp + 48;
  	} else {
  		hexadecimalNumber[j++] = temp + 55;
  		//temp = temp + 55;
  	}
  	//hexadecimalNumber[i++] = temp;
  	quotient = quotient/16;
  	
  }
  for (i = j ;i>= 0;i--)
	    printf("%c",hexadecimalNumber[i]);
  printf("\n");
}

int hexTode() {
  return 0;
}

int biTode() {
  return 0;
}

int deTobi() {
  return 0;
}

int biTohex() {
  return 0;
}

int hexTobi() {
  return 0;
}
