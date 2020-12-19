#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int n;
    printf("Enter nth number to find in Fibonnaci Sequence.\n");
    scanf("%u", &n);

    long long int x=fs(n);

    printf("%uth number in the Fibonaaci Sequence is %u", n, x);
    return 0;
}

int fs(int n){
    long long int array[n];
    array[0]=1;
    array[1]=1;
    for(int x=2;x<=n;x++){
        array[x]=array[x-1]+array[x-2];
    }
    //printf("%d\n\n", array[4]);
    return array[n-1];
}
