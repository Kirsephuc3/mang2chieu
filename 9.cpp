//#include <iostream>
//using namespace std;
//int main() {
//	int n, value = 1, j = 0;
//	int a[10][10];
//	do {
//		cout << " Nhap ma tran bac n: ";
//		cin >> n;
//		if (n < 2 || n> 10) {
//			cout << "Nhap sai ma tran !! Nhap lai: " << endl;
//		}
//	} while (n < 2 || n> 10);
//	while (value <= n * n) {
//		for (int i = 0; i <n; i++)
//			a[i][j] = value++;xc vvvvvvvvvvvvvvvvvvvv
//		j++;
//		for (int i = n-1; i >=0; i--) 
//			a[i][j] = value++;
//		j++;
//	}
//	cout << " Xuat ma tran zigzag theo cot:" << endl;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cout << "\t" << a[i][j];
//
//		}
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//
//}