#include <iostream>
#define CPP2_PRIME_UPPER_LIMIT 1000000 //�T������l�̏���l�B

using namespace std;
/* --------------------------------------------------------------- /
/*
* nth_prime
*
* �^����ꂽ������ a �� d �� n �ɑ΂��āA���̓�������Ɋ܂܂�� n �Ԗڂ�
* �f����Ԃ��B
*
* TODO: ���� nth_prime �֐�����������B�K�v�ł���Α��Ɋ֐���
* �t�@�C�����쐬����B
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
	// �ȉ��A���l�ɁA���o�͗�ʂ�ɂȂ邩�m�F����B
	cin.get();
	cin.get();
	return 0;
}