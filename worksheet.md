
# Computer Science I 
## Lab 2.0 Worksheet

Name(s) and Login(s):



1. Dennis Ritchie, the creator of the C programming language,
was born on September 9th, 1941.  If he were still alive,
how old would he be today?  Find out by running the `birthday`
program on the appropriate inputs and enter your solution here.

ANSWER:
Enter the year in which you were born: 2000
Enter the month in which you were born (1-12): 9
Enter the day of the month in which you were born (1-31): 9
Today is 2023/10/19
Your birthday was 2000/09/09
Hello, Dennis.  You are 23 years, 5 weeks, and 4 days old today


2. Bjarne Stroustrup, the creator of the C++ programming
language, the object-oriented extension of C, was born on
December 30th, 1950.  How old is he today?

ANSWER:
Please Enter Your First Name (no spaces) followed by ENTER: BjarneStroustrup
Enter the year in which you were born: 2000
Enter the month in which you were born (1-12): 12
Enter the day of the month in which you were born (1-31): 30
Today is 2023/10/19
Your birthday was 2000/12/30
Hello, BjarneStroustrup.  You are 22 years, 41 weeks, and 6 days old today

3. Software testing often involves testing code with known
"bad" input in an attempt to break it (sometimes this is
referred to as *fuzzing*).  Try breaking the `birthday_cli`
program by giving it "bad" input and observe the consequences.
Give at least two examples of potentially bad input and the
results you observe.

Today is 2023/10/20
Your birthday was 1900/01/00
Hello, John. You are 123 years, 0 weeks, and 0 days old today.

PS D:\LABWORK\CSCE155-C-Lab02> .\a.exe John nonnumeric 1990 10 20
ERROR: invalid number of command line inputs
       Usage: birthday FIRSTNAME YEAR MONTH DAY

       


4. Complete all the size and range entries below.

* `char`
  size: 1 byte
  range: -128 to 127
* `short int`
  size: 2 bytes
  range:-32,768 to 32,767
* `int`
  size: 4 bytes
  range: -2,147,483,648 to 2,147,483,647 (signed) or 0 to 4,294,967,295 (unsigned)
* `long int`
  size: 4 or 8 bytes
  range:-2,147,483,648 to 2,147,483,647 (signed) or 0 to 4,294,967,295 (unsigned) for 4-byte.
* `float`
  size: 4 bytes
  range: 7 digits of accuracy
* `double`
  size: 8 bytes
  range: 15 digits of accuracy


5. Use your working currency conversion to determine
the exchange amounts for the following inputs:

  a) $250.25

Please input the total amount of US Dollars: 250.25
Fee (10%): $25.03
You get:
88.96 GBP
14374 JPY

  b) $1,000.52

Please input the total amount of US Dollars: 1000.52
Fee (10%): $100.05
You get:
355.68 GBP
57472 JPY

  c) $968,410.12

Please input the total amount of US Dollars: 968410.12
Fee (10%): $96841.01
You get:
344269.80 GBP
55627898 JPY


6. Suppose that you had used only `int` types
in your conversion program.  Would you be able
to use it to convert the US national debt
(which as of 2020 was \$26,009,754,625,487)?
Why or why not?

No, using only `int` types would not be sufficient to accurately convert the US national debt of $26,009,754,625,487 due to the large value exceeding the maximum representable integer value in most programming languages.


7. Mixed types

a) Run the `area` program with 3 and 4 as inputs.  
What value do you get?  Is this result correct?

The area is 0.000000 square units.
Result is not correct.

b) Execute the program again with inputs 3 and 5.
Does the program give correct results?  Why not?

The area is 0.000000 square units.
Result is still not correct because the code has some issue.
c) Fix the program by editing the `area.c` source
code so that the program produces correct results.

Fixed the program

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv) {

  double area, base, height;

  printf("Please enter the base of a triangle: ");

  scanf("%lf", &base);

  printf("Please enter the height of a triangle: ");

  scanf("%lf", &height);

  area = 0.5 * base * height;

  printf("The area is %f square units.\n", area);

  return 0;
}
