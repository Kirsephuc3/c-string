//#include<iostream>
//#include<string>
//// string c-string chiu
//using namespace std;
//
//string ho(string name) {
//	string tam;
//	int temp = name.length();
//	for (int i = 0; i < temp; i++) {
//		if (name[i] == ' ') {
//			tam = name.substr(0, i);
//			break;
//		}
//	}
//	return tam;
//}
//
//string ten(string name) {
//	string tam;
//	int temp = name.length();
//	for (int i = temp; i > 0; i--) {
//		if (name[i] == ' ') {
//			tam = name.substr(i + 1, temp);
//			break;
//		}
//	}
//	return tam;
//}
//string tenlot(string name) {
//	string tam;
//	int dau = 0, cuoi = 0;
//	int temp = name.length();
//	for (int i = 0; i < temp; i++) {
//		if (name[i] == ' ') {
//			dau = i;
//			break;
//		}
//	}
//	for (int i = temp; i > 0; i--) {
//		if (name[i] == ' ') {
//			cuoi = i;
//			break;
//		}
//	}
//	cout << dau << endl;
//	cout << cuoi << endl;
//	tam = name.substr(dau + 1, cuoi - dau);
//	return tam;
//}
//
//int main() {
//	string name;
//	getline(cin, name);
//	cout << ho(name) << endl;
//	cout << ten(name) << endl;
//	cout << tenlot(name) << endl;
//	return 0;
//}