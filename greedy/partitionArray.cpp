/*
	Cho mảng số nguyên a[] gồm n phần tử và số nguyên k
	Hãy chia mảng a[] thành các dãy con, trong đó phần tử lớn và nhỏ của mỗi dãy 
	con không chênh lệch quá k đơn vị

	Chúng ta cần tạo ra tối thiểu bao nhiêu dãy con ?

	a[] = 3, 6, 1,7, 4 => 1 3 4 6 7
	k = 3


*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> a = {3, 6, 1, 7, 4};
	int k = 3;

	// sort vector a tăng dần
	sort(a.begin(), a.end());

	// find the answer
	int res = 1;
	int left = 0;
	int right = 0;

	while (right < a.size()) {
		if (a[right] - a[left] > k) {
			res++;
			left = right;
		}
		right++;
	}

	cout << res;

}
