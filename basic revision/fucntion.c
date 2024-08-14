#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b){
    return a + b;
}


int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int result = sum(a, b);
    printf("Sum: %d\n", result);
    printf("Press Enter to exit");

    getchar(); 
    getchar();
    return 0;

}
