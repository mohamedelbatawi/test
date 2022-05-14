#include <stdio.h>

#define x 5
#define y 10

int main (){


#if x>y
printf("x equal = %d" , x);
#elif x<y
printf("y= %d",y);
#else
printf("equal");
#endif


}