//"piramid structer"//
#include<stdio.h>
int main(){
    int i,j,n;
    printf("enter the number of rows");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=2*n-1;j++){
            if(j>=n-(i-1)&&j<=n+(i-1)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}



//"diamond structer"//
#include<stdio.h>
int main(){
    int i,j,k,rows;
    printf("enter the number of rows");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        for(j=1;j<=rows-i;j++){
            printf(" ");
        }
    for(k=1;k<=2*i-1;k++){
        printf("*");
    }
    printf("\n");
    }

    for(i=rows-1;i>=1;i--){
        for(j=1;j<=rows-i;j++){
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
       
}
    
//" hollow diamond structer"//
#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("enter the number of rows");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(k=1;k<=n-i;k++){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            if(j==1||j==i){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
        }
        for(i=1;i<n;i++){
            for(k=1;k<=i;k++){
                printf(" ");
            }
            for(j=1;j<=n-i;j++){
                if(j==1||j==n-i){
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
            printf("\n");
        }
        
        return 0;
    }

    
 


//"piramid left half structer"//
#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("enter the numbers of rowa");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

//"piramid structer with lecture logic"//
#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("enter the numbers of rowa");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

//"piramid structer"//
#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("enter the numbers of rowa");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("enter the numbers of rowa");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++){
            
        }

    } 
}


//"fibonacci series 0 1 1"//
#include<stdio.h>
int main(){
    int first,then,n,i,after;
    first=0;
    then=1;
    printf("enter the numbers you want");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        printf(" %d ",first);
        
        after=first+then;
        first=then;
        then=after;
         
        
    }
   
    return 0;
     
}


//"diamond structer lecture logic"//
#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("enter the numbers you want");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++){
            printf("*");
        }

        printf("\n");
    }
    for(i=1;i<n;i++){
        for(j=1;j<=i;j++){
            printf(" ");
        }
        for(k=1; k<=2*(n-i)-1;k++){
            printf("*");
    }
    printf("\n");
}
}
 
//"sum using foe loop"//
#include<stdio.h>
int main(){
    int i,n,sum;
    sum=0;
    printf("enter the numbers you want");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum +=i*i;
        printf("%d",sum);


    }
    
}

//"fibonacci 0 1 1"//
#include<stdio.h>
int main(){
    int i,a,b,c,n;
    a=0;
    b=1;
    printf("enter the numbers you want");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
  }
}
//"fibonacci series 2 3 6"//
#include<stdio.h>
int main(){
    int a,b,c,n,i;
    a=2;b=3;
    printf("enter the numbers you want");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d",a);
        c=a*b;
        a=b;
        b=c;
    }
}


//"ct 02 question 2"//
#include<stdio.h>
    int main(){
        int num,b;
        num=23,b=0;
        while(num!=0){
            b+=num%10;
            num=num/10;
        }
        printf("result=%d",b);
    }



