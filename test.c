#include <stdio.h>
#include "disarm.h"

int main(void)
{
	char buf[64];

	if (disarm(0x10000000, 0xe5167281, buf, sizeof(buf)))
	{
		printf("%s\n", buf);
	}

	return 0;
}
