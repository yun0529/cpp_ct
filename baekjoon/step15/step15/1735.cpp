//#include <iostream>
//using namespace std;
//
//int main(void) {
//	cin.tie(NULL);
//	ios_base::sync_with_stdio;
//
//	int a, b, a2,b2;
//	cin >> a >> b>>a2>>b2;
//
//	int asum = 0, bsum = 0;
//
//	if (b != b2) {
//		asum = a * b2 + a2 * b;
//		bsum = b * b2;
//	}
//	else {
//		asum = a + a2;
//		bsum = b;
//	}
//
//	int x = 1;
//	for (int i = 1; i <= bsum; i++) {
//		if (asum % i == 0 && bsum % i == 0) {
//			x = i;
//		}
//	}
//	cout << asum / x << " " << bsum / x;
//	return 0;
//}