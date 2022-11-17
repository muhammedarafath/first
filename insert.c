#include <stdio.h>

void main()
{
    int n, array[100], i, d, t;
    
    printf("Enter number of elements\n");
    scanf("%d", &n);
    
    printf("Enter %d integers\n", n);
    
    for (i = 0; i < n; i++)
 {    
        scanf("%d", &array[i]);    
  }
    
    for (i = 1 ; i<= n - i; i++) 
{    
        d = i;        
        while ( d > 0 && array[d] < array[d-1])
{        
            t          = array[d];
            array[d]   = array[d-1];
            array[d-1] = t;        
            d--;        
 }        
}
}
