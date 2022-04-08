//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
// #include<cstring>
// #include<string>
// using namespace std;
// char doixung(char s1[100])
// {
//     int i;
//     for (i = 0; i < strlen(s1) / 2; i++) // cat chuoi lam 2
//     {
//         if (s1[i] != s1[strlen(s1) - 1 - i]) // do chuoi s[0] vs s[max o vi tri da cat] // neu no khac nhau thi no la chuoi  
//         {
//             return 0;
//         }
//     }
//     return 1;
// }
// int main()
// {
//     char s1[100];
//     cout << " Nhap chuoi: ";
//     cin.getline(s1, 100);
//     if (doixung(s1) == 0)
//     {
//         cout << "La chuoi palindrome !!!" << endl;
//     }
//     if (doixung(s1) == 1)
//     {
//         cout << " Khong phai la chuoi palindrome!!!" << endl;
//     }
//     system("pause");
//     return 0;
// }