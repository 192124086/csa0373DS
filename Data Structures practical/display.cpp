#include <stdio.h>
int main()
{
    int array[50], position, c, n, value;
	printf("Enter number of elements in the array\n");
    scanf("%d", &n);
    printf("Enter %d elements\n", n);
    for (c = 0; c < n; c++)    
        scanf("%d", &array[c]);
        printf("\nElements in the array:\n");
        for (c = 0; c < n; c++)
   			printf("%d\t",array[c]);
}
