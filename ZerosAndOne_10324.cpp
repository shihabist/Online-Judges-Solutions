#include<bits/stdc++.h>
using namespace std;

char Array[1000050];


int main()
{
    int kases = 1, TC;
    while(gets(Array))
        {
            int len = strlen(Array);
            if ( len==0 ) break;
        scanf("%d", &TC);
        printf("Case %d:\n", kases++);
    while(TC--)
    {
        int i, j, p;
        scanf("%d%d", &i, &j);
        bool GO;
        int I = min(i,j);
        int J = max(i,j);
        if ( I==J ) { GO = true; }
        else {
        if ( Array[I]=='0' )
        {for( p = I; p<=J; p++)
        {
            if ( Array[p]=='0' )
            {GO = true;}
            else {GO = false; break;}

        }


        }
        else
            {for( p = I; p<=J; p++)
                {
                    if ( Array[p]=='1' )
                        {GO = true;}
                    else {GO = false; break;}

                        }


                            }
        }
            if ( GO == true )  printf("Yes\n");
            else   printf("No\n");

    }
getchar();

        }


return 0;

}
