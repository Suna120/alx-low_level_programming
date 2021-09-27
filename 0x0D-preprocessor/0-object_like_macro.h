#include "0-object_like_macro.h"
#include "0-object_like_macro.h"
#include <stdio.h>

#define SIZE(n) printf ("SIZE" #n" = %/d", SIZE##n)


int main(void){
    int SIZE = 1024;
    return 0;
}
