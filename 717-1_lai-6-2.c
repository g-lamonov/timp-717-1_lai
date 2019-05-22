#include <stdio.h>
#include <stdlib.h>

int sorting_function(int *arr, int arr_len)
{
    int i, j, step;
    int tmp;
    for (step = arr_len / 2; step > 0; step /= 2)
        for (i = step; i < arr_len; i++)
        {
            tmp = arr[i];
            for (j = i; j >= step; j -= step)
            {
                if (tmp < arr[j - step])
                    arr[j] = arr[j - step];
                else
                    break;
            }
            arr[j] = tmp;
        }
}

int main()
{
    int n, i;

    scanf("%d", &n);

    int ar[n];

    for(i=0; i<n; i++){
        scanf("%d", &ar[i]);
    }
    sorting_function(ar, n);

    for (i = 0; i<n; i++){
	if (i+1<n){   
   	  printf("%d ", ar[i]);}
   	else{
	  printf("%d", ar[i]);
	}
    }

    printf("\n");
    return 0;
}

