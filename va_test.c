
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void myPrint(const char *fmt, ...)
{
	va_list args;
	va_start(args, fmt);
	// vprintf(fmt, args);
	// char *out = NULL;
	// int ret = vasprintf(&out, fmt, args);
	char out[1024];
	int ret = vsprintf(out, fmt, args);
	if(ret < 0)
		fprintf(stderr, "malloc error or other error occured\n");
	else
		fprintf(stderr, "output is %s\n", out);
	
	va_end(args);
	// free(out);
}

int main(void)
{
	myPrint("number:%d, str1:%s, str2:%s", 99, "ADC", "mine");
	return 0;
}
