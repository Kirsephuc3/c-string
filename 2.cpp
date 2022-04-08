//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<cstring>
//using namespace std;
//void sosanh(char *s1, char *s2) {
//	//cout << " Nhap chuoi thu nhat: ";
//	//cin.getline(s1, 20);
//	//cout << " Nhap chuoi thu hai: ";
//	//cin.getline(s2, 20);
//	if (strcmp(s1, s2) == 0) {
//		cout << " Hai chuoi bang nhau !!!" << endl;
//	}
//	else
//		if (strcmp(s1, s2) < 0) {
//			cout << " Chuoi 1 nho hon chuoi 2 !!" << endl;
//		}
//		else
//			cout << " Chuoi 1 lon hon chuoi 2 !!" << endl;
//}
//void inhoa(char* s) {
//	int n;
//	n = strlen(s);
//	s[0] = toupper(s[0]);
//	for (int i = 0; i < n; i++) {
//		if (s[i] == ' '){
//		s[i + 1] = toupper(s[i + 1]);
//	}
//	else
//	s[i + 1] = tolower(s[i + 1]);
//	}
//	cout << " Chuoi sau khi duoc in hoa la:" << s << endl;
//}
//// c2 #include<iostream>
////#include <string >
////using namespace std;
////int main() {
////	char S[51]; // 50 phan tu
////	int n;
////	cout << " Nhap chuoi: ";
////	cin.getline(S, 50);
////	n = strlen(S); // gan n = chieu dai
////	S[0] = toupper(S[0]); // gan gia tri dau = in hoa
////	for (int i = 0; i < n; i++) {
////		if (S[i] == ' ') { // neu co khoang trang
////			S[i + 1] = toupper(S[i + 1]); // gan thanh in Hoa
////		}
////		else
////			S[i + 1] = tolower(S[i + 1]); // ko có khoang trang enter tab ghi thuong
////	}
////	cout << " Chuoi ket qua: " << S << endl;
////	return 0;
////}
//void noi(char* s1, char* s2) {
//	strcat(s1, s2);
//	cout << s1 << endl;
//}
//int main() {
//	char s1[20];
//	char s2[20];
//	cout << " Nhap chuoi thu nhat: ";
//	cin.getline(s1, 20);
//	cout << " Nhap chuoi thu hai: ";
//	cin.getline(s2, 20);
//	sosanh(s1, s2);
//	//cout << "Chuoi thu nhat sau khi duoc in hoa la: " << endl;
//	inhoa(s1);
//	//cout << " Chuoi thu hai sau khi duoc in hoa la: " << endl;
//	inhoa(s2);
//	cout << " Noi hai chuoi lai voi nhau: ";
//	noi(s1, s2);
//	return 0;
//}
// c2