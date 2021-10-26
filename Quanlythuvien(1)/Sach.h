#include<iostream>
#include<fstream>
#include"DoHoa.h"
#include<vector>
using namespace std;
struct sach {
	int masach;
	string tensach;
	string nxb;
	double gia;
	int nam;
	int page;
	string ngaynhapkho;
};
typedef struct sach Sach;

struct danhsach {
	vector<Sach> ds_sach;
};
typedef struct danhsach DanhSach;
void them(DanhSach& ds, Sach& s);
void Hien_Thi_Thong_Tin_Sach(ifstream& filein);

void quanly_sach();
void Them_Sach();
void Xoa_Sach();