#include <stdio.h>
#include <string.h>


int main()
{

    int n;

    scanf("%d",&n);

    if( n%2 != 0){
        printf("Weird");
    }
    else{
        if(n <= 5)
            printf("Not Weird");
        else if ( n <= 20 )
            printf("Weird");
        else {
            printf("Not Weird");
        }
    }

}
