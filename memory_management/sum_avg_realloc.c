#include <stdio.h>
#include <stdlib.h>

int sum_and_average(int *sum, int *avg, int n, int *array)
{
	*sum = 0;
	*avg = 0;
	for(int i = 0; i < n; i++)
	{
		printf("Enter integer %2d:\n", i + 1);
		scanf("%d", (array + i));
		*sum = *sum + *(array + i);
		*avg = *sum / n;
	}
	printf("Sum: %d\t Average: %d\n", *sum, *avg);
	return(0);
}

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
		printf("Enter %d integers\n\n", n);
		sum_and_average(sum, avg, n, array);

	}
	
	//Reallocation of memory
	n = 5;
	printf("New size of array is %d\n", n);
	
	array = realloc(array, n * sizeof(int));
	if(array == NULL)
	{
		printf("Memory re-allocation failed");
		exit(0);
	}
	printf("Memory re-allocation successful\n");
	sum_and_average(sum, avg, n, array);
		
	
	free(array);
	free(sum);
	free(avg);

	return(0);
}
