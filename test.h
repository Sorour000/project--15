#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED
// 2- fkrt el magic num w 3aiz a return kima fe enum
typedef enum
{
    ERROR_OK ,
    ERROR_NOK
}  ERROR_STATE;

ERROR_STATE SumValues(int a , int b,int *value );
// el func el gdida ely diftha
ERROR_STATE multiply_values(int a , int b, int *value) ;
#endif // TEST_H_INCLUDED
