#include <stdio.h>


//Write program enter character from keyboard and couting word, line, space.... use getch(), putch()

long coutLine();
long countWord();
long countSpace();

long coutLine() {
	long line = 0;
	char c;

	while(c = getchar() != EOF)
		if(c == '\n')
			line++;
	printf("number of line= %ld\n",line );
	return line;
}

long countWord() {
	long word = 0;
	int c;

	while(c = getchar() != EOF) {
		word++;
	}
	printf("number of word = %ld\n", word);
	return word;
}

long countSpace() {
	long space = 0;
	int c;
	while(c = getchar() != EOF)
		if(c == ' ')
			space++;
	printf("number of space = %ld\n", space);
	return space;
}

int main() {
	countWord();
	coutLine();
	countSpace();

	printf("################################################################################################################\n");

	int c, nl, nt, ns;
    nl = 0;
    nt = 0;
    ns = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n')
            ++nl;
        if (c == '\t')
            ++nt;
        if (c == ' ')
            ++ns;
    }
    printf("Blanks: %d\nTabs: %d\nNewlines: %d\n", ns, nt, nl);
	return 0;
}