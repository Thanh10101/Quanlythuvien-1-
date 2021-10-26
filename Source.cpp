#include"DoHoa.h"
#include"xylyacc.h"
#include"Sach.h"
#include"Phieumuon.h"
void chuc_nang() {
	int luachon;
	cout << "1.Quan Ly Sach" << endl;
	cout << "2.Quan Ly Phieu Muon" << endl;
	cin >> luachon;
	switch (luachon) {
	case 1:
		//quanly_sach();
		break;
	case 2:
		//quanly_phieumuon();
		break;
	default:
		break;
	}
}
int main()
{

	resizeConsole(1000, 600);
	char a[100], p[100];
	int i = 0;
	Admin ad;
	mo_file(ad);
	while (i < 3) {
		Dang_Nhap(a, p);
		if (Dang_Nhap_Thanh_Cong(a, p, ad)) {
			chuc_nang();
		}
		else
		{
			cout << "dang nhap lai";
			if (i == 2) {
				return 0;
			}
			i++;
		}
	}

	system("pause");
	return 0;
}