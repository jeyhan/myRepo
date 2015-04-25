#include "trie.h"
TrieNode Memory[1000000];
int allocp = 0;
void InitTrieRoot(TrieNode **pRoot)
{
	*pRoot = NULL;
}

TrieNode *CreateTrieNode()
{
	int i;
	TrieNode *p;
	p = &Memory[allocp++];
	p->nCount = 1;
	for(i = 0; i< MAX; i++)
	{
		p->next[i] = NULL;
	}
	return p;
}

void InsertTrie(TrieNode **pRoot, char *s)
{
	int i, k;
	TrieNode *p;
	if(!(p = *pRoot))
		p = *pRoot = CreateTrieNode();
	i = 0;
	while(s[i])
	{
		k = s[i++] - 'a';
		if(p->next[k])
			p->next[k]->nCount++;
		else
			p->next[k] = CreateTrieNode();
		p = p->next[k];
	}
}

int SearchTrie(TrieNode** pRoot, char *s)
{
	TrieNode *p;
	int i, k;
	if(!(p = *pRoot))
		return 0;
	i = 0;
	while(s[i])
	{
		k = s[i++] - 'a';
		if(p->next[k] == NULL) return 0;
		p = p->next[k];
	}
	return p->nCount;
}
void main(){}
