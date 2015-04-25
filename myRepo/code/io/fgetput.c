#include<stdio.h>
#include<stdlib.h>

int main(void){
	FILE *fp;
	int ch;
	if ( (fp = fopen("file2", "w+")) == NULL){
		perror("Open file file2\n");
		exit(1);
	}//create a file

	//while ch is not ctrl-D,strings are putted into
	//file whose handle is fp.
	while( (ch = fgetc(stdin)) != EOF)
		fputc(ch, fp);
	//move the location of w/r to first of file.
	rewind(fp);
	while( (ch = fgetc(fp)) != EOF)
		putchar(ch);
	fclose(fp);
	return 0;
}
