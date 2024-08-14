#include <stdio.h>
#include <stdlib.h>
int main(){

    int arr[] = {1,2,3,4,5,6,7};
    int arr_size = sizeof(arr) / sizeof(arr[0]);  // Calculate the number of elements in the array

    for (int i=0; i<arr_size; i++){
    printf("%d ", arr[i]);
    }

return 0;
}
