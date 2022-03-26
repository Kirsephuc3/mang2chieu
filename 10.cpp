//#include<iostream>
//using namespace std;
//int main() {
//	int sohang, socot, value = 1, vtcot = 0, vthang = 0;
//	cout << "Nhap so hang va so cot: ";
//	cin >> sohang >> socot;
//	int m = sohang;
//	int n = socot;
//	int a[10][10];
//	while (value <= n * m) {
//		for (int i = vtcot; i < socot; i++) {
//			a[vthang][i] = value;
//			value++;
//		}
//		for (int i = vthang + 1; i < sohang; i++) {
//			a[i][socot - 1] = value;
//			value++;
//		}
//		for (int i = socot - 2; i >= vtcot; i--) {
//			a[sohang - 1][i] = value;
//			value++;
//		}
//		for (int i = sohang - 2; i > vthang; i--) {
//			a[i][vtcot] = value;
//			value++;
//		}
//		vtcot++;
//		vthang++;
//		socot--;
//		sohang--;
//	}
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++)
//			cout << a[i][j] << "\t";
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}