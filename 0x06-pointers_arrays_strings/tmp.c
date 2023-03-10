#include <stdio.h>

// #define PI 3.14
#define feature

int main()
{
#ifdef PI
	float i = PI; 
#else 
	float i = 3.15;
#endif
	
#ifndef test
	printf("%f\n", i);
#else
	printf("test");
#endif
}
