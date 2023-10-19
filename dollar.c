#include <stdio.h>
int main()
{
 double usDollars, fee, remainingAmount, gbp, jpy;
 const double usdToGbpRate = 0.79;
 const double usdToJpyRate = 127.65;
 const double exchangeFeePercentage = 0.1;
 printf("Please input the total amount of US Dollars: ");
 scanf("%lf", &usDollars);
 fee = usDollars * exchangeFeePercentage;
   remainingAmount = usDollars - fee;
   gbp = (remainingAmount / 2) * usdToGbpRate;
   jpy = (remainingAmount / 2) * usdToJpyRate;
   printf("Fee (10%%): $%.2f\n", fee);
   printf("You get:\n");
   printf("%.2f GBP\n", gbp);
   printf("%d JPY\n", (int)jpy);
   return 0;
}


