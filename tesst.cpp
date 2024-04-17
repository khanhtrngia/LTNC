#include <bits/stdc++.h>

using namespace std;

int main()
{
    int *p = new int[3]; p[0]=1; p[1]=2; p[2]=4; int a=&p[2]-&p[1];
    cout << a;
}
