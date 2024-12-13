#include <stdio.h>
#include <string.h>
#include <algorithm>
void arr(char *inputstring, char *reversedstring){
	gets(inputstring);
	for(int i=0;i<strlen(inputstring);i++){
		printf("%c", *(inputstring + i));
	}
	for(int i=0;i<strlen(inputstring)/2;i++){
		std::swap(*(inputstring + i),*(inputstring + strlen(inputstring)-i-1));
	}
	for(int i=0;i<strlen(inputstring);i++){
		*(reversedstring + i)=*(inputstring + i);
	}
	printf("\n");
	for(int i=0;i<strlen(inputstring);i++){
		printf("%c", *(reversedstring + i));
	}
}
int main(){
	char inputstring,reversedstring;
	arr(&inputstring, &reversedstring);
	
}