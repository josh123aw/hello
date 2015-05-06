
#include "stdio.h"
#include "string.h"


int main() 
{ 
		char buff[100];
		while(1)
		{

		
			printf("hello, what is your name?\n");
			scanf("%s", buff);
			if(strcmp(buff, "Josh") == 0) {
				printf("Hello, %s\n", buff);
			} else
			{
				printf("Hi, %s\n", buff);
			}	
		}	
}
