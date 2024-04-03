/*
1 iv
2 iv ii
3 ii
4 i
5 iv
6 iii
7 iii
8
9 iii
10 iv
11 iv
12 iii
13 iii
14 iii
15 i ii
16 iii
17 iv
18 iii
19 iv
20 iii
*/

////1
//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main()
//{
//    int n; cin >> n;
//    int a[n]={};
//
//    for(int i=0; i<n; i++)
//    {
//        int m; cin >> m;
//        a[m]++;
//    }
//
//
//    int sum=0;
//
//    for(int i=0; i<n; i++)
//    {
//        if(a[i]>1) {sum+=1;}
//    }
//    cout << ((sum>0)? "Yes" : "No");
//}



// //2
// #include <bits/stdc++.h>
//
// using namespace std;
//
// int main()
// {
//     string s; cin >> s;
//     int l=s.length();
//     int check=0;
//     for(int i=0; i<l/2 ; i++)
//     {
//         if(s[i] != s[l-i-1]) check++;
//     }
//     cout << ((check==0)? "Yes" : "No");
// }







////3
//#include <bits/stdc++.h>
//
//using namespace std;
//
//bool check(int a)
//{
//    string s=to_string(a);
//    int l=s.length();
//    if(l<2) {return 1;}
//    if(l>=2)
//    {
//        for(int x=0; x<l/2; x++)
//        {
//            if(s[x] != s[l-x-1]) return 0;
//        }
//    }
//    return 1;
//}
//
//int main()
//{
//    int t; cin >> t;
//
//    for(int i=0; i<t; i++)
//    {
//        int a,b; cin >> a >> b;
//        int tong=0;
//        for(int y=a; y<b; y++)
//        {
//            if(check(y)) tong++;
//        }
//        cout << tong << endl;
//    }
//}





//4
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




////6
//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main()
//{
//    int n;
//    do
//    {
//        cout << "nhap vao so le :" << endl;
//        cin >> n;
//    }
//    while(n%2==0);
//
//    int a[n][n];
//    for(int i=0; i<n; i++)
//    {
//        for(int y=0; y<n; y++)
//        {
//            a[i][y]=0;
//        }
//    }
//
//    int x=0;
//    int y=n/2;
//    int gt=1;
//
//
//    for(int i=1; i<=(n*n); i++)
//    {
//        if(a[x][y]==0)
//        {
//            a[x][y]=gt++;
//            x--; y++;
//
//            if(x==-1 && y<n)
//            {
//                x=n-1;
//            }
//            if(y==n && x>=0)
//            {
//                y=0;
//            }
//            if(y==n && x==-1)
//            {
//                x+=2;
//                y-=1;
//            }
//            continue;
//        }
//        if(a[x][y]!=0)
//        {
//            x+=2; y-=1;
//            a[x][y]=gt++;
//            x--; y++;
//
//            if(x==-1 && y<n)
//            {
//                x=n-1;
//            }
//            if(y==n && x>=0)
//            {
//                y=0;
//            }
//            if(y==n && x==-1)
//            {
//                x+=2;
//                y-=1;
//            }
//        }
//    }
//    //in ra màn hình
//    for(int i=0; i<n; i++)
//    {
//        for(int y=0; y<n ; y++)
//        {
//            cout << a[i][y] << ' ';
//        }
//        cout << endl;
//    }
//}



////8
//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main()
//{
//    int N; cin >> N;
//    int a[N];
//    for(int i=0; i< N; i++)
//    {
//        cin >> a[i];
//    }
//
//    int b[N];
//    b[0]=1;
//    for(int i=1; i<N; i++)
//    {
//        b[i]=b[i-1]+1;
//    }
//
//    for(int i=N; i>0; --i)
//  {
//      for(int y=0; y<i-1; y++)
//      {
//          if(a[y]>a[y+1])
//          {
//              swap(a[y], a[y+1]);
//              swap(b[y], b[y+1]);
//          }
//      }
//  }
//
//
//    int tong=0;
//    for(int i=0; i< N-1; i++)
//    {
//        tong +=a[i];
//    }
//    cout << tong << endl;
//    for(int i=0; i< N; i++)
//    {
//        cout << b[i] << ' ';
//    }
//}

////bai 1
//#include <bits/stdc++.h>
//
//using namespace std;
//
//double trungbinh(double a[], int n)
//{
//    double sum=0;
//    for(int i=0; i<n; i++)
//    {
//        sum+=a[i];
//    }
//    sum/=n;
//    return sum;
//}
//
//double phuongsai(double a[], int n)
//{
//    double sum=0;
//    double p= trungbinh(a, n);
//    for(int i=0; i<n; i++)
//    {
//        double b=a[i]-p;
//        sum = sum + pow(b, 2);
//    }
//    sum/=n;
//    return sum;
//}
//
//int main()
//{
//    int n;
//    cin >> n;
//    double a[n];
//    for(int i=0; i<n; i++)
//    {
//        cin >> a[i];
//    }
//    double gttb= trungbinh(a, n);
//    double gtps= phuongsai(a, n);
//    cout << gttb << ' ' << gtps;
//    return 0;
//}

////bai 2
//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main()
//{
//    int minum = INT_MAX;
//    int maxnum = INT_MIN;
//    int tongchan = 0;
//    int sole = 0;
//    int n; cin >> n;
//    while(n>0)
//    {
//        int i; cin >> i;
//        minum = min(minum, i);
//        maxnum = max(maxnum, i);
//        if(i%2==0){tongchan+=i;}
//        if(i%2!=0){sole++;}
//        n--;
//    }
//    cout << minum << ' ' << maxnum << ' ' << tongchan << ' ' << sole << endl;
//    return 0;
//}


