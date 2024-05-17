#include <iostream>
using namespace std;

/*
	Tìm ước số chung lớn nhất của 2 số a và b
	
	USCLN(a, b) = USCLN(b, a % b) nếu b != 0
*/

int uscln(int a, int b) {
	// phần cơ sở
	if(b == 0) return a;

	// phần đệ quy
	return uscln(b, a % b);
}