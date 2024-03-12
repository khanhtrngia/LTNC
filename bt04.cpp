/*
1 iv
2 iv ii
3 ii
4 i
5 iv
6 iii
7 iii
8 iv
9 iv
10 i
11 iv
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
