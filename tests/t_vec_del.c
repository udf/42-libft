#include "vec.h"
#include <stdio.h>

void print_vec(t_vec *v)
{
	printf("len:%zu  ", v->length);
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
	t_vec v;
	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	vec_init(&v, sizeof(int), 0);
	vec_extend(&v, arr, 10);

	print_vec(&v);

	show_del_one(&v, 0);
	show_del_one(&v, 6);
	show_del_one(&v, 988);

	printf("testing del last\n");
	while (v.length >= 7)
	{
		vec_del_last(&v);
		print_vec(&v);
	}

	printf("testing del n\n");
	vec_del_n(&v, 3);
	printf("delted 3\n");
	print_vec(&v);

	vec_free(&v);
	return 0;
}
