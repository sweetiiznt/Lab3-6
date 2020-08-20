#include <stdio.h>

int main(void) {
float area,r,h;
   		printf("input radius : ");
   		scanf("%f",&r);
   		printf("input high : ");
		scanf("%f",&h);
   		area = (2*3.14*r)*h+2*(3.14*r*r);
   		printf("area = %0.2f",area);
  return 0;
}
