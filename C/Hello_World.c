#include <stdio.h>
#include <string.h>
#include <custom.h>

int main(){

	printf(CUSTOM_STRING);
	char *H="Hello World !";
	while( (*H) !='\0' ){
		printf("%c",*H++);
	}
	printf("\n");



	printf(" :This change has been made on local machine:\n");


	printf(" :This line has been added in the First Branch: \n");



	return 0;
}
