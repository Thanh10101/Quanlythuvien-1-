#include"Sach.h"
void them(DanhSach& ds, Sach& s) {
	ifstream filein;
	filein.open("Sach.txt", ios_base::in);
	filein >> s.masach;
	filein >> s.tensach;
	cout << s.masach << s.tensach;
	filein.close();
}

void Hien_Thi_Thong_Tin_Sach(ifstream& filein) {
	filein.open("Ssch.txt", ios_base::in);
	int i = 0;
	int dem = 0;
	DanhSach a;
	a.ds_sach;
	while (!filein.eof()) {

	}
}
void quanly_sach() {
	int chon1;
	cout << "Lua chon chuc nang" << endl;
	cout << "1.Xem thong tin sach" << endl;
	cout << "2.Them sach" << endl;
	cout << "3.Xoa sach" << endl;
	cin >> chon1;
	switch (chon1)
	{
	case 1:

		//Hien_Thi_Thong_Tin_Sach();
		break;
	case 2:
		//Them_Sach();
		break;
	case 3:
		//Xoa_Sach();
		break;
	default:
		break;
	}
}
void Them_Sach() {

}
void Xoa_Sach() {

}