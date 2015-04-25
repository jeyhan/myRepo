#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void ini2xml(FILE *ini, FILE *xml)
{
	char buf[50] = {0};
	char pro[50] = {0};
	char sct[50] = {0};
	char *key;
	char *value;

	int ibuf = 0;//[xxx]-->xxx
	int ipro = 0;
	int eofs = 0;
	while(fgets(buf, 50, ini))
	{
		if((buf[0] < 'a' ||buf[0]> 'z')
                               && (buf[0]< 'A'||buf[0]>'Z'))
		{
			if(eofs == 1)
				fprintf(xml, "</%s>\n", sct);
			eofs = 0;
		}

		if(buf[0] == '[')
		{
			ibuf = 1;
			ipro = 0;
			while(buf[ibuf] != ']')
			{
				if(buf[ibuf]>='a'&&buf[ibuf]<='z'
				||buf[ibuf]>='A'&&buf[ibuf]<='Z')
					pro[ipro++] = buf[ibuf];
				ibuf++;
			}
			pro[ipro] = '\0';
			strcpy(sct, pro);
			fprintf(xml,"<%s>\n",pro);
			eofs = 1;
			memset(pro, 0, 50);
			continue;
		}
                if(buf[0] == ';'){
                        strncpy(pro, buf + 1, strlen(buf) - 2);
                        fprintf(xml, "<-- %s -->\n", pro);
                        memset(pro, 0, 50);
                        continue;
                }

                if(buf[0]>='a'&&buf[0]<='z'
                                ||buf[0]>='A'&&buf[0]<='Z')
		{
			key = strtok(buf, "= \n");
			value = strtok(NULL, "= \n");
			fprintf(xml,"\t<%s>%s</%s>\n",key, value, key);
			continue;
		}
		if(buf[0] == '\n')
		{
			fprintf(xml, "\n");
			continue;
		}



	}//while
	fprintf(xml,"</%s>\n",sct);

}
int main(int argc, char* argv[])
{
	FILE *ini = NULL,*xml = NULL;
	if(argc != 3)
	{
		perror("Wrong argcs number");
		exit(3);
	}
	if((ini = fopen(argv[1], "r")) == NULL)
	{
		perror("Open ini");
		exit(1);
	}
	if((xml = fopen(argv[2], "w")) == NULL)
	{
		perror("Open xml");
		exit(2);
	}
	ini2xml(ini, xml);
	fclose(xml);
	fclose(ini);
	return 0;


}
