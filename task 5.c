#include <stdio.h>

int main(){
    char name[10];
    scanf("%s",&name);
    printf("hello %s",name);
}










#include<stdio.h>
int main(){
    double cats=5.5e7;
    printf("%f",cats);
}





#include<stdio.h>
int main(){
    int a,b;
    printf("enter the value a and b");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf(" the value a and b are %d %d",a,b);
}



#include <stdio.h>

int main(){
    int a, b;
    printf("Enter two numbers a & b : \n");
    scanf("%d %d", &a, &b);
    
    a = a + b;
    b = a - b;
    a = a - b;
    printf("a = %d, b = %d\n", a, b);
    return 0;
}