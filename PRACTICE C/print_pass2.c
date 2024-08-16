#include <stdio.h>

void main()
{
    char pass[8];
    int i, j, k, l, m, n, o, p;
    for (i = 33; i <= 126; i++)
    {
        pass[0] = i;
        for (j = 33; j <= 126; j++)
        {
            pass[1] = j;
            for (k = 33; k <= 126; k++)
            {
                pass[2] = k;
                for (l = 33; l <= 126; l++)
                {
                    pass[3] = l;
                    for (m = 33; m <= 126; m++)
                    {
                        pass[4] = m;
                        for (n = 33; n <= 126; n++)
                        {
                            pass[5] = n;
                            for (o = 33; o <= 126; o++)
                            {
                                pass[6] = o;
                                for (p = 33; p <= 126; p++)
                                {
                                    pass[7] = p;
                                    printf("%s\n", pass);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}