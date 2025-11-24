#include <stdio.h>

int main(){
    int n, after, i;
    int first = 0, then = 1;
    printf("Enter total numbers you want : ");
    scanf("%d", &n);
    printf("The Series will be : ");

    for(i = 0; i < n; i++) {
        printf("%d ", first);
        after = first + then;
        first = then;
        then = after;
    }
    return 0;
} 



#include<stdio.h>
int main(){
    
}