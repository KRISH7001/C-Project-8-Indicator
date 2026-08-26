#include <stdio.h>

int findLength(char *str)
{
    int length = 0;

    while (*str != '\0')
    {
        length++;
        str++;
    }

    return length;
}

int main()
{
    char str[100];
    int length;

    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character
    char *ptr = str;
    while (*ptr != '\0')
    {
        if (*ptr == '\n')
        {
            *ptr = '\0';
            break;
        }
        ptr++;
    }

    length = findLength(str);

    printf("The length of a string is: %d\n", length);

    return 0;
}