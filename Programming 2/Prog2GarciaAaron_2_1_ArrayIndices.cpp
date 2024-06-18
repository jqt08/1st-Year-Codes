#include <iostream>
#include <stdio.h>



int main()
{
    int numbers[10], even[10], i;
    printf("Enter 10 numbers: ");
    for (int i = 0; i < 10; i++){
        scanf("%d",&numbers[i]);
        
        if(numbers[i] % 2 == 0){
            even[i] = i;
        }
        else{
            even[i] = -1;
        }
    }
    
    printf("Even numbers are located at indices: ");
        for(i = 0; i<10; i++){
            if (even[i] != -1){
                printf ("%d", even [i]);
            }
        }
        printf("\n");
    

    return 0;
}