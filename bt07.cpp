/*
7d
8a
9c
10b
11cO
12b
13d
14d
15b
16b
17a
18a
19b
20c
21b
22c
23c
24a
25a
26d
*/


////5
//#include <bits/stdc++.h>
//
//using namespace std;
//
//bool check_songuyento(int n)
//{
//    for(int i=2; i<=n/2; i++)
//    {
//        if(n%i==0) return 0;
//    }
//    return 1;
//}
//
//void print_songuyento(int n)
//{
//    for(int i=1; i<n; i++)
//    {
//        if(check_songuyento(i)==1) cout << i << ' ';
//    }
//}
//int main()
//{
//    int n; cin >> n;
//    cout << boolalpha << check_songuyento(n) << endl;
//    print_songuyento(n);
//}



////6
//#include <bits/stdc++.h>
//
//using namespace std;
//
//int gdb(unsigned int a, unsigned int b)
//{
//    if(a<b) swap(a, b);
//    if(b==0)
//    {
//        return a;
//    }
//    if(b!=0)
//    {
//        int temp=b;
//        b=a%b;
//        a=temp;
//        gdb(a, b);
//    }
//}
//
//int main()
//{
//   int a,b; cin >> a >> b;
//   cout << "uoc chung lon nhat cua 2 so a va b la: " << gdb(a, b) << endl;
//   if(gdb(a,b)==1) {cout << "2 so a & b la nguyen to cung nhau" << endl;}
//   else {cout << "2 so a & b khong la nguyen to cung nhau" << endl;}
//   return 0;
//}



////7
//#include <bits/stdc++.h>
//
//using namespace std;
//
//void space()
//{
//    cout << ' ';
//}
//
//void star()
//{
//    cout << '*';
//}
//
//
//int main()
//{
//    int x; cin >> x;
//    for(int i=0; i<x; i++)
//    {
//        for(int y=0; y< x-i-1; y++)
//        {
//            space();
//        }
//        for(int y=0; y<2*i+1; y++)
//        {
//            star();
//        }
//        cout << endl;
//    }
//    return 0;
//}


//
//#include<bits/stdc++.h>
//
//using namespace std;
//
//void lamtron1(double x)
//{
//    double y=x*10;
//    double du=((int)y%10);
//    if(du>0 && du<5){x=floor(x);}
//    if(du>4 && du<10){x=ceil(x);}
//    cout << x << endl;
//}
//
//void lamtron2(double x)
//{
//    double y=x*10;
//    int a=(int)x;
//    double du=((int)y%10);
//    if(du>0 && du<5){x=a;}
//    if(du>4 && du<10){x=a+1;}
//    cout << x << endl;
//}
//
//int main()
//{
//    double x; cin >> x;
//    lamtron1(x);
//    lamtron2(x);
//    return 0;
//}







////9
//#include <bits/stdc++.h>
//#include<ctime>
//#include <random>
//
//using namespace std;
//
//void random(int n)
//{
//        srand(time(0));
//        int i=rand() % n;
//        cout << i;
//}
//
//int main()
//{
//    int n; cin >> n;
//    random(n);
//    return 0;
//}





















