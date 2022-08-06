#include <string.h>
#include <stdio.h>

main()
{
    char m[100];
    int i;
    printf("Enter the string :");
    gets(m);
    printf("The string is :");
    puts(m);
    // get the single character
    for (i = 0; m[i] != '\0'; i++)
    {
        // condition
        if ((m[i] >= 'a' && m[i] <= 'z') || (m[i] >= 'A' && m[i] <= 'Z'))
        {
            if (m[i] >= 'a' && m[i] <= 'z')
            {
                m[i] = m[i] - 32;
            }
            else
            {
                m[i] = m[i] + 32;
            }
        }
    }
    printf("The expected result is: ");
    puts(m);
}
