#include <stdio.h>
#include <stdlib.h>

int sorting_function(int *arr, int arr_len)
{
    if (arr && arr_len)
    {
        int jump = arr_len;
        int i;
        int swapped = 1;
        while (jump > 1 || swapped)
        {
            if (jump > 1)
                jump /= 1.24733;
            swapped = 0;
            for (i = 0; i + jump < arr_len; ++i)
                if (arr[i + jump] < arr[i])
                {
                    int tmp;
                    tmp = arr[i];
                    arr[i] = arr[i + jump];
                    arr[i + jump] = tmp;
                    swapped = 1;
                }
        }
    }
}

int main()
{
    int n, i;

    scanf("%d", &n);

    int arrr[n];

    for(i=0; i<n; i++){
        scanf("%d", &arrr[i]);
    }
    sorting_function(arrr, n);

    for (i = 0; i<n; i++){
	
	if (i+1 < n){ 
        	printf("%d ", arrr[i]);}

	else{
		printf("%d", arrr[i]);
	}
    }
    printf("\n");
  
    return 0;
}   
