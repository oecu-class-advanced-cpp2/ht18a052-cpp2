#include <iostream>
#define CPP2_PRIME_UPPER_LIMIT 1000000 //探索する値の上限値。

using namespace std;
/* --------------------------------------------------------------- /
/*
* nth_prime
*
* 与えられた正整数 a と d と n に対して、この等差数列に含まれる n 番目の
* 素数を返す。
*
* TODO: この nth_prime 関数を実装せよ。必要であれば他に関数や
* ファイルを作成せよ。
/
/* -------------------------------------------------------------- */

bool primeNumber(int n) {
	if (n < 2) return false;
	else {
		for (int i = 2; i * i <= n; i++) {
			if (n % i == 0) return false;
		}
		return true;
	}
}

int nth_prime(unsigned int a, unsigned int d, unsigned int n) {
	int tmp = 0;
	for (int i = 0; i < 1000000; i++) {
		if (primeNumber(a + d*i) == true) {
			tmp++;
		}
		if (tmp == n) {
			return a + i*d;
		}
	}
}
int main() {
	cout << nth_prime(367,186, 151) << endl;
	cout << nth_prime(179, 10, 203) << endl;
	cout << nth_prime(271, 37, 39) << endl;
	// 以下、同様に、入出力例通りになるか確認せよ。
	cin.get();
	cin.get();
	return 0;
}