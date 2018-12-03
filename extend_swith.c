
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char c = getchar();
	
	switch(c) {
		case 'a'...'z': printf("a...z\n");break;
		case 'A'...'Z': printf("A...Z\n");break;
		default: printf("default\n");break;
	}
	return 0;
}

