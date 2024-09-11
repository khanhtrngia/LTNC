#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, n;
    int check=0;
    for(int i=1; i<=(int)sqrt(x); i++)
    {
        if(pow(i ,n)==x) check++;
    }

    return 0;
}
