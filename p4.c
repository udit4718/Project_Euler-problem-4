#include<stdio.h>
void main()
{    long value=0;
    int remainder, i, j;
    for(i=999; i>99; i--)
    {
        for(j=i; j>99; j--)
        {
            long rev_n=0;
            long n=i*j;
            long org_n=n;
            while(n!=0)
            {
                remainder=n%10;
                rev_n=rev_n*10+remainder;
                n=n/10;
            }
            if(org_n==rev_n&&org_n>value)
            {
              value=org_n;
             }


        }
    }
    printf("%li",value);
}


