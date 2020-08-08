//You Don't Need for all of these includes only stdio.h is enough but because they were in 
//My YouTube Video I included them here 
#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>





int main()
{
    float total_cost = 0;
    float meal_cost,tip_percent, tax_percent,tip,tax;
    scanf("%f",&meal_cost);
    scanf("%f",&tip_percent);
    scanf("%f",&tax_percent);

    tip = tip_percent * meal_cost / 100;
    tax = tax_percent * meal_cost / 100;
    total_cost = tip + tax + meal_cost;

    printf("%d",(int)round(total_cost));

    return 0;
}
