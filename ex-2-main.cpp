#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

<<<<<<< HEAD
int a = 0;
int b = 0;
int c = 0;
int m = 0;

=======
>>>>>>> 3a7be6765956ffee0d1fb70b0e052513a1a3f97c
namespace cpp2 {
	/* --------------------------------------------------------------------- */
	/*
	mcxi

	mcxi 記法を解析するクラスです。
	*/
	/* --------------------------------------------------------------------- */
	class mcxi {
	public:
		/* ----------------------------------------------------------------- */
		/*
		mcxi

		指定された文字列を解析して、オブジェクトを初期化します。
		以下の場合には例外が創出されます。

		1. [2-9,m,c,x,i] 以外の文字が出現した場合
		2. 2 文字続けて数字 (2-9) が出現した場合
		3. m, c, x, i がこの順序で出現しなかった場合
		ただし、例えば mx のように、特定の文字をスキップする事は許容
		されます。
		*/
		/* ----------------------------------------------------------------- */
		mcxi(const std::string& s) : value_(0) {
			int digit = 0;
			for (auto pos = s.begin(); pos != s.end(); ++pos) {
				if (*pos >= '2' && *pos <= '9') {
					digit = *pos - '0';
				}
				else {
					auto u = unit(*pos);
					value_ += max(digit, 1) * u;
					digit = 0;
				}
				
<<<<<<< HEAD
			}
			if (a == 0) {
				b = value_;
				a = 1;
			}
			else if (a == 1) {
				c = value_;
				a = 0;
=======
>>>>>>> 3a7be6765956ffee0d1fb70b0e052513a1a3f97c
			}
		}


		/* ----------------------------------------------------------------- */
		/*
		operator+

		2 つのオブジェクトの加算結果を取得します。
		*/
		/* ----------------------------------------------------------------- */
		mcxi operator+(const mcxi& rhs) {
<<<<<<< HEAD
			auto res = this->value_ + rhs.value_;
			cpp2::mcxi x("");
			x.value_ = res;
			return x;
=======
			int a = 0;
			a = value_ + value_;
			cout << a << endl;
			return 0;
>>>>>>> 3a7be6765956ffee0d1fb70b0e052513a1a3f97c
		}

		/* ----------------------------------------------------------------- */
		/*
		to_string

		現在の値を mcxi 記法に変換します。
		*/
		/* ----------------------------------------------------------------- */
		std::string to_string() const {
			int copy = 0;
			int ml = value_ / 1000;
			//cout << ml << endl;
			string mli;
			if (ml > 1) {
				mli = std::to_string(ml) + 'm';
			}
			else if(ml == 1){
				mli = 'm';
			}
			else {

			}
			copy = value_ - ml * 1000;
			string one1;
			int one = copy / 100;
			if (one > 1) {
				one1 = std::to_string(one) + 'c';
			}
			else if (one == 1) {
				one1 = 'c';
			}
			else {

			}
			int copy1 = copy - one * 100;
			string ten1;
			int ten = copy1 / 10;
			if (ten > 1) {
				ten1 = std::to_string(ten) + 'x';
			}
			else if (ten == 1) {
				ten1 = 'x';
			}
			else {

			}
			int copy2 = copy1 - ten * 10;
			string o1;
			int o = copy2;
			if (o > 1) {
				o1 = std::to_string(o) + 'i';
			}
			else if (o == 1) {
				o1 = 'i';
			}
			else {

			}
			string mix;
			mix = mli + one1 + ten1 + o1;
			return mix;
		}


	private:
		int value_;

		int unit(char c) {
<<<<<<< HEAD
			switch(c) {
				case 'm':
					return 1000;
					break;
				case 'c':
					return 100;
					break;
				case 'x':
					return 10;
					break;
				case 'i':
					return 1;
					break;
		}
			
=======
			if (c == 'm') {
				c = 1000;
			}
			else if (c == 'c') {
				c = 100;
			}
			else if (c == 'x') {
				c = 10;
			}
			else if (c == 'i') {
				c = 1;
			}
			return c;
>>>>>>> 3a7be6765956ffee0d1fb70b0e052513a1a3f97c
		}
	};
	}


int main() {
	
	cpp2::mcxi a0("xi");
	cpp2::mcxi b0("x9i");
<<<<<<< HEAD
	auto result0 = a0 + b0;
	
	std::cout << "3x" << " " << result0.to_string() << std::endl;
	
	
=======
	cin.get();
	cin.get();
	//auto result0 = a0 + b0;
	//std::cout << "3x" << " " << result0.to_string() << std::endl;
	/*
>>>>>>> 3a7be6765956ffee0d1fb70b0e052513a1a3f97c
	cpp2::mcxi a1("i");
	cpp2::mcxi b1("9i");
	auto result1 = a1 + b1;
	std::cout << "x" << " " << result1.to_string() << std::endl;

	cpp2::mcxi a2("c2x2i");
	cpp2::mcxi b2("4c8x8i");
	auto result2 = a2 + b2;
	std::cout << "6cx" << " " << result2.to_string() << std::endl;

	cpp2::mcxi a3("m2ci");
	cpp2::mcxi b3("4m7c9x8i");
	auto result3 = a3 + b3;
	std::cout << "5m9c9x9i" << " " << result3.to_string() << std::endl;

	cpp2::mcxi a4("9c9x9i");
	cpp2::mcxi b4("i");
	auto result4 = a4 + b4;
	std::cout << "m" << " " << result4.to_string() << std::endl;

	cpp2::mcxi a5("i");
	cpp2::mcxi b5("9m9c9x8i");
	auto result5 = a5 + b5;
	std::cout << "9m9c9x9i" << " " << result5.to_string() << std::endl;

	cpp2::mcxi a6("m");
	cpp2::mcxi b6("i");
	auto result6 = a6 + b6;
	std::cout << "mi" << " " << result6.to_string() << std::endl;

	cpp2::mcxi a7("i");
	cpp2::mcxi b7("m");
	auto result7 = a7 + b7;
	std::cout << "mi" << " " << result7.to_string() << std::endl;

	cpp2::mcxi a8("m9i");
	cpp2::mcxi b8("i");
	auto result8 = a8 + b8;
	std::cout << "mx" << " " << result8.to_string() << std::endl;

	cpp2::mcxi a9("9m8c7xi");
	cpp2::mcxi b9("c2x8i");
	auto result9 = a9 + b9;
	std::cout << "9m9c9x9i" << " " << result9.to_string() << std::endl;
<<<<<<< HEAD
	cin.get();
	cin.get();
=======
	*/
>>>>>>> 3a7be6765956ffee0d1fb70b0e052513a1a3f97c
}