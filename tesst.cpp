#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n+1][n+1];
    for(int i=0; i<n+1;i++)
    {
        for(int y=0; y<n+1; y++)
        {
            a[i][y]=0;
        }
    }

    for(int i=1; i<=n; i++)
    {
        int x, y; cin >> x >> y;
        a[x][y]++;
    }
    int check=0;


    for(int i=1; i<n+1; i++)
    {
        int temp=0;
        for(int y=1; y<n+1; y++)
        {
            if(a[i][y]!=0) temp++;
        }
        if(temp>1) check++;
    }
    for(int y=1; y<n+1; y++)
    {
        int temp=0;
        for(int i=1; i<n+1; i++)
        {
            if(a[i][y]!=0) temp++;
        }
        if(temp>1) check++;
    }
    for(int y=1; y<n+1;y++)
    {
        int i=0;
        int j=y;
        int temp=0;
        for(int x=1; x<=y; x++)
        {
            if(a[i][j]!=0) temp++;
            i++;
            j--;
        }
        if(temp>1) check++;
    }
    for(int y=1; y<n+1;y++)
    {
        int i=n;
        int j=y;
        int temp=0;
        for(int x=1; x<=y; x++)
        {
            if(a[i][j]!=0) temp++;
            i--;
            j--;
        }
        if(temp>1) check++;
    }
    if(check>0) cout << "YES";
    if(check==0) cout << "NO";
}



//. 1 . .
//. . . 1
//1 . . .
//. . 1 .







