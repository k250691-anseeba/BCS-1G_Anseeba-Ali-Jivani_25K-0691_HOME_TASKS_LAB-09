#include <stdio.h>

int main(){
	
	int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	int *ptr = &arr[0][0];
	int *ptr2 = &arr[1][0];
	int i , j;
	
    //accessing elements of 1st row
	for(j=0 ; j<4 ; j++){
		printf("Index [0][%d]: %d\n", j, *(ptr+j));
	}

    printf("\n\n\n");
    //accessing row 2 elements from ptr2
    printf("ptr2[1] = %d\n", ptr2[1]);     
    printf("ptr2[-2] = %d\n", ptr2[-2]);     
    printf("\n\n");

    printf("\nNumbers divisible by 3:\n");
    for (i = 0; i < 12; i++){
        if (*(ptr + i) % 3 == 0){
            printf("%d ", *(ptr + i));
		}
    }
    
    printf("\n\n\n");

    printf("\nLast element using pointer arithmetic: %d\n", *(ptr + 11));
    printf("Last element using 2D array: %d\n", arr[2][3]);


	return 0;
}
