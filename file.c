#include <stdio.h>

#define x 5
#define y 10

int main (){


#if x>y
printf("%d" , x);
#elif x<y
printf("%d",y);
#else
printf("equal");
#endif


}