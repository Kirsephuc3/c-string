// #define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<cstring>
//#include<string>
//using namespace std;
//void caua(char* a){
//	while (a[0] == ' ') {
//		strcpy(&a[0], &a[1]);
//	}
//	while (a[strlen(a) - 1] == ' ') {
//		strcpy(&a[0], &a[1]);
//	}   
//	cout << " Chuoi sau khi xoa khoang trang la: " << a << endl;
//}
//void caub(char* a) {
//	int temp = 0;
//	for (int i = 0; i < strlen(a); i++) {
//		if (isspace(a[i])) {
//			temp++;
//		}
//	}
//	cout << " So khoang trang trong chuoi la: " << temp << endl;
//}
//void cauc(char* a) {
//	int temp = 0;
//	for (int i = 0; i < strlen(a); i++) {
//		if (isalnum(a[i]))
//		temp++;
//	}
//	cout << "So ky tu chu hoac so: " << temp << endl;
//}
//void caud(char* a) {
//	int temp = 0;
//	for (int i = 0; i < strlen(a); i++) {
//		if (isupper(a[i]))
//			temp++;
//	}
//	cout << "So ki tu in hoa:" << temp << endl;
//}
//void caue(char* a) {
//	int temp = 0;
//	for (int i = 0; i < strlen(a); i++) {
//		if (islower(a[i]));
//		temp++;
//	}
//	cout << " So ki tu thuong: " << temp << endl;
//}
//void cauf(char* a) {
//	for (int i = 0; i < strlen(a); i++) {
//			a[i] = toupper(a[i]);
//	}
//	cout << " Chuoi ki tu in hoa la: " << a << endl;
//}
//void caug(char* a) {
//	for (int i = 0; i < strlen(a); i++) {
//		a[i] = tolower(a[i]);
//	}
//	cout << " Chuoi ki tu in thuong la: " << a << endl;
//}
//void cauh(char* a) {
//	a[0] = toupper(a[0]); // gan gia tri dau = in hoaS
//	for (int i = 0; i < strlen(a); i++) {
//		if (a[i] == ' ') { // neu co khoang trang
//			a[i + 1] = toupper(a[i + 1]); // gan thanh in Hoa
//		}
//	}
//	cout << " In hoa moi ki tu dau: " << a << endl;
//}
//void caui(char *a)
//{
//	int word = (a[0] != ' ');
//	for (int i = 0; i < strlen(a-1); i++)
//	{
//		if (a[i] == ' ' && a[i + 1] != ' ')
//		{
//			word++;
//		}
//	}
//	cout << "So tu trong chuoi la: " << word << endl;
//}
//int main() {
//	char a[30];
//	cout << " Nhap chuoi ki tu: ";
//	cin.getline(a, 30);
//	caua(a);
//	caub(a);
//	cauc(a);
//	caud(a);
//	cauf(a);
//	caug(a);
//	cauh(a);
//	caui(a);
//	system("pause");
//	return 0;
//}