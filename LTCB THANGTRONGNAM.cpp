#include <iostream>
using namespace std;
int main() {
	int thang;cout <<"nhap thang:";cin >> thang;
	switch (thang){
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:cout<<"thang"<< thang <<"co 31 ngay"; break;
	case 4:case 6:case 9:case 11:cout << "thang" << thang << "co 30 ngay"; break;
	case 2:cout<<"thang"<< thang << "co 28-29 ngay"; break;
	default:
		cout << "khong co thang" << thang; break;
	}
	return 0;
}