////bai 3
//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main()
//{
//    int n; cin >> n;
//    int a[10]={};
//    while(n>0)
//    {
//        int k; cin >> k;
//        a[k]++;
//        n--;
//    }
//    for(int i=0; i<10; i++)
//    {
//        cout << "so " << i << " xuat hien : " << a[i] << " lan" << endl;
//    }
//    return 0;
//}


////bai 4
//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//    int n; cin >> n;
//    int a[n][n+2];
//    for(int i=0; i<n; i++)
//    {
//        for(int y=0; y< n+2; y++)
//        {
//            a[i][y]=0;
//        }
//    }
//    a[0][1]=1;
//    a[1][1]=1;
//    a[1][2]=1;
//    for(int i=2; i<n; i++)
//    {
//        for(int y=1; y<n+1; y++)
//        {
//            a[i][y]=a[i-1][y-1] + a[i-1][y];
//        }
//    }
//    for(int i=0; i<n; i++)
//    {
//        int space=n-i;
//        for(int i=0; i<space; i++)
//        {
//            cout << ' ';
//        }
//        for(int y=1; y<n+1; y++)
//        {
//            if(a[i][y]!=0) cout << a[i][y] << ' ';
//        }
//        cout << endl;
//    }
//
//    return 0;
//}

////bài 5
//#include <bits/stdc++.h>
//
//using namespace std;
//
//struct SinhVien
//{
//    double diem_toan, diem_ly, diem_anh, diem_trung_binh;
//    int stt;
//};
//
//void nhapdiem(SinhVien &a)
//{
//    cout << "diem toan "; cin >> a.diem_toan;
//    cout << "diem ly ";   cin >> a.diem_ly;
//    cout << "diem anh ";  cin >> a.diem_anh;
//    a.diem_trung_binh = (a.diem_anh + a.diem_ly + a.diem_toan)/3;
//}
//
//bool sapxepdiemtoan( SinhVien &a, SinhVien &b)
//{
//    return a.diem_toan>b.diem_toan;
//}
//bool sapxepdiemly(SinhVien &a, SinhVien &b)
//{
//    return a.diem_ly>b.diem_ly;
//}
//bool sapxepdiemanh(SinhVien &a, SinhVien &b)
//{
//    return a.diem_anh>b.diem_anh;
//}
//bool sapxepdiemtb(SinhVien &a, SinhVien &b)
//{
//    return a.diem_trung_binh>b.diem_trung_binh;
//}
//
//
//int main()
//{
//    cout << "nhap so luong sinh vien ";
//    int n; cin >> n;
//    vector<SinhVien> sinhvien(n);
//    for(int i=1; i<=n; i++)
//    {
//        sinhvien[i-1].stt = i;
//        cout << endl << "sinh vien " << i << ':' << endl;
//        nhapdiem(sinhvien[i-1]);
//        cout << endl;
//    }
//
//    cout << "Theo diem toan :" << endl;
//    sort(sinhvien.begin(), sinhvien.end(), sapxepdiemtoan);
//    for(int i=1; i<=n; i++)
//    {
//        cout << "sinh vien " << sinhvien[i-1].stt << ':';
//        cout << "diem toan :" << sinhvien[i-1].diem_toan << endl
//             << "diem ly :"   << sinhvien[i-1].diem_ly << endl
//             << "diem anh :"  << sinhvien[i-1].diem_anh << endl
//             << "diem trung binh :" << sinhvien[i-1].diem_trung_binh << endl << endl;
//    }
//
//    cout << "Theo diem ly :" << endl;
//    sort(sinhvien.begin(), sinhvien.end(), sapxepdiemly);
//    for(int i=1; i<=n; i++)
//    {
//        cout << "sinh vien " << sinhvien[i-1].stt << ':';
//        cout << "diem toan :" << sinhvien[i-1].diem_toan << endl
//             << "diem ly :"   << sinhvien[i-1].diem_ly << endl
//             << "diem anh :"  << sinhvien[i-1].diem_anh << endl
//             << "diem trung binh :" << sinhvien[i-1].diem_trung_binh << endl << endl;
//    }
//
//    cout << "Theo diem anh :" << endl;
//    sort(sinhvien.begin(), sinhvien.end(), sapxepdiemanh);
//    for(int i=1; i<=n; i++)
//    {
//        cout << "sinh vien " << sinhvien[i-1].stt << ':';
//        cout << "diem toan :" << sinhvien[i-1].diem_toan << endl
//             << "diem ly :"   << sinhvien[i-1].diem_ly << endl
//             << "diem anh :"  << sinhvien[i-1].diem_anh << endl
//             << "diem trung binh :" << sinhvien[i-1].diem_trung_binh << endl << endl;
//    }
//
//    cout << "Theo diem trung binh :" << endl;
//    sort(sinhvien.begin(), sinhvien.end(), sapxepdiemtb);
//    for(int i=1; i<=n; i++)
//    {
//        cout << "sinh vien " << sinhvien[i-1].stt << ':';
//        cout << "diem toan :" << sinhvien[i-1].diem_toan << endl
//             << "diem ly :"   << sinhvien[i-1].diem_ly << endl
//             << "diem anh :"  << sinhvien[i-1].diem_anh << endl
//             << "diem trung binh :" << sinhvien[i-1].diem_trung_binh << endl << endl;
//    }
//
//}

















