#include <stdio.h>


int main()
{
    int n;
    scanf("%d", &n);
    int count = 0;

    while (n) {
        n = (n & (n << 1));
        count++;
    }
    printf ("%d\n", count);

return 0;
    return 0;
}