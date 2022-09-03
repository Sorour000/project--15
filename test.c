#include "test.h"
#define NULL  (void*) (0)

ERROR_STATE SumValues(int a , int b , int *value ){
      if(value != NULL){
         *value = a+b;
         return ERROR_OK ;
    }
    else {
        return ERROR_NOK ;
    }

}


// h3ml func gdida
ERROR_STATE multiply_values (int a , int b, int *value)
{   //c fkrt el by ref ely etklmt 3liha mai w el kima bta3t el darb tban 3andi fe el main.c

    if(value != NULL){
         *value = a*b;
         return ERROR_OK ;
    }
    else {
        return ERROR_NOK ;
    }

}
