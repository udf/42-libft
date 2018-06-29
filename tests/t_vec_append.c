#include "vec.h"
#include <stdio.h>

int main()
{
	t_vec *v;
	int test;
	v = vec_new(sizeof(int), 0);
	test = 6;
	vec_append(v, &test);
	vec_append(v, &test);
	test = 42;
	vec_append(v, &test);

	for (size_t i = 0; i < v->length; i++)
	{
		printf("%zu: %d\n", i, ((int*)(v->data))[i]);
	}
	vec_free(&v);
	return 0;
}