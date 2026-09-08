#include <stdio.h>

// NANR - No Argument, No Return value
void NANR()
{
    printf("Hello from NANR function\n");
}

// ANR - Argument, No Return value
void ANR(int a, int b)
{
    printf("Sum = %d\n", a + b);
}

// NAWR - No Argument, With Return value
int NAWR()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    return a + b;
}

// AWR - Argument, With Return value
int AWR(int a, int b)
{
    return a + b;
}

int main()
{
    int result;

    // Calling NANR
    NANR();

    // Calling ANR
    ANR(10, 20);

    // Calling NAWR
    result = NAWR();
    printf("Sum = %d\n", result);

    // Calling AWR
    result = AWR(30, 40);
    printf("Sum = %d\n", result);

    return 0;
}
