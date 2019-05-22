#include <stdio.h>

int main()
{
    unsigned int n;
    int a, count = 0;

    scanf("%d", &n);

    for(int i = 1; i<=n; i++){

        scanf("%d", &a);
        if(a>=0){

            count = count+a;

        }
    }

    printf("%d\n", count);
    return 0;
}
