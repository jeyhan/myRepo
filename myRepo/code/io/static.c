#include<stdio.h>
#include<string.h>
#include<stdlib.h>

FILE* fp;
int listsize = 0;
struct WordList{
	char*	word;
	int	count;
};
void showlist(struct WordList* list)
{
	int i = 0;
	for(; i < listsize; i++)
		printf("%s\t\t%d\n",list[i].word,list[i].count);
	return;
}
void inputword(struct WordList* list, char* word)
{
	int i = 0;
	if(listsize >= 2000)
		perror("List overflow.");
	for(;i < listsize; i++)
	{
		if(strcasecmp(word, list[i].word) == 0)
		{
			list[i].count++;
			return;
		}
	}
	list[listsize].word = strdup(word);
	list[listsize].count = 1;
	listsize++;
	return;
}
int cmp(const void* wordleft, const void* wordright)
{
	return ((struct WordList*)wordleft)->count <
		 ((struct WordList*)wordright)->count?1:-1;
}

void orderlist(struct WordList* list)
{
	qsort(list, 2000, sizeof(list[0]), cmp);
}

int main(){
	char *tmp;
	char tmpline[1000] = {0};
	char tmpword[20] = {0};
	struct WordList mylist[2000] = {0};

	fp = fopen("test.txt", "r");
	while(fgets(tmpline, 1000, fp)){
		tmp = strtok(tmpline, ",. \n\t");
		if(tmp != NULL)
			inputword(mylist, tmp);
		while((tmp = strtok(NULL, ",. \n\t")))
		{
			inputword(mylist, tmp);
		}
	}
	orderlist(mylist);
	showlist(mylist);

}

