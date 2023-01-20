#include <stdio.h> //CHECK THE LCM OF NUMBER

int lcm(int num1, int num2)
{
//Initialize the Variable
    int lcm;
//Checking the Greater Number
    if (num1 >= num2)
    {
        lcm = num1;
    }
    else
    {
        lcm = num2;
    }
//Using While loop for checking lcm
    while (1)
    {
        if (lcm % num1 == 0 && lcm % num2 == 0)
        {
            return lcm; // It returns the lcm
        }
        lcm++;
    }
}

int main() // It is calling function.
{
    int num1, num2;

    printf("Enter the two numbers\n");
    scanf("%d %d", &num1, &num2);

    int ans = lcm(num1, num2);

    printf("The LCM of %d and %d is %d\n", num1, num2, ans);

    return 0;
}