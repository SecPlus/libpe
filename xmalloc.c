#include "common.h"

void *xmalloc(size_t size)
{
	if (size <= 0)
		return NULL;

	void *new_mem = malloc(size);

	if (!new_mem)
	{
		fprintf(stderr, "fatal: memory exhausted (xmalloc of %zu bytes)\n", size);
		exit(-1);
	}

	return new_mem;
}
