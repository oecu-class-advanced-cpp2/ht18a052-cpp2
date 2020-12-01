#include <iostream>
#include<ios>
#include<iomanip>
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
	cout << left << setw(12) << "367,186, 151" << " " << left << setw(9) << "�͔�,92809" << " " << "�v�Z����" << " " << left << setw(6) << nth_prime(367, 186, 151) << endl;
	cout << left << setw(12) << "179,10,203" << " " << left << setw(9) << "�͔�,6709" << " " << "�v�Z����" << " " << left << setw(6) << nth_prime(179, 10, 203) << endl;
	cout << left << setw(12) << "271,37,39" << " " << left << setw(9) << "�͔�,12037" << " " << "�v�Z����" << " " << left << setw(6) << nth_prime(271, 37, 39) << endl;
	cout << left << setw(12) << "103,230,1" << " " << left << setw(9) << "�͔�,103" << " " << "�v�Z����" << " " << left << setw(6) << nth_prime(103, 230, 1) << endl;
	cout << left << setw(12) << "27,104,185" << " " << left << setw(9) << "�͔�,93523" << "�@" << "�v�Z����" << " " << left << setw(6) << nth_prime(27, 104, 185) << endl;
	cout << left << setw(12) << "253,50,85" << " " << left << setw(9) << "�͔�,14503" << " " << "�v�Z����" << " " << left << setw(6) << nth_prime(253, 50, 85) << endl;
	cout << left << setw(12) << "1,1,1" << " " << left << setw(9) << "�͔�,2" << " " << "�v�Z����" << " " << left << setw(6) << nth_prime(1, 1, 1) << endl;
	cout << left << setw(12) << "9075,337,210" << " " << left << setw(9) << "�͔�,899429" << " " << "�v�Z����" << " " << left << setw(6) << nth_prime(9075, 337, 210) << endl;
	cout << left << setw(12) << "307,24,79" << " " << left << setw(9) << "�͔�,5107" << " " << "�v�Z����" << " " << left << setw(6) << nth_prime(307, 24, 79) << endl;
	cout << left << setw(12) << "331,221,177" << " " << left << setw(9) << "�͔�,412717" << " " << "�v�Z����" << " " << left << setw(6) << nth_prime(331, 221, 177) << endl;
	cout << left << setw(12) << "259,170,40" << " " << left << setw(9) << "�͔�,22699" << " " << "�v�Z����" << " " << left << setw(6) << nth_prime(259, 170, 40) << endl;
	// �ȉ��A���l�ɁA���o�͗�ʂ�ɂȂ邩�m�F����B
	cin.get();
	cin.get();
	return 0;
}