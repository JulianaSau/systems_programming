#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n , *sum, *avg;
	printf("Enter numbers of integers you would like: \n");
	scanf("%d", &n);

	int *array = (int *)calloc(n, sizeof(int));
	sum = (int *)calloc(1, sizeof(int));
	avg = (int *)calloc(1, sizeof(int));
	
	if(array == NULL || sum == NULL || avg == NULL)
	{
		printf("Memory allocation failed\n");
		exit(0);
	}
	else
	{
		printf("Memory allocation successful\n");
		printf("Enter %d integers\n", n);
		for(int i = 0; i < n; i++)
		{
			printf("Enter %2d integer:\n", i + 1);
			scanf("%d", (array + i));
			*sum = *sum + *(array + i);
			*avg = *sum / n;
		}
	}
	printf("Sum: %d\t Average: %d\n", *sum, *avg);
	
	free(array);
	free(sum);
	free(avg);

	return(0);
}
