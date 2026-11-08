#include <stdio.h>

int main(void)
{
    int input;

    scanf("%d", &input);

    /* 0以上9以下はOK */
    /* 12以上14以下もOK */
    if ((input >= 0 && input < 10) ||
        (input >= 12 && input < 15))
    {
        printf("OK");
    }
    else
    {
        printf("NG");
    }

    return 0;
}