#include<stdio.h>
#include<math.h>
int main()
{
   int a, b, c, d;
   int root1, root2, realPart, imaginaryPart;

   printf("Enter cofficients (a, b, and c): ");
   scanf("%d %d %d", &a, &b, &c);

   printf("The quadratic equation: %dx^2%+dx%+d \n",a,b,c);
   d = (b*b) - 4*a*c;
   if( d>1 )
   {
     root1 = (-b+sqrt(d)) / 2*a;
     root2 = (-b-sqrt(d)) / 2*a;
     printf("Roots are %d and %d\n", root1, root2);
   }
   else if(d==0)
   {
     root1 = root2 = -b/2*a;
     printf("Roots are %d and %d\n", root1, root2);
   }
   else
   {
     realPart = -b/2*a;
     imaginaryPart = sqrt(d)/2*a;
     printf("root1 = %d + i(%d)\n", realPart, imaginaryPart);
     printf("root1 = %d - i(%d)\n", realPart, imaginaryPart);
   }
   return 0;
}


