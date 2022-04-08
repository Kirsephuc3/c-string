////#define _CRT_SECURE_NO_WARNINGS
////#include<iostream>
////#include<cstring>
////
////using namespace std;
////int main() {
////	char s[20];
////	cout << " Nhap ho va ten: ";
////	cin.getline(s, 20);
////	char* p = strtok(s, " "); // gan con cho 
////	while (p != NULL) { // p khac 0
////		cout << p << endl; // in trc kc 
////		p = strtok(NULL, " ");
////	}
////	return 0;
////}
//// cach 2
//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<cstring>
//#include<string>
//using namespace std;
//void tach(char* a)
//{
//    char* p = strtok(a, " ");
//    while (p != NULL)
//    {
//        cout << p << endl;
//        p = strtok(NULL, " ");
//    }
//}
//int main()
//{
//    char a[20];
//    cout << "Nhap ho va ten: ";
//    cin.getline(a, 20);
//    cout << "Ho ten lot va ten duoc tach la: " << endl;
//    tach(a);
//    return 0;
//}