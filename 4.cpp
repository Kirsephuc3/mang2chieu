//
//#include <iostream>
////#include <ctime>
////#include <cstdlib>
//using namespace std;
//const int R = 5, C = 6;
//void Nhap(int a[][C], int& r, int& c) {
//	//srand(time(0));
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
//		//cout << endl;
//	}
//}
//void Xuat(int a[][C], int r, int c) {
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++) {
//			cout << a[i][j] << "\t ";
//		}
//		cout << endl;
//	}
//}
//int tongDong(int a[][C], int c, int d)
//{
//	int sum(0);
//	for (int j = 0; j < c; j++) // Duyệt các cột
//		sum += a[d][j];
//
//	return sum;
//}
//// tính tổng trên cột c
//int tongCot(int a[][C], int r, int l)
//{
//	int sum(0);
//	for (int i = 0; i < r; i++) // Duyệt các dòng
//		sum += a[i][l];
//
//	return sum;
//}
//int main() {
//	int a[R][C];
//	int r, c;
//	Nhap(a, r, c);
//	cout << "Xuat mang:" << endl;
//	Xuat(a, r, c);
//	int x, d, l;
//	cout << "\n Tinh so dong va so cot:" << endl;
//	cout << " Chon 1 de tinh dong || Chon 2 de tinh cot: ";
//	cin >> x;
//	switch (x) {
//	case 1:
//	{
//		cout << " Nhap so dong can tinh: ";
//		cin >> d;
//		cout << "Tong so dong " << d << " la: " << tongDong(a, c, d) << endl;
//		break;
//	}
//	case 2:
//	{
//		cout << " Nhap so cot can tinh: ";
//		cin >> l;
//		cout << " Tong so cot " << l << " la:" << tongCot(a, r, l) << endl;
//		break;
//	}
//	default:
//	{
//		cout << "Nhap sai !! Nhap lai" << endl;
//	}
//	}
//	int k;
//	int count = 0;
//	cout << " Nhap so k= ";
//	cin >> k;
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++) {
//			if (a[i][j] == k) {
//				count++;
//				cout << k << " xuat hien tai dong " << i << " va cot " << j << endl;
//			}
//		}
//	}
//	if (count > 0) {
//		cout << " Tong so xuat hien cua " << k << " la:" << count << endl;
//	}
//	else
//		cout << " Khong xuat hien " << k << endl;
//	system("pause");
//	return 0;
//}