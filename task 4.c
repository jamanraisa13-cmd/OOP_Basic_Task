#include<stdio.h>
#include<stdbool.h>
bool isprime(int num){
    int count=0,i;
    for(i=2;i<num;i++){
        if(num%i==0){
            count++;
            break;
        }
    }
    if(count==0){
        return 1;
    }
    else{
        return 0;
    }

}
int main(){
    int num;
    printf("enter a positive number");
    scanf("%d",&num);
    if(isprime(num)){
        printf("boolean number");
    }
    else{
        printf("not a boolean number");
    }
   
}

