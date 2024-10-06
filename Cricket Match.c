#include<stdio.h>
int main() {
    int a,b ;
    scanf("%d %d",&a,&b) ;

    int c = b * 36 ;
    if(c>=a) {
        printf("YES") ;
    }
    else {
        printf("NO") ;
    }
}