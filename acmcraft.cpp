#include <iostream>
using namespace std;

class ACM {

public:
	void setTime(int d) {

	}
	void setInfo(int x, int y, int w) {

	}
};

int main() {
	int t, n, k;
	// t : 테스트 케이스 개수
	// n : 건물 개수
	// k : 규칙 개수
	cin >> t;
	int* time = new int[t]; // 총 건설 시간
	for (int i = 0; i < t; i++) {
		cin >> n >> k;

		int* d = new int[n];	// 건설 시간
		int* x = new int[k];	// 먼저 건설
		int* y = new int[k];	// 나중 건설
		int* w = new int[t];	// 승리 건물
		time[i] = 0;

		for (int i = 0; i < n; i++) {
			cin >> d[i];
		}
		for (int i = 0; i < k; i++) {
			cin >> x[i] >> y[i];
		}
		cin >> w[i];

		for (int i = 0; i < t; i++) {
			int temp_time = 0;
			if (x[i] == x[i + 1]) time=
		}
	}
}