#include <stdio.h>
#include <stdlib.h>



int sum(int* a, int* b){
    return *a + *b;
}


int main(){
    int i = 100;
    int j = 200;
    int *p = &i;
    int *q = &j;
    int result = sum(p, q);
    printf("The value of i is: %d\n", i);
    printf("The address of i is: %p\n",p);
    printf("The value of i is is : %d\n", *(&i));
    printf("The value of i is is : %d\n", *p);
    printf("The value of result is: %d\n", result);


return 0;

}