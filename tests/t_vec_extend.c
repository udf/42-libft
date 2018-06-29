#include "vec.h"
#include <stdio.h>

int main()
{
	t_vec *v;
	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	v = vec_new(sizeof(int), 0);
	vec_extend(v, arr, 10);
	for (size_t i = 0; i < v->length; i++)
	{
		printf("%zu: %d\n", i, ((int*)(v->data))[i]);
	}
	vec_free(&v);
	return 0;
}