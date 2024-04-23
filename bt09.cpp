/*
1.iii
2 iii
3 iii
4 iii
5 iii
6 iii

7 iii
8 iv
9 ii
10 iv
11 iii
12 iii
13 iii
*/


#include <bits/stdc++.h>

using namespace std;

int strlenn(const char s[])
{
    int ans=0;
    while(*(s+ans)!=NULL)
    {
        ans++;
    }
    return ans;
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

void reversee(const char a[])
{
    int l=strlenn(a);
    char s[l];
    for(int i=0; i<l; i++)
    {
        s[i]=a[i];
    }
    for(int i=0; i<l/2; i++)
    {
        char temp=s[i];
        s[i]=s[l-1-i];
        s[l-1-i]=temp;
    }
    cout << s << endl;
}

void delete_char(const char a[], char c)
{
    int l=strlenn(a);
    int j=0;
    char s[l];
    for(int i=0; i<l; i++)
    {
        if(a[i]!=c)
        {
            s[j++]=a[i];
        }
    }
    cout << s << endl;
}

void pad_right(const char a[], int n)
{
    int l=strlenn(a);
    if(l<n)
    {
        char s[n];
        for(int i=0; i<n; i++)
        {
            if(i<l)
            {
                s[i]=a[i];
            }
            if(i>=l)
            {
                s[i]=' ';
            }
        }
        s[n]=NULL;
        cout << s << ' ' << strlenn(s) << endl;
    }
}

void pad_left(const char a[], int n)
{
    int l=strlenn(a);
    if(l<n)
    {
        char s[n];
        int j=0;
        for(int i=0; i<n; i++)
        {
            if(i<n-l)
            {
                s[i]=' ';
            }
            if(i>=n-l)
            {
                s[i]=a[j++];
            }
        }
        s[n]=NULL;
        cout << s << ' ' << strlenn(s) << endl;
    }
}

void  truncate(const char a[], int n)
{
    int l=strlenn(a);
    if(n<l)
    {
        char s[n];
        for(int i=0; i<n; i++)
        {
            s[i]=a[i];
        }
        cout << s << ' ' << strlenn(s) << endl;
    }
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

void trim_left(const char a[])
{
    int j=0;
    while(*(a+j)==' ')
    {
        j++;
    }
    int l=strlenn(a);
    char s[l-j];
    for(int i=0; i<l-j; i++)
    {
        s[i]=a[i+j];
    }
    cout << s << ' ' << strlenn(s) << endl;
}

void trim_right(const char a[])
{
    int l=strlenn(a);
    char s[l];
    for(int i=0; i<l; i++)
    {
        s[i]=a[i];
    }
    reverse(s, s+l);
    int dem=0;
    while(s[dem]==' ')
    {
        dem++;
    }

    for(int i=0; i<(l-dem); i++)
    {
        s[i]=s[i+dem];
    }
    l-=dem;
    s[l]=NULL;
    reverse(s, s+l);
    cout << s << ' ' << strlenn(s) << endl;
}

int main()
{
//    const char s[]="khanh  ";
//    trim_right(s);
    const char s[]="khanh  ";
    trim_right(s);
}

