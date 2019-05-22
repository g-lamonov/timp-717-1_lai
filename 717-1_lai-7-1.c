#include <stdio.h>

int sorting_function(int *arr, int first, int arr_len)
{

    int i = first, j = arr_len;
    double tmp, x = arr[(first + arr_len) / 2];

    do {
        while (arr[i] < x)
            i++;
        while (arr[j] > x)
            j--;

        if (i <= j)
        {
            if (i < j)
            {
                tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
            i++;
            j--;
        }
    } while (i <= j);

    if (i < arr_len)
        sorting_function(arr, i, arr_len);
    if (first < j)
        sorting_function(arr, first,j);   
}

int main()
{
    int arr_len, i;


    scanf("%d", &arr_len);

    int arr[arr_len];

    for(i=0; i<arr_len; i++){
        scanf("%d", &arr[i]);
    }

    sorting_function(arr,0,arr_len-1);

    for(i=0; i<arr_len; i++){
		if (i+1 < arr_len){
        printf("%d ", arr[i]);
		}
		else{
		printf("%d", arr[i]);
		}
	}
    printf("\n");
    return 0;
}
