#include <stdio.h>
int main()
{
int integer = 9876;
float decimal = 987.6543;
printf("4 digit integer right justified to 6 column: %6d\n", integer);
printf("4 digit integer right justified to 3 column: %3d\n", integer);
printf("Floating point number rounded to 2 digits: %.2f\n",decimal);
 printf("Floating point number rounded to 0 digits: %.f\n",987.6543);
 printf("Floating point number in exponential form: %e\n",987.6543);
 return 0;
 getch();
}   
