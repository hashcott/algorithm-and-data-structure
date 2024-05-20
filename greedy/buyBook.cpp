/*
	Mua sách
	Trong nhà sách đang bán n cuốn sách, mỗi cuốn sẽ có giá là a[i] đồng
	Nhà sách có chương trình khuyến mãi, mua 3 thì miễn phí 1 cuốn rẻ nhất
	Hỏi số tiền ít nhất cần trả để mua hết n cuốn sách

	4 7 5 8 9 10 3 => sắp xếp giảm dần => 10 9 8 7 5 4 3
	

	bước 1: tập hợp các ứng viên
	- sắp xếp mảng giảm dần
	bước 2: lựa chọn ứng viên tốt nhất
	- chia mảng thành các nhóm 3 cuốn: 10 9 8, 7 5 4, 3
	bước 3: quyết định ứng viên 
	10 9 8 => 10 9
	7 5 4 => 7 5
	3	=> 3
	bước 4: đưa ra giải pháp cuối cùng: 10 + 9 + 7 + 5 + 3 = 34

*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// global variables
int n;
vector<int> a;
int ans = 0;

void input() {
	cin >> n;
	a.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

int main() {
	// tập hợp ứng viên
	input();
	// sort vector a giảm dần
	sort(a.begin(), a.end(), greater<int>());
	// find the answer
	// hàm lựa chọn ứng viên tốt nhất
	for (int i = 0; i < n; i ++) {

		// quyêt định ứng viên
		if ((i+1) % 3 == 0) {
			continue;
		}
		// đưa ra giải pháp cuối cùng
		ans += a[i];
	}
	// 6 5 2
	cout << "\nSo tien it nhat phai bo de mua het sach la: " << ans;
	return 0;
}
