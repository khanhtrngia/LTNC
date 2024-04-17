#include <bits/stdc++.h>

using namespace std;


void reversee(char* s)
{
    int l=strlen(s);
    for(int i=0; i< l/2; i++)
    {
        char temp= *(s+i);
        *(s+i)=*(s+l-1-i);
        *(s+l-1-i)=temp;
    }
}


int main()
{
    char* s="khanh";
    reversee(s);
    cout << s;
}
