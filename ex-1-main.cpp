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
	cout << "367,186, 151" << " " << "A,92809" << " " << nth_prime(367, 186, 151) << endl;
	cout << "179,10,203" << " " << "A,6709" << " " << nth_prime(179, 10, 203) << endl;
	cout << "271,37,39" << " " << "A,12037" << " " << nth_prime(271, 37, 39) << endl;
	cout << "103,230,1" << " " << "A,103" << " " << nth_prime(103, 230, 1) << endl;
	cout << "27,104,185" << " " << "A,93523" << " " << nth_prime(27, 104, 185) << endl;
	cout << "253,50,85" << " " << "A,14503" << " " << nth_prime(253, 50, 85) << endl;
	cout << "1,1,1" << " " << "A,2" << " " << nth_prime(1, 1, 1) << endl;
	cout << "9075,337,210" << " " << "A,899429" << " " << nth_prime(9075, 337, 210) << endl;
	cout << "307,24,79" << " " << "A,5107" << " " << nth_prime(307, 24, 79) << endl;
	cout << "331,221,177" << " " << "A,412717" << " " << nth_prime(331, 221, 177) << endl;
	cout << "259,170,40" << " " << "A,22699" << " " << nth_prime(259, 170, 40) << endl;
	cout << "269,58,102" << " " << "A,25673" << " " << nth_prime(269, 58, 102) << endl;
	// 以下、同様に、入出力例通りになるか確認せよ。
	cin.get();
	cin.get();
	return 0;
}