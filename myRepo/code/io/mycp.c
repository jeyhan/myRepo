#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[]){
	FILE *fps,*fpd;
	int ch;

	if(argc != 3){
		perror("Arguments number  wrong.\n");
		exit(3);
	}

	if ( (fps = fopen(argv[1], "r")) == NULL){
		perror("Open file source\n");
		exit(1);
	}
	if( (fpd = fopen(argv[2], "w+")) == NULL){
		perror("Open or Creating destion\n");
		exit(2);
	}

	//while ch is not ctrl-D,strings are putted into
	//file whose handle is fp.
	//move the location of w/r to first of file.
	rewind(fpd);
	while( (ch = fgetc(fps)) != EOF)
		fputc(ch, fpd);
	fclose(fps);
	fclose(fpd);
	return 0;
}