//"hollow diamond  structer different logic"//
#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("enter the numbers you want");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++){
            if(k==1||k==2*i-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for(i=1;i<n;i++){
        for(k=1;k<=i;k++){
            printf(" ");
        }
        for(j=1;j<=2*(n-i)-1;j++){
             if(j==1||j==2*(n-i)-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
}
    }

    #include<stdio.h>
    int main(){
        int i,j,k,n;
        printf(" enter the number of rows");
        scanf("%d",&n);
        for(i=1;i<=n;i++){
            for(k=1;k<i;k++){
                printf(" ");
            }
            for(j=i;j<=n;j++){
                printf("* ");
            }
            printf("\n");
        }
        for(i=1;i<=n;i++){
            for(j=1;j<=n-i;j++){
                printf(" ");
            }
            for(k=1;k<=i;k++){
                printf("* ");
            }
            printf("\n");
        }
    }

//" downward piramid structer"//
    #include<stdio.h>
    int main(){
        int i,j,k,n;
        printf("enter the numbers you want");
        scanf("%d",&n);
        for(i=1;i<=n;i++){
            for(j=1;j<i;j++){
                printf(" ");
            }
            for(k=1;k<=2*(n-i)+1;k++){
                printf("*");
            }
            printf("\n");
        }
    }

    
//" downward piramid structer different logic"//
     #include<stdio.h>
    int main(){
        int i,j,k,n;
        printf("enter the numbers you want");
        scanf("%d",&n);
        for(i=1;i<=n;i++){
            for(j=1;j<i;j++){
                printf(" ");
            }
            for(k=i;k<=n;k++){
                printf("* ");
            }
            printf("\n");
        }
    }
    

//"heart shape structer"//
    #include<stdio.h>
    int main(){
        int i,j,k,n;
        printf("enter the number of rows");
        scanf("%d",&n);
        for(i=1;i<=n;i++){
            for(j=1;j<=n-i;j++){
                printf(" ");
            }
            for(k=1;k<=i;k++){
                printf("* ");
            }
            for(j=1;j<=2*(n-i);j++){
                printf(" ");
            }
            for(k=1;k<=i;k++){
                printf("* ");
            }
            printf("\n");
        }
        for(i=1;i<=2*n-1;i++){
                for(j=1;j<=i;j++){
                    printf(" ");
                }
                for(k=1;k<=2*n-i;k++){
                    printf("* ");
                }
                printf("\n");
            }
        
            
    }

    #include<stdio.h>
    int main(){
        int i,n,a,b,c;
        printf("enter the numbers you want");
        scanf("%d",&n);
        a=0;b=1;
        for(i=1;i<=n;i++){
             printf("%d",a);
            c=a+b;
            a=b;
            b=c;
           

        }
    }



    #include <stdio.h>

int main() {
    char arr[5];
    arr[0] = "a";

    printf("%c", arr[0]);

    return 0;
}


#include <stdio.h>

int main() {
    char arr[5];           // Declare a character array of size 5

    printf("Enter a character: ");
    scanf(" %c", &arr[0]); // Take input and store it in arr[0]
                           // Note the space before %c to consume any leftover newline

    printf("You entered: %c\n", arr[0]); // Output the stored character

    return 0;
}


#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("enter the  umbers of rows");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(k=1;k<=i;k++){
            printf("* ");
        }
        printf("\n");
    }
    for(i=1;i<n;i++){
        for(j=1;j<=i;j++){
            printf(" ");
        }
        for(k=1;k<=n-i;k++){
            printf("* ");
        }
        printf("\n");
    }
}
#include<stdio.h>
int main(){
    int a[10],i;
    for(i=0;i<10;i++){
        printf("enetr the number of index %d",i);
        scanf("%d",&a[i]);
    }
    printf("array elements are as follows");
    for(i=0;i<10;i++){
        printf("%d",a[i]);
    }
}


#include<stdio.h>
int main(){
    int i;
     int a[10] = {20 , 19 , 18 , 17 , 16 , 15 , 14 , 13 , 12 , 11};
     for(i=0;i<9;i++){
        printf("%d",a[i]);
     }
     printf("\n");
     for(i=9;i>=0;i--){
        printf("%d",i);
        }
    }


    #include<stdio.h>
    int main(){
        int W;
        scanf("%d",&W);
             if(W%2==0 && W>2){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        


        return 0;
        
    }

    #include <stdio.h>

int main() {
    int n;

    while (1) {
        scanf("%d", &n);
        if (n == 42) {
            break;
        }
        printf("%d\n", n);
    }

    return 0;
}


#include<stdio.h>
int main(){
    int i,n;
    while(1){
        scanf("%d",&n);
        if(n==42){
            break;
        }
        printf("%d\n",n);
    }
    return 0;
}




#include <stdio.h>

int main() {
    int a[3][2], b[3][2], r[3][2];
    int i, j,l,;

    // Input matrix A
    printf("Enter elements of matrix A (3x2):\n");
    for(i = 0; i < 3; i++)
        for(j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);

    // Input matrix B
    printf("Enter elements of matrix B (3x2):\n");
    for(i = 0; i < 3; i++)
        for(j = 0; j < 2; j++)
            scanf("%d", &b[i][j]);

    // Perform element-wise multiplication
    printf("Element-wise multiplication (A * B):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            r[i][j] = a[i][j] * b[i][j];
            printf("%d\t", r[i][j]);
        }
        printf("\n");
    }

    return 0;
}


#include <stdio.h>

int main() {
    int n, i;
    int first = 0, then = 1, after;

    printf("Enter how many numbers you want in Fibonacci series: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    printf("The Fibonacci series is:\n");

    for (i = 0; i < n; i++) {
        printf("%d ", first);
        after = first + then;
        first = then;
        then = after;
    }

    return 0;
}
