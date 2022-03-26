//#include <iostream>
//using namespace std;
//const int N = 20;
//int main() {
//	int A[N][N], B[N][N];
//	int tong[N][N] = { 0 }, tich[N][N] = { 0 };
//	int r, c, m, n;
//	do {
//		cout << " Nhap so dong va so cot vao ma tran I: ";
//		cin >> r >> c;
//		if (r > N || c > N) {
//			cout << "Nhap sai!! Nhap lai:";
//		}
//	} while (r > N || c > N);
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++) {
//			cout << "a[" << i << "][" << j << "]" << ":";
//			cin >> A[i][j];
//		}
//	}
//	do {
//		cout << " Nhap so hang va so cot cho ma tran II: ";
//		cin >> m >> n;
//		if (m > N || n > N) {
//			cout << " Nhap sai!! Nhap lai: ";
//		}
//	} while (m > N || n > N);
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			cout << "a[" << i << "][" << j << "]" << ":";
//			cin >> B[i][j];
//		}
//	}
//	if (r == m && c == n) {
//		for (int i = 0; i < r; i++) {
//			for (int j = 0; j < c; j++) {
//				tong[i][j] = A[i][j] + B[i][j];
//			}
//		}
//		cout << " Tong hai ma tran la: " << endl;
//		for (int i = 0; i < r; i++) {
//			for (int j = 0; j < c; j++) {
//				cout << "\t" << tong[i][j];
//			}
//			cout << endl;
//		}
//	}
//	else
//		cout << " Hai ma tran I va II vua nhap " << r << " x " << "c" << " va ma tran" << m << " x " << " n " << " khong the tinh tong !!!" << endl;
//	if (c == m) {
//		for (int i = 0; i < r; i++) {
//			for (int j = 0; j < n; j++) {
//				for (int k = 0; k < c; k++) {
//					tich[i][j] += (A[i][k] * B[k][i]);
//				}
//			}
//		}
//		cout << "Tich hai ma tran la:" << endl;
//		for (int i = 0; i < r; i++) {
//			for (int j = 0; j < n; j++) {
//				cout << "\t" << tich[i][j];
//			}
//			cout << endl;
//		}
//	}else
//		cout << " Hai ma tran I va II vua nhap " << r << " x " << "c" << " va ma tran" << m << " x " << " n " << " khong the tinh tich !!!" << endl;
//
//	system("pause");
//	return 0;
//}