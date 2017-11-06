#include <stdio.h>
#include <math.h>
#include  <string.h>
#include <stdlib.h>

void deTohex(long decimaNum);
void hexTode(char *hexaNum, int len);
void biTode(char *biNum, int len);
void deTobi(long decimaNum);
int biTohex();
int hexTobi();

int main() {
	long a;
  char hex[100];
	printf("Enter decima number\n");
	scanf("%ld",&a);
	deTohex(a);
  deTobi(a);
  printf("Enter hexxa number\n");
  scanf("%s", hex);
  int lenHex = strlen(hex);
  hexTode(hex,lenHex);

  char binaryNum[100];
  printf("Enter binary number\n" );
  scanf("%s",binaryNum);
  int lenBi = strlen(binaryNum);
  biTode(binaryNum,lenBi);
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

void hexTode(char *hexaNum, int len) {
  int i = 0,val;
  len--;
  long long decima =0;
  for(i=0;hexaNum[i]!='\0';i++) {
    if(hexaNum[i]>='0' && hexaNum[i]<='9') {
      val = hexaNum[i] - 48;
    } else if(hexaNum[i] >= 'a' && hexaNum[i] <='f') {
      val = hexaNum[i] - 97 + 10;
    } else if(hexaNum[i] >='A' && hexaNum[i] <='F') {
      val = hexaNum[i] -65 + 10;
    }
    decima += val * pow(16,len);
    len--;
  }
  printf("decima number = %lld\n",decima );
}

void biTode(char *biNum, int len) {
  int i =0;
  long decima =0;
  printf("%d\n",len);
  for(i=len-1;i>=0;i--) {
    decima += (biNum[i] - 48) * (int)pow(2,len-1-i);
    }
    printf("decima number = %ld\n",decima);
  }


void deTobi(long decimaNum) {
  long remainder,quotient,temp;
  char binaryNumber[100];
  int i,j=0;
  quotient = decimaNum;
  while(quotient !=0) {
    temp = quotient % 2;
    binaryNumber[j++] = temp +48;
    quotient = quotient/2;
  }
  printf("binary number\n");
  for (i = j ;i>= 0;i--)
      printf("%c",binaryNumber[i]);
  printf("\n");
}

int biTohex() {
  return 0;
}

int hexTobi() {
  return 0;
}
