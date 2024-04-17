#include <bits/stdc++.h>

using namespace std;

int strlenn(char* s)
{
    int dem=0;
    while(*s != NULL)
    {
        dem++;
        *s++;
    }
    return dem;
}

void strcpyy(char* s1, const char* s2)
{
    while(*s2 != NULL)
    {
        *s1=*s2;
        *s1++;
        *s2++;
    }
}

void reversee(char* s)
{
    int l=strlenn(s);
    for(int i=0; i< l/2; i++)
    {
        char temp= *(s+i);
        *(s+i)=*(s+l-1-i);
        *(s+l-1-i)=temp;
    }
}

void delete_char(char a[], char c)
{
    int j=0;
    int l=strlenn(a);
    for(int i=0; i<l ;i++)
    {
        if(a[i]!=c)
        {
            a[j++]=a[i];
        }
    }
    a[j]=NULL;
}

void pad_right(char s[], int n)
{
    int l=strlenn(s);
    if(l<n)
    {
        for(int i=l; i<n; i++)
        {
            s[i]= ' ';
        }
    }
    s[n]=NULL;
}

int main()
{
    char s[]="khanh";
    pad_right(s, 10);
    cout << strlen(s);
}
