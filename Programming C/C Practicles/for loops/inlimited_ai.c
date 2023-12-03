#include <stdio.h>

int main()
{
    char message[] = "ඇයි";
    int length = sizeof(message) - 1;

    for (int i = 0; i < length; i++)
    {
        printf("%c", message[i]);
    }
    printf("\n");

    return 0;
}

