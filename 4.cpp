#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
#include<string>
using namespace std;
void tachandnoi(char* s, int n)
{
    int i;
    i = 0;
    while (s[i] != ',')
        i++;
    for (int j = i; j < n - 1; j++)
    {
        s[j] = s[j + 1];
    }
    n--;
    s[n] = '\0';
    //    char *p = strtok(s," ");
    //    while(p!=NULL)
    //    {
    //        cout << p << endl;
    //         strcat(kq,p);
    //        strcat(kq," ");
    //        p = strtok(NULL," ");
    //    }
    cout << "Kq = " << s << endl;

}
int main()
{

    char s[100], kq[100];
    int n;
    cout << "Nhap vao ho va ten : ";
    cin.getline(s, 100);
    n = strlen(s);
    tachandnoi(s, n);
    return 0;
}
// // loi tren visual studio
//#define _CRT_SECURE_NO_WARNINGS
// #include<iostream>
// #include<cstring>
// #include<string>
// #include <windows.h>
// using namespace std;
// void tachandnoi(char *s)
// {
//     char kq[100];
//     int n = strlen(s);
//    char *p = strtok(s," ");
//    while(p!=NULL)
//    {
//        cout << p << endl;
//         strcat(kq,p);
//        strcat(kq," ");
//        p = strtok(NULL," ");
//    }
//    cout << "Kq = " << kq << endl;
// }
// int main ()
// {
//     char s[100],kq[100];
//     cout << "Nhap vao ho va ten : ";
//     cin.getline(s,100);
//     tachandnoi(s);
//     return 0;
// }