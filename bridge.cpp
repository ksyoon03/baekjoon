#include <iostream>
using namespace std;

long long fac(int n) {
	int result = 1;
	for (int i = 2; i <= n; i++) {
		result *= i;
	}
	return result;
}

int main() {
	int t;
	cin >> t;

	int* n = new int[t];		// N
	int* n_fac = new int[t];	// N ÆÑÅä¸®¾ó
	int* m = new int[t];		// M
	int* m_fac = new int[t];	// M ÆÑÅä¸®¾ó
	int* mn_fac = new int[t];	// M - N ÆÑÅä¸®¾ó
	int* result = new int[t];	// mCn

	for (int i = 0; i < t; i++) {
		cin >> n[i] >> m[i];
		n_fac[i] = fac(n[i]);
		m_fac[i] = fac(m[i]);
		mn_fac[i] = fac(m[i] - n[i]);
		result[i] = m_fac[i] / (n_fac[i] * mn_fac[i]);
	}
	
	for (int i = 0; i < t; i++) {
		cout << result[i] << endl;
	}
}