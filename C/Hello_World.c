#include<stdio.h>
#include<string.h>
int main(){
	char *H="Hello World !";
	while( (*H) !='\0' ){
		printf("%c",*H++);
	}
	printf("\n");



	printf(" :This change has been made on local machine:\n");
	return 0;
}
