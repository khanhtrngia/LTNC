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

void pad_left(char s[], int n)
{
    int l= strlenn(s);
    if(l<n)
    {
        reversee(s);
        for(int i=l; i<n; i++)
        {
            s[i]=' ';
        }
    }
    s[n]=NULL;
    reversee(s);
}

bool is_palindromee(char s[])
{
    bool b=1;
    int l = strlenn(s);
    for(int i=0; i<l/2; i++)
    {
        if(s[i]!=s[l-1-i])
        {
            b=0;
        }
    }
    return b;
}

void trim_left(char s[])
{
    int l=strlenn(s);
    int dem=0;
    while(s[dem]==' ')
    {
        dem++;
    }

    for(int i=0; i<(l-dem); i++)
    {
        s[i]=s[i+dem];
    }
    s[l-dem]=NULL;
}

trim_right(char s[])
{
    reversee(s);
    int l=strlenn(s);
    int dem=0;
    while(s[dem]==' ')
    {
        dem++;
    }

    for(int i=0; i<(l-dem); i++)
    {
        s[i]=s[i+dem];
    }
    s[l-dem]=NULL;
    reversee(s);
}

int main()
{
    char s[]="khanh  ";
    trim_right(s);
    cout << s << ' '<< strlenn(s);
}
