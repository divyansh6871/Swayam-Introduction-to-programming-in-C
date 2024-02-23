#include <stdio.h>
int main()
{
    int n;
    int count1 = 0, count2 = 0;
    scanf("%d", &n);
    char s1[n];
    char s2[n];
    scanf("%s", s1);
    fflush(stdin);
    scanf("%s", s2);

    for (int i = 65; i < 91; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == s1[j])
            {
                count1++;
            }
        }
        for (int j = 0; j < n; j++)
        {
            if (i == s2[j])
            {
                count2++;
            }
        }
        if (count1 == count2)
        {
            continue;
        }
        else
        {
            printf("0");
            return 0;
        }
    }
    printf("1");

    return 0;
}
