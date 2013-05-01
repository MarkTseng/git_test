#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fun_b()
{
	printf("%s(%d)\n", __func__, __LINE__);
	return 0;
}

int main(int argc, char *argv[])
{
	printf("main\n");
	return 0
}
