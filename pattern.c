#include<stdio.h>

void pattern1(int n){
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        printf("*");
    }printf("\n");
}
}

void pattern2(int n){
    for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        printf("*");
    }printf("\n");
}
}

void pattern3(int n){
    for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        printf("%d",j);
    }printf("\n");
}
}

void pattern4(int n){
    for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        printf("%d",i);
    }printf("\n");
}
}

void pattern5(int n){
    for(int i=1;i<=n;i++){
    for(int j=0;j<n-i+1;j++){// here we are using n-row+1 bcz in each row the number of elements decrease and i value increase (+1 specifically bcz we took int i=1)
        printf("j");
    }printf("\n");
}
}

void pattern6(int n){
    for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i+1;j++){
        printf("%d",j);
    }printf("\n");
}
}

void pattern7(int n){
    for(int i=0;i<n;i++){
    // prints spaces
    for(int j=1;j<n-i;j++){
        printf(" ");
    }

    //print  stars
    for(int j=1;j<=(i*2)+1;j++){
        printf("*");
    }

    //prints space
    for(int j=1;j<n-i;j++){
        printf(" ");
    }printf("\n");
}
}

void pattern8(int n){
    for(int i=0;i<=n;i++){
    // prints spaces
    for(int j=0;j<i;j++){
        printf(" ");
    }

    //print  stars
    for(int j=0;j<(2*n-(2*i+1));j++){
        printf("*");
    }

    //prints space
    for(int j=0;j<i;j++){
        printf(" ");
    }printf("\n");
}
}

int main(){

int n;

scanf("%d",&n);

pattern8(n);

    return 0;
}