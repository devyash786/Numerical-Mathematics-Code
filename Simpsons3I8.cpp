#include<stdio.h>
#include<Math.h>
#define f(x) sqrt(exp(x))
int main()
{
      float lower_bound, upper_bound, h, sum = 0, value;
      int count, interval;
      printf("Enter Lower Boundary Value:\t");
      scanf("%f", &lower_bound);
      printf("Enter Upper Boundary Value:\t");
      scanf("%f", &upper_bound);
      printf("\nEnter Interval Limit:\t");
      scanf("%d", &interval);
      h = (upper_bound - lower_bound) / interval;
      sum = f(lower_bound) + f(upper_bound);
      for(count = 1; count < interval; count++)
      {
            if(count % 3 == 0)
            {
                  sum = sum + 2 * f(lower_bound + count * h);
            }
            else
            {
                  sum = sum + 3 * f(lower_bound + count * h);
            }
      }
      value = (3 * h / 8) * sum;
      printf("\nValue of Simpson's 3/8 Rule Integration:\t%f\n", value);
      return 0;
}
