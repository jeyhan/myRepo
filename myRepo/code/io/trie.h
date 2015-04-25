#include<stdio.h>
#define MAX 26
typedef struct TrieNode{
	int nCount;
	struct TrieNode* next[MAX];
}TrieNode;

void InitTrieRoot(TrieNode **pRoot);
TrieNode *CreateTrieNode();
void InsertTrie(TrieNode **pRoot, char* s);
int searchTrie(TrieNode **pRoot, char *s);
