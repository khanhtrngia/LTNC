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

string gan(const char s[])
{
    int l=strlenn(s);
    char ans[l];
    for(int i=0; s[i]!=NULL; i++)
    {
        ans[i]=s[i];
    }
    return ans;
}

void reversee(const char a[])
{
    int l=strlenn(a);
    string s= gan(a);
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



int main()
{
    const char s[]="khanh";
    string a=s;
    cout << a;
}
