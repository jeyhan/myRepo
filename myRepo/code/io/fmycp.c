#include<stdio.h>
#include<stdlib.h>

int main(int argc, char* argv[]){
	FILE* fps, *fpd;
	char a[100];
	if(argc != 3){
		perror("Argc wrong\n");
		exit(3);
	}
	if((fps = fopen(argv[1], "r")) ==NULL){
		perror("Open file src");
		exit(1);
	}
        if((fpd = fopen(argv[2], "w+")) ==NULL){
                perror("Open file dest2");
                exit(2);
        }
	while(fgets(a,100,fps))
		fputs(a, fpd);
}
