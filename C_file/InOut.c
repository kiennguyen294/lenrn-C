#include <stdio.h>

int main() {
	int  c;
	printf("enter your char\n");
	c = getchar();

	/*printf("char you entered:\n" );
	putchar(c);*/

    // Printf char input:

	while(c != EOF) {
		putchar(c);
		c = getchar();
	}

	// print EOF value:

	//printf("EOF: %d\n", EOF);

	// cout char input

	long nc = 0;
	while(c = getchar() != EOF) {
		nc++;
	}

	printf("nc = %ld",nc);

	return 0;
}

/* int main()
{
int c ;
int count ;

while ( ( c = getchar() ) != EOF )
   count ++ ;

printf( "%d characters\n" , count ) ;
}*/