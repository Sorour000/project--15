#include <stdio.h>
#include <stdlib.h>
#include "test.h"
int main()
{
    int x=10;
    int y=20;
    int *p = NULL ;
    int summation =0 ;
    int multiplication =0 ;
    // eb3tli el address bta3 el summation l sum_values w htst2blh b ptr y8ir fih
    if(SumValues(x,y,p)== ERROR_OK)
    {
        printf("sum of %d & %d = %d \n",x,y, summation );
    }
    else
    {
        printf("invalid Adress");
    }
     if( multiply_values(x,y, &multiplication)== ERROR_OK)
    {
        printf("sum of %d & %d = %d \n", x,y ,multiplication );
    }
      else
    {
        printf("invalid Adress");
    }

    return 0;
    // 3aiz a3ml comitt
}
