#include <stdio.h>
#include <stdlib.h>

int sorting_function(int *arr, int arr_len)
{
    for (int i = (arr_len / 2) - 1; i >= 0; i--){
        int max_descendant;
		int done = 0; 
		while ((i * 2 <= arr_len) && (!done)) 
		{
			if (i * 2 == arr_len)
				max_descendant = i * 2; 
			else if (arr[i * 2] > arr[i * 2 + 1])
				max_descendant = i * 2;
			else
				max_descendant = i * 2 + 1;

			if (arr[i] < arr[max_descendant]) 
			{
				int k = arr[i];
				arr[i] = arr[max_descendant];
				arr[max_descendant] = k;
				i = max_descendant;
			}
			else
				done = 1; 
    }
    
}

    for (int i = arr_len - 1; i >= 1; i--) 
    {
        int k = arr[0];
        arr[0] = arr[i];
        arr[i] = k;
        int max_descendant;
		int done = 0; 
		int ptr = 0;
		while ((ptr * 2 <= i-1) && (!done)) 
		{
			if (ptr * 2 == i-1)
				max_descendant = ptr * 2; 
			else if (arr[ptr * 2] > arr[ptr * 2 + 1])
				max_descendant = ptr * 2;
			else
				max_descendant = ptr * 2 + 1;

			if (arr[ptr] < arr[max_descendant]) 
			{
				int k = arr[ptr];
				arr[ptr] = arr[max_descendant];
				arr[max_descendant] = k;
				ptr = max_descendant;
			}
			else
				done = 1; 
		}
    }
	return 0;
}


int main()
{
    int arr_len, i;
    int* arr;
    scanf("%d", &arr_len);
    arr = (int*)calloc(arr_len, sizeof(int));
    for (i = 0; i < arr_len; i++) {
        scanf("%d", &arr[i]);
    }
    sorting_function(arr, arr_len);
    for (i = 0; i < arr_len; i++) {
		if (i+1 < arr_len){
        printf("%d ", (arr[i]));
	}
		else{
		printf("%d", (arr[i]));	
		}
	}
    printf("\n");
    return 0;
}

