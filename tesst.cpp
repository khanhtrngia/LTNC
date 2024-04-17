#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    int minnum=INT_MAX;
    for(int i=0; i<n; i++)
    {
        for(int y=0; y<n; y++)
        {
            if(y==i) continue;
            int d=abs(a[y]-a[i]);
            minnum=min(d, minnum);
        }
    }
    cout << minnum;
}
