#include<stdio.h>
#include<string.h>
int main(){
	char *H="Hello World !";
	while( (*H) !='\0' ){
		printf("%c",*H++);
	}
	printf("\n");

	return 0;
}
