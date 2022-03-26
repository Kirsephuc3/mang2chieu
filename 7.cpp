//#include <iostream>
//using namespace std;
//const int R = 10, C = 10;
//void Nhap(int a[][C], int& r, int& c) {
//	do {
//		cout << " Nhap so hang va so cot: ";
//		cin >> r >> c;
//		if (r > R || c > C) {
//			cout << " Nhap sai !! Nhap lai" << endl;
//		}
//	} while (r > R || c > C);
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++) {
//			cout << "a[" << i << "]""[" << j << "]" << " ";
//			cin >> a[i][j];
//		}
//	}
//}
//void Xuat(int a[][C], int r, int c) {
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++) {
//			cout << a[i][j] << "\t";
//		}
//		cout << endl;
//	}
//
//}
//double avg(int a[][C], int r, int c) {
//	double sum = 0;
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++) {
//			sum += a[i][j];
//		}
//	}
//	return sum / (r*c);
//}
//int KTGT(int a[][C], int r, int c, int z) {
//	int dem = 0;
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++) {
//			if (a[i][j] == z)
//				dem++;
//
//		}
//	}
//	return dem;
//}
////int VTx(int a[][C], int r, int c, int x) {
////	for (int i = 0; i < r; i++) {
////		for (int j = 0; j < c; j++) {
////			if (x == a[i][j]);
////			return i;
////		}
////	}
////}
////int VTy(int a[][C], int r, int c, int y) {
////	for (int i = 0; i < r; i++) {
////		for (int j = 0; j < c; j++) {
////			if (y == a[i][j])
////				return j;
////		}
////	}
////}
//int VTc(int a[][C], int r, int c, int number) {
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++) {
//			if (number == a[i][j]) {
//				return i;
//			}
//		}
//	}
//}
//int VTd(int a[][C], int r, int c, int number) {
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++) {
//			if (number == a[i][j]) {
//				return j;
//			}
//		}
//	}
//}
//void swap(int &a, int &b) {
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
//int tichc(int a[][C],int r,int n) {
//	int tich = 1;
//	for (int i = 0; i < r; i++) {
//		tich *= a[i][n];
//	}
//	return tich;
//}
//int main() {
//	int r, c;
//	int a[R][C];
//	Nhap(a, r, c);
//	cout << "Xuat mang: " << endl;
//	Xuat(a, r, c);
//	cout << " Trung binh cong cua mang la: " << avg(a, r, c) << endl;
//	int x, y,z;
//	cout << " Nhap so z can kiem tra: ";
//	cin >> z;
//	if (KTGT) {
//		cout << z << " Xuat hien " << KTGT(a,r,c,z)<<" lan "<< endl;
//	}
//	else
//		cout << z << " Khong xuat hien " << endl;
//	Xuat(a, r, c);
//	do {
//		cout << " Nhap so x va y can hoan doi: ";
//		cin >> x >> y;
//		if (KTGT(a, r, c, x) == 0 || KTGT(a, r, c, y) == 0) {
//			cout << "So x va y khong xuat hien trong mang !!! Nhap lai " << endl;
//		}
//	}while (KTGT(a, r, c, x) == 0 || KTGT(a, r, c, y) == 0);
//	swap(a[VTc(a, r, c, x)][VTd(a, r, c, x)], a[VTc(a, r, c, y)][VTd(a, r, c, y)]);
//	Xuat(a, r, c);
//	int k;
//	cout << "Nhap so cot ban muon tinh tich: ";
//	cin >> k;
//	cout << "Tich cua cot " << k << " la:" << tichc(a, r, k) << endl;
//	system("pause");
//	return 0;
//}
