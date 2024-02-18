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

void pattern9(int n){ //sum of previos 2 patterns
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

void pattern10(int N)
{
      // Outer loop for number of rows.
      for(int i=1;i<=2*N-1;i++){
          
          // stars would be equal to the row no. uptill first half 
          int stars = i;
          
          // for the second half of the rotated triangle.
          if(i>N) stars = 2*N-i;
          
          // for printing the stars in each row.
          for(int j=1;j<=stars;j++){
              printf("*");
          }
          
          printf("\n");
      }
}

void pattern11(int n){
    int start;
    for(int i=0;i<n;i++){
        if(i%2==0){ start=1;}
        else{start=0;}

        for(int j=0;j<=i;j++){
        printf("%d",start);
        start=1-start;
        }printf("\n");
    }

}

void pattern12(int n){
    //numbers
   for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        printf("%d",j);
    }
   
    //space
    
        for(int j=0;j<(n*2)-(2*i);j++){
            printf(" ");
        }
    
    //num

    for(int j=0;j<i;j++){
        printf("%d",i-j);
    }printf("\n");
   }

}

void pattern13(int n){
    for(int i=0;i<n;i++){
        for(char j='A';j<='A'+i;j++){
            printf(" %c",j);
            
        }printf("\n");
    }
}

void square(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0||j==0||i==n-1||j==n-1){
                printf("*");
            }else{printf(" ");}
        }printf("\n");
    }
}

void pattern(int n){//dint get it
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
          int top=i;
          int left=j;
          int right=(2*n-2)-j;
          int bottom=(2*n-2)-i;  
            printf
        }
    }
}

int main(){

int n;

scanf("%d",&n);

square(n);

    return 0;
}