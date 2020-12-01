#include <iostream>
#include<ios>
#include<iomanip>
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
	cout << left << setw(12) << "367,186, 151" << " " << left << setw(9) << "模範,92809" << " " << "計算結果" << " " << left << setw(6) << nth_prime(367, 186, 151) << endl;
	cout << left << setw(12) << "179,10,203" << " " << left << setw(9) << "模範,6709" << " " << "計算結果" << " " << left << setw(6) << nth_prime(179, 10, 203) << endl;
	cout << left << setw(12) << "271,37,39" << " " << left << setw(9) << "模範,12037" << " " << "計算結果" << " " << left << setw(6) << nth_prime(271, 37, 39) << endl;
	cout << left << setw(12) << "103,230,1" << " " << left << setw(9) << "模範,103" << " " << "計算結果" << " " << left << setw(6) << nth_prime(103, 230, 1) << endl;
	cout << left << setw(12) << "27,104,185" << " " << left << setw(9) << "模範,93523" << "　" << "計算結果" << " " << left << setw(6) << nth_prime(27, 104, 185) << endl;
	cout << left << setw(12) << "253,50,85" << " " << left << setw(9) << "模範,14503" << " " << "計算結果" << " " << left << setw(6) << nth_prime(253, 50, 85) << endl;
	cout << left << setw(12) << "1,1,1" << " " << left << setw(9) << "模範,2" << " " << "計算結果" << " " << left << setw(6) << nth_prime(1, 1, 1) << endl;
	cout << left << setw(12) << "9075,337,210" << " " << left << setw(9) << "模範,899429" << " " << "計算結果" << " " << left << setw(6) << nth_prime(9075, 337, 210) << endl;
	cout << left << setw(12) << "307,24,79" << " " << left << setw(9) << "模範,5107" << " " << "計算結果" << " " << left << setw(6) << nth_prime(307, 24, 79) << endl;
	cout << left << setw(12) << "331,221,177" << " " << left << setw(9) << "模範,412717" << " " << "計算結果" << " " << left << setw(6) << nth_prime(331, 221, 177) << endl;
	cout << left << setw(12) << "259,170,40" << " " << left << setw(9) << "模範,22699" << " " << "計算結果" << " " << left << setw(6) << nth_prime(259, 170, 40) << endl;
	// 以下、同様に、入出力例通りになるか確認せよ。
	cin.get();
	cin.get();
	return 0;
}