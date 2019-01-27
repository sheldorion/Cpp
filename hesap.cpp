#include <iostream>
#include <string>

using namespace std;


class Hesap
{
public:
	Hesap(int bakiye) {
		toplampara=bakiye;
		if (bakiye < 0) {
			cout << "Bakiye 0 dan kucuk olamaz" << endl;
			bakiye = 0;
		}
	}
	void paraCek(int x) {
		toplampara = toplampara - x;
		if (toplampara < 0) {
			toplampara = 0;
			cout << "Bu kadar paraniz yok" << endl;

		}
	}
	void paraYatir(int x) {
		toplampara = toplampara + x;
	}
	void getBakiye() {
		cout << "Bakiyeniz:" << toplampara << endl;
	}

private:
	int toplampara;

};


int main() {

Hesap oguzhanonal(500);


oguzhanonal.paraCek(400);
oguzhanonal.getBakiye();


	return 0;
}