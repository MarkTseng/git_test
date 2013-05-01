#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lib_a()
{
	printf("%s(%d)\n", __func__, __LINE__);
	return 0;
}


