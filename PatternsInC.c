#include <stdio.h>
void main(){
    int n,k,j,i=0;
    // printf("Enter a number : ");
    // scanf("%d",&n);
    n=5;
    for (i=0;i<n;i++){
        for (j=0;j<n-i-1;j++){
        printf("  ");}
        for (k=0;k<=i;k++){
        printf("* ");
        }
        for (k=0;k<=i-1;k++){
        printf("* ");
        }
        printf("\n");
    };


// int a,b;
// for (a=n-1;a>=1;a--){
//     for (b=1;b<=n-1;b++){
//         printf("  ");
//         if (b<=n-1-a){
//             printf("  ");
//         }
//         else{
//             printf("* ");
//         }
//     }
//     printf("\n");
// };

    for (i=0;i<n;i++){
        for (j=0;j<n-i-1;j++){
        printf("  ");}
        for (j=0;j<=i;j++){
        printf("%c ",'A'+j);
        }
        for (j=0;j<=i-1;j++){
        printf("%c ",'A'+j);
        }
        printf("\n");
    };
// output:
// program 1:
//     A 
//    BBB
//   CCCCC
    for (i=0;i<n;i++){
        for (j=0;j<n-i-1;j++){
        printf("  ");}
        for (j=0;j<=i;j++){
        printf("%c ",'A'+i);
        }
        for (j=0;j<=i-1;j++){
        printf("%c ",'A'+i);
        }
        printf("\n");
    };
// program 2:
//   A 
//  ABA
// ABCBA
// program 3:
// ABCDE
//  ABCD
//   ABC 
//    AB 
//     A
 for (i = n; i > 0; i--) {
    for (j=1;j<=n-i;j++){
        printf("  ");
    }
    for (j = 0; j < i; j++) {
        printf("%c ", 'A' + j);
    }
        printf("\n");
    }
}

