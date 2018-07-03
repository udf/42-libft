#include "vec.h"
#include <stdio.h>

void print_vec(t_vec *v)
{
	for (size_t i = 0; i < v->length; i++)
		printf("%d ", ((int*)(v->data))[i]);
	printf("\n");
}

void show_del_one(t_vec *v, size_t ind)
{
	printf("del #%zu\n", ind);
	vec_del_one(v, ind);
	print_vec(v);
}

int main()
{
	t_vec *v;
	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	v = vec_new(sizeof(int), 0);
	vec_extend(v, arr, 10);

	print_vec(v);

	show_del_one(v, 0);
	show_del_one(v, 6);
	show_del_one(v, 988);

	vec_free(&v);
	return 0;
}