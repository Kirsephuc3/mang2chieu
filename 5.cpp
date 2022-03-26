
//int main() {
//	int n;
//	int a[R][C];
//	cout << "Nhap ma tran: ";
//	cin >> n;
//	Nhap(a, n);
//	Xuat(a, n);
//	cout << " Cac phan tu cua duong cheo chinh: ";
//	for (int i = 0; i < n; i++)
//		cout << a[i][i] << "   ";
//	int sum = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (i == j) {
//				sum += a[i][j];
//			}
//		}
//	}
//	cout << "\nTong duong cheo chinh la: " << sum << endl;
//	cout << " Cac phan tu cua duong cheo phu: ";
//	for (int i = 0; i < n; i++) {
//			cout << a[i][n - i - 1] << " ";
//		}
//	int sum1 = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (i+j==n-1) {
//				sum1 += a[i][j];
//			}
//		}
//	}
//	cout << "\nTong duong cheo phu la: " << sum1 << endl;
//	system("pause");
//	return 0;
//}