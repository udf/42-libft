#include "vec.h"
#include <stdio.h>

int main()
{
	t_vec *v;
	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	v = vec_new(sizeof(int), 0);
	vec_extend(v, arr, 10);

	int *n = vec_dup_one(v, 0);
	printf("duplicated #0: %d\n", *n);
	free(n);

	n = vec_dup_last(v);
	printf("duplicated #last: %d\n", *n);
	free(n);

	n = vec_dup_n(v, 5);
	printf("duplicated 5 from #0: %d %d %d %d %d\n", n[0], n[1], n[2], n[3], n[4]);
	free(n);

	vec_free(&v);
	return 0;
}