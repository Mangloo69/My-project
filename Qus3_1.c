 #include <stdio.h>
int main()

/* WAP to determine and print the sum of the following harmonic series for a given value of n:
        1 + 1/2 + 1/3 + ..... + 1/n
*/
{
    int n;
    printf("Enter the value of n: ");
        scanf("%d", &n);
    float i, sum = 0;

    for (i = 1; i <= n; i++)
    {
        sum = sum + (float)(1 / i);
    }
    printf("The sum of harmonic series to 'n' th term is : %f", sum);

    return 0;
}