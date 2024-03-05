/*
1 iv
2 ii
3 ii
4 i
5 iii
6 iii
7 iii
8 iv
9 iii
10i
11 iii
12 iii
13 iii
14 iii
15 i
16 iii
17 i
18 iii
19 iv
20 i
*/


////1
//#include <bits/stdc++.h>
//
//using namespace std;
// int main()
// {
//     int n; cin >> n;
//     int b[n+1];
//     for(int i=0; i<n+1; i++)
//     {
//         b[i]=0;
//     }
//     int check=0;
//     for(int i=0; i<n; i++)
//     {
//         int k;
//         cin >> k;
//         b[k]+=1;
//         if(b[k]>1) check++;
//     }
//     cout << ((check==0)?"yes":"no");
// }







////2
//#include <bits/stdc++.h>
//
//using namespace std;
//int main()
//{
//    string s; cin >> s;
//    int l= s.size();
//    int check=0;
//    for(int i=0; i<l/2; i++)
//    {
//        if(s[i]!=s[l-i-1]) check++;
//    }
//    cout << ((check==0)? "Yes" : "No");
//}


////3
//#include <bits/stdc++.h>
//
//using namespace std;
//int main()
//{
//    int t; cin >> t;
//    while(t>0)
//    {
//        int a, b; cin >> a >> b;
//        int sum=0;
//        for(int i=a; i<=b; i++)
//        {
//            string s= to_string(i);
//            int check=0, l=s.size();
//            for(int y=0; y<l/2; y++)
//            {
//                if(s[y]!=s[l-1-y]) check++;
//            }
//
//            if(check==0) {sum++;}
//        }
//        cout << sum;
//        cout << endl;
//    }
//    return 0;
//}







////4
//#include <bits/stdc++.h>
//
//using namespace std;
//int main()
//{
//    int m, n; cin >> m >> n;
//    char a[m+2][n+2];
//
//    for(int i=0; i<m+2; i++)
//    {
//        for(int y=0; y<n+2; y++)
//        {
//            a[i][y]='0';
//        }
//    }
//
//    for(int i=1; i<m+1; i++)
//    {
//        for(int y=1; y<n+1; y++)
//        {
//            char c;
//            cin >> c;
//            a[i][y]=c;
//        }
//    }
//
//
//    for(int i=1; i<m+1; i++)
//    {
//        for(int y=1; y<n+1; y++)
//        {
//            if(a[i][y]=='*'){continue;}
//
//            int k=0;
//            for(int z=i-1; z<=i+1; z++)
//            {
//
//                for(int x=y-1; x<=y+1; x++)
//                {
//                    if(x==y && z==i) continue;
//                    if(a[z][x]=='*') k++;
//                }
//            }
//
//            char s=k+'0';
//            a[i][y]=s;
//        }
//    }
//
//
//    for(int i=1; i<m+1; i++)
//    {
//        for(int y=1; y<n+1; y++)
//        {
//            cout << a[i][y] << ' ';
//        }
//        cout << endl;
//    }
//}

////5
//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main()
//{
//   int m, n;  cin >> m >> n;
//   int a[m][n];
//   int gt=1;
//   int sm=0, sn=0;
//   int em=m-1, en=n-1;
//   while(em>=sm && en>=sn)
//   {
//       for(int i=sn; i<=en; i++)
//       {
//           a[sm][i]=gt++;
//       }
//       sm++;
//
//       for(int i=sm; i<=em; i++)
//       {
//           a[i][en]=gt++;
//       }
//       en--;
//       if(sm<=em)
//       {
//       for(int i=en; i>=sn; i--)
//       {
//           a[em][i]=gt++;
//       }
//       em--;
//       }
//
//       if(sn<=en)
//       {
//       for(int i=em; i>=sm; i--)
//       {
//           a[i][sn]=gt++;
//       }
//       sn++;
//       }
//   }
//
//
//   for(int i=0; i<m; i++)
//   {
//       for(int y=0; y<n; y++)
//       {
//           cout << a[i][y] << " ";
//       }
//       cout << endl;
//   }
//   return 0;
//}



































