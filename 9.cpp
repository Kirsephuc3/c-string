//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
// #include<cstring>
// #include<string>
// using namespace std;
// int *ktr(char *s1,char*s2,int n1 , int n2)
// {
//     int *p =NULL;
//    for(int i = 0;i<=(n1-n2);i++)
//    {
//        if(!strncmp(s2,s1+i,n2))
//        {
//           p =&i;
//           break;
//        }
//    }  
//    return p;
// }
// int main ()
// {
//     char s1[100] , s2[100];
//     int n1 , n2;
//     cout << "Moi nhap va chuoi thu nhat : ";
//     cin.getline(s1,100);
//     n1 = strlen(s1);
//     cout << "Moi nhap va chuoi thu hai : ";
//     cin.getline(s2,100);
//     n2 = strlen(s2);
//     if(ktr(s1,s2,n1,n2))
//         cout << "Vi tri s2 xuat hien trong s1 o vi tri " <<  *ktr( s1,s2,n1,n2) << endl;
//     else
//         cout << "S2 khong o trong S1 " << endl;
//     return 0;
// }