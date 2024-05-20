/*
	
	Chúng ta có hero và monsters 
	Hero sẽ có sức mạnh là power
	Monsters sẽ có sức mạnh là monsters[i]

	Nếu hero có sức mạnh lớn hơn thì hero sẽ tiêu diệt monster đó và được cộng sức mạnh của monster đó ?

	Hỏi hero có thể tiêu diệt hết monsters không ?

	-> tiêu diệt quái vật có sức mạnh nhỏ nhất trước => lớn nhất
	=> sắp xếp mảng monsters tăng dần
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// global variables
int n, power;
vector<int> monsters;

void input() {
	cin >> n >> power;
	monsters.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> monsters[i];
	}
}

int main() {
	// tập hợp ứng viên
	input();
	// sort vector monsters tăng dần
	sort(monsters.begin(), monsters.end());
	// find the answer
	// hàm lựa chọn ứng viên tốt nhất
	for (int i = 0; i < n; i ++) {
		// quyết định ứng viên
		if (power > monsters[i]) {
			power += monsters[i];
		} else {
			cout << "Looser";
			return 0;
		}
	}
	cout << "Princess loves you!";
	return 0;
}