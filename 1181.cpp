#include <stdio.h>
#include <string.h>
typedef struct Word{
	char string[51];
	int length;
}Word;

Word temp[20001];

void merge(Word *word,int first, int mid, int last){
	int i = first;
	int j = mid+1;
	int k = first;
	while( i <= mid && j <= last){
		if(word[i].length > word[j].length) temp[k++] = word[j++];
		else if (word[i].length < word[j].length) temp[k++] = word[i++];
		else { if(strcmp(word[i].string, word[j].string) <0 ) temp[k++] = word[i++];
			  else temp[k++] = word[j++];
		}
	}
	if(i <= mid) while( i <= mid ) temp[k++] = word[i++];
	else if ( j <= last ) while(j <= last) temp[k++] = word[j++];
	for(int k = first; k<= last; k++) word[k] = temp[k];
}

void merge_sort(Word *word, int first, int last){
	int mid;
	if(first < last){
		mid = ( first + last ) / 2;
		merge_sort(word,first,mid);
		merge_sort(word,mid+1,last);
		merge(word, first, mid, last);
	}
}

int main(){
	int n; scanf("%d",&n);
	Word word[n];
	for(int i=0; i<n; i++){
		scanf("%s",word[i].string);
		word[i].length = strlen(word[i].string);
	}
	merge_sort(word,0,n-1);
	printf("%s\n", word[0].string);
	for(int i=1; i<n; i++){
		if(strcmp(word[i-1].string, word[i].string) != 0) printf("%s\n",word[i].string);
	}
	
}