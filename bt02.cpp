////1
//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main()
//{
//    bool b=1;
//    int a; cin >> a;
//    for(int i=2.0; i<=a/2; i++)
//
//    {
//        if(a%i==0) b=0;
//    }
//    cout << ((b)?"yes" : "no");
//}
//
//
////2
//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main()
//{
//    int n; cin >> n;
//    for(int i=0; i<n; i++)
//    {
//        for(int y=0; y<i; y++)
//        {
//            cout << ' ';
//        }
//        for(int y=0; y<n-i; y++)
//        {
//            cout << '*';
//        }
//        cout << endl;
//    }
//}
//
//
//
////3
//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main()
//{
//    int n; cin >> n;
//    for(int i=1; i<=n; i++)
//    {
//        for(int y=1; y<=n-i; y++)
//        {
//            cout << ' ';
//        }
//        for(int y=n-i+1; y<=n+i-1; y++)
//        {
//            cout << '*';
//        }
//        cout << endl;
//    }
//}
//
//
////4
//#include <bits/stdc++.h>
//
//using namespace std;
//int main()
//{
//    int n; cin >> n;
//    for(int i=1; i<=n; i++)
//    {
//        for(int y=1; y<i; y++)
//        {
//            cout << ' ';
//        }
//        for(int y=i; y<=n+n-i; y++)
//        {
//            cout << '*';
//        }
//
//        cout << endl;
//    }
//}



////6
//#include <bits/stdc++.h>
//
//using namespace std;
//int main()
//{
//    int n; cin >> n;
//    int a[n][n];
//    a[0][0]=1;
//    for(int i=1; i<n; i++)
//    {
//        a[0][i]=a[0][i-1]+1;
//    }
//
//    for(int i=1; i<n; i++)
//    {
//        a[i][n-1]=a[i-1][0];
//        for(int y=0; y<n-1; y++)
//        {
//            a[i][y]=a[i-1][y+1];
//        }
//    }
//
//    for(int i=0; i<n; i++)
//    {
//        for(int y=0; y<n; y++)
//        {
//            cout << a[i][y] << ' ';
//        }
//        cout << endl;
//    }
//}


////7
//#include <iostream>
//
//using namespace std;
//int main()
//{
//    int a, k=-1;
//    cin >> a;
//    while(a>=0)
//    {
//        if(a!=k) {cout << a << ' ';}
//        k=a;
//        cin >> a;
//    }
//}

// chuthich



