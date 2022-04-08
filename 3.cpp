////#include <iostream>
////#include <string>
////using namespace std;
////int main() {
////	char S[51], * p; // khai bao con tro
////	int demCN = 0, demSp = 0;
////	cout << " Nhap chuoi: ";
////	cin.getline(S, 50); // geline(cin,S) // nhap dc khoang cach
////	p = S; // gan gia tri
////	while (*p) {
////		if (isalnum(*p)) // ham ki tu va so
////			demCN++; // dem dc tang len 1
////		if (isspace(*p)) // ham khoang trang enter tab
////			demSp++;// dem dc tang len 1
////		p++; // vd dh mo xet d xong ++ qua h ++ space ++ m ++ o
////	}
////	cout << " So ki tu va so la: " << demCN << endl;
////	cout << " So khoang trang la: " <<demSp<< endl;
////	return 0;
////}
// cach 2 oki            
//#include <iostream>
//using namespace std;
//int main() {
//	char S[51];
//	int demCN = 0, demSp = 0,d;
//	cout << "Nhap chuoi: ";
//	cin.getline(S, 50);
//	d = strlen(S);
//	for (int i = 0; i < d; i++) {
//		if (isalnum(S[i])) {
//			demCN++;
//		}
//		if (isspace(S[i])) {
//			demSp++;
//		}
//	}
//	cout << "So ki tu hoac chu so la: " << demCN << endl;
//	cout << " So khoang trang la: " << demSp << endl;
//	return 0;
//}
