#pragma once
#include "MENUHOADON.cpp"
void Chaychu()
{
 	char a[81]="                         HOC VIEN CONG NGHE BUU CHINH VIEN THONG CO SO TPHCM    ";
  do
  {	
    int x=rand()%16;
    Mauchuchay(x);
   for(int i=0;i<=79;i++)

     a[i-1]=a[i];
     a[79]=a[0];
   gotoxy(0,0);
   cout<<a;
   Sleep(170);
   }
  while(!kbhit());
  gotoxy(0,0);
  for(int i=0;i<80;i++)
    cout<<" ";
 //   system("cls");
 SetColor(14);
    gotoxy(3,0);
    cout<<"Cau truc du lieu & Giai thuat";
    gotoxy(53,0);
    cout<<"GVHD: Luu Nguyen Ky Thu";
    MauCB();
}
#include <iostream>
using namespace std;

// Function declarations
int soSanhDate(Date d1, Date d2);
bool KiemTraTrongKhoangThoiGian(Date ngay, Date start, Date end);
void VeBangIntop10();
bool nhapKhoangThoiGian(Date& startDate, Date& endDate);
void TinhDoanhThuVatTu(LIST_NHAN_VIEN ds_nv, vector<VatTu>& ds_vat_tu, Date start, Date end);
void InTop10VatTu(vector<VatTu> ds_vat_tu);
NODE_VT* TimKiemVatTu(TREE_VT t, string mavt);

int inDate(int &day, int x, int y)
{
nhapngay:
    SetColor(0);
    gotoxy(x, y);
    cout << "    ";
    gotoxy(x, y);
    string result = "";
    int count = 0;
    SetColor(15);
    while (true)
    {
        char c = getch();
        if ((c >= '0' && c <= '9') && count < 2)
        {
            if (count == 0)
            {
                if (c >= '4' )
                {
                    SetColor(0);

                    gotoxy(x - 1, x);
                    cout << " ";
                    goto nhapngay;
                }
            }
            else if (count == 1 && result[0] == '3' && c > '1')
            {
                goto nhapngay;
            }
            result += c;
            cout << c;
            count++;
        }
        else if (c == '\b' && count > 0)
        { // Backspace
            cout << "\b \b";
            count--;
            result.erase(result.length() - 1, 1);
        }
        else if (c == 27)
        {
            return 1;
        }
        else if (c == 13)
        {
            if (result.empty() == 1)
            {
            	
                goto nhapngay;
            }
            if(result == "00") goto nhapngay;
            day = stoi(result);
            return 5;
        }
    }
}


int inMonth(int &month, int x, int y)
{
nhapthang:
    SetColor(0);
    gotoxy(x, y);
    cout << "    ";
    gotoxy(x, y);
    string result = "";
    int count = 0;
    SetColor(15);
    while (true)
    {
        char c = getch();
        if ((c >= '0' && c <= '9') && count < 2)
        {
            if (count == 0)
            {
                if (c > '1' )
                {
                    goto nhapthang;
                }
            }
            else if (count == 1 && result[0] == '1' && c > '2')
            {
                goto nhapthang;
            }
            result += c;
            cout << c;
            count++;
        }
        else if (c == '\b' && count > 0)
        { // Backspace
            cout << "\b \b";
            count--;
            result.erase(result.length() - 1, 1);
        }
        else if (c == 27)
        {
            return 1;
        }
        else if (c == '\r')
        {
            if (result.empty() == 1)
            {
                goto nhapthang;
            }
			if (result == "00") goto nhapthang;
            month = stoi(result);
            return 5;
        }
    }
}

int inYear(int &year, int x, int y)
{
   nhapnam:
    SetColor(0);
    gotoxy(x, y);
    cout << "    ";
    gotoxy(x, y);
    string result = "";
    int count = 0;
    SetColor(15);
    while (true)
    {
        char c = getch();
        if ((c >= '0' && c <= '9') && count < 4)
        {
            if (count == 0 && c != '2')
            {
                goto nhapnam;
            }
            result += c;
            cout << c;
            count++;
        }
        else if (c == '\b' && count > 0)
        { // Backspace
            cout << "\b \b";
            count--;
            result.erase(result.length() - 1, 1);
        }
        else if (c == 27)
        {
            return 1;
        }
        else if (c == '\r')
        {
            if (result.empty() == 1)
            {
                goto nhapnam;
            }
            if (count == 1 and result[0] == '0' and result[1] == '0')
            {
                goto nhapnam;
            }
            year = stoi(result);
            return 5;
        }
    }
}



void VeBangIntop10() {
    clrscr(); 
    SetColor(2);
    gotoxy(5, 1);
    cout << "BANG THONG KE TOP 10 VAT TU DOANH THU CAO NHAT KHOANG TIME (ESC de thoat)";
    SetColor(15);
    gotoxy(5, 3);
    cout << "+--------+----------+------------------------+-----------------------------+";
    gotoxy(5, 4);
    cout << "|   TOP  |MA VAT TU |            TEN         |           DOANH THU         | ";
    gotoxy(5, 5);
    cout << "+--------+----------+------------------------+-----------------------------+";
    for (int i = 0; i < 10; i++) {
        gotoxy(5, 6 + i);
        cout << "|        |          |                        |                             |";
        gotoxy(6, 6 + i);
        cout << setw(2) << i + 1;
        gotoxy(5, 7 + i);
        cout << "+--------+----------+------------------------+-----------------------------+";
    }
}

bool nhapKhoangThoiGian(Date &startDate, Date &endDate) {
	thongke:
	ShowCur(true);
	inputtruoc:
    for (int i = 35; i <= 70; i++)
    {
        for (int j = 11; j <= 13; j++)
        {
            textcolor(112);
            gotoxy(i, j);
            cout << " ";
        }
    }
    gotoxy(36, 12);
    cout << "Ngay: ";
    gotoxy(42, 12);
    for (int i = 1; i <= 4; i++)
    {
        textcolor(0);
        cout << " ";
    }
    textcolor(112);
    gotoxy(47, 12);
    cout << "Thang: ";
    gotoxy(55, 12);
    for (int i = 1; i <= 4; i++)
    {
        textcolor(0);
        cout << " ";
    }
    textcolor(112);
    gotoxy(60, 12);
    cout << "Nam: ";
    gotoxy(65, 12);
    for (int i = 1; i <= 4; i++)
    {
        textcolor(0);
        cout << " ";
    }
    SetColor(7);
    Date truoc;
    if (inDate(startDate.day, 42, 12) == 1)
    {
        return 1;
    }
    if (inMonth(startDate.month, 55, 12) == 1)
    {
        return 1;
    }
    if (inYear(startDate.year, 65, 12) == 1)

    {
        return 1;
    }
    if(kiemtrangaythongke(startDate)==false)
    {
    	SetColor(15);
        gotoxy(70, 15);
        cout << "Ban nhap khong hop le!";
        Sleep(1000);
        gotoxy(70, 15);
        cout << "                      ";
    	goto inputtruoc;
	}
    
    SetColor(15);
    gotoxy(77, 12);
    cout << "TO";
    
    inputsau:
    for (int i = 85; i <= 120; i++)
    {
        for (int j = 11; j <= 13; j++)
        {
            textcolor(112);
            gotoxy(i, j);
            cout << " ";
        }
    }
    gotoxy(86, 12);
    cout << "Ngay: ";
    gotoxy(92, 12);
    for (int i = 1; i <= 4; i++)
    {
        textcolor(0);
        cout << " ";
    }
    textcolor(112);
    gotoxy(97, 12);
    cout << "Thang: ";
    gotoxy(105, 12);
    for (int i = 1; i <= 4; i++)
    {
        textcolor(0);
        cout << " ";
    }
    textcolor(112);
    gotoxy(110, 12);
    cout << "Nam: ";
    gotoxy(115, 12);
    for (int i = 1; i <= 4; i++)
    {
        textcolor(0);
        cout << " ";
    }
    SetColor(7);

   
    Date sau;
    if (inDate(endDate.day, 92, 12) == 1)

    {
        return 1;
    }
    if (inMonth(endDate.month, 105, 12) == 1)

    {
        return 1;
    }

    if (inYear(endDate.year, 115, 12) == 1)
    {
        return 1;
    }
    if (kiemtrangaythongke(endDate)==false)
    {
    	SetColor(15);
        gotoxy(70, 15);
        cout << "Ban nhap khong hop le!";
        Sleep(1000);
        gotoxy(70, 15);
        cout << "                      ";
    	goto inputsau;
	}
    if (sosanhDate(startDate, endDate) == false)
    {
    	for (int i = 85; i <= 120; i++)
    {
        for (int j = 11; j <= 13; j++)
        {
            textcolor(0);
            gotoxy(i, j);
            cout << " ";
        }
    }
        SetColor(15);
        gotoxy(70, 15);
        cout << "Ban nhap khong hop le!";
        Sleep(1000);
        gotoxy(70, 15);
        cout << "                      ";
        goto thongke;
    }

}


VAT_TU TimVatTu(TREE_VT root, string MAVT) {
    if (root == NULL) {
        return VAT_TU(); // Tra ve vat tu mac dinh neu không tìm thay
    }
    if (root->VT.MAVT == MAVT) {
        return root->VT;
    } else if (root->VT.MAVT > MAVT) {
        return TimVatTu(root->left, MAVT);
    } else {
        return TimVatTu(root->right, MAVT);
    }
}

bool NgayTrongKhoang(Date ngay, Date start, Date end) {
    if ((ngay.year 	> start.year || (ngay.year == start.year && (ngay.month > start.month || (ngay.month == start.month && ngay.day >= start.day)))) &&
        (ngay.year < end.year || (ngay.year == end.year && (ngay.month < end.month || (ngay.month == end.month && ngay.day <= end.day))))) {
        return true;
    }
    return false;
}
void TinhDoanhThuVatTu(LIST_NHAN_VIEN dsnv, Date start, Date end, map<string, uint> &doanhThuVatTu) {
    for (int i = 0; i < dsnv.sl; i++) {
        ptrhd hd = dsnv.ds[i]->dshd.head;
        while (hd != NULL) {
            if (NgayTrongKhoang(hd->ngaylap, start, end) &&  hd->loai == 'X') {
                ptrcthd ct = hd->dscthd.headCTHD;
                while (ct != NULL) {
                    if (ct->Trangthai == 1) {
                        doanhThuVatTu[ct->MAVT] += ct->Soluong * ct->Dongia * (1 + (ct->VAT * 1.0 / 100));
                    }
                    ct = ct->ctnext;
                }
            }
            hd = hd->hdnext;
        }
    }
}



int InTop10VatTu(LIST_NHAN_VIEN dsnv, TREE_VT root) {
	system("cls");
    Date start, end;
    nhapKhoangThoiGian(start, end);
    
    map<string, uint> doanhThuVatTu;
    TinhDoanhThuVatTu(dsnv, start, end, doanhThuVatTu);
    
    vector<pair<string, uint>> vec(doanhThuVatTu.begin(), doanhThuVatTu.end());
    sort(vec.begin(), vec.end(), [](const pair<string, uint> &a, const pair<string, uint> &b) {
        return b.second < a.second;
    });

    VeBangIntop10();
    
    for (int i = 0; i < 10 && i < vec.size(); i++) {
        string mavt = vec[i].first;
        uint doanhthu = vec[i].second;
        
        VAT_TU vt = TimVatTu(root, mavt);
        gotoxy(15, 6 + i);
        cout << vt.MAVT;
        gotoxy(26, 6 + i);
        cout << vt.ten;
        gotoxy(55, 6 + i);
        cout << formatNumber(doanhthu);
    }
    
        
    while (true) {
        if (kbhit()) {
            char c = getch();
            if (c == 27) { 
                return 0;
            }
        }
    }
}

void khoitao_MenuChinh()
{

	//KhungNen(); 
	int mm=0;
	KhungNho(45,4);
	SetColor(12);
	SetBGColor(mm);
	gotoxy(46,5);
	cout<<"      TRAN VAN QUOC         ";
	MauCB();
	KhungNho(45,7);
	SetColor(12);
	SetBGColor(mm);
	gotoxy(46,8);
	cout<<"      NGUYEN PHUC THINH ";
	MauCB();
	KhungNho(45,10);
	SetColor(12);
	SetBGColor(mm);
	gotoxy(46,11);
	cout<<"    NGUYEN PHUOC THIEN   ";
	MauCB();
	KhungNho(45,21);
	SetColor(12);
	SetBGColor(7);
	gotoxy(46,22);
	cout<<"      Nhan ESC de thoat     ";
	MauCB();
    gotoxy(0,0);
	gotoxy(1,1);
	MauCB();
	for(int i=0;i<80;i++)
    {
        gotoxy(i,1);
        SetColor(14);
        cout<<char(176);
    }
    gotoxy(25,1);
	SetColor(11);
	cout<<"CHUONG TRINH QUAN LY VAT TU";
	KhungNho(2,4);
	SetColor(11);
	cout<<"1. Vat tu.";
	KhungNho(2,8);
	SetColor(11);
	cout<<"2. Nhan vien.";
	KhungNho(2,12);
	SetColor(11);
	cout<<"3. Hoa don.";
	KhungNho(2,16);
	SetColor(11);
	cout<<"4.Doanh thu nam.";
	KhungNho(2,20);
	SetColor(11);
	cout<<"5. Top 10 VT .";
}
int Menu_Chinh(LIST_NHAN_VIEN &ds_nv ,TREE_VT &t )
{
    SetConsoleTitle("CHUONG TRINH QUAN LI VAT TU");
    MauCB();
    system("CLS");
    khoitao_MenuChinh();
    string lt[17];
    lt[0]="1. Vat tu.                  ";
    lt[4]="2. Nhan vien.               ";
    lt[8]="3. Hoa don.                 ";
    lt[12]="4. Doanh thu nam    ";
    lt[16]="5. Top 10 VT  .     ";
    gotoxy(3,5);
    Mauchon();
    cout<<lt[0];
    int flagE=0;
    Chaychu();
    MauCB();
    gotoxy(3,5);
    while (1)
    {
        while (!kbhit())
            Sleep(100);
        char c = getch();
        if (c==27) //neu nhan ESC thi di chuyen den hang dong EXIT roi exit
        {
			KhungExit(45,13);
			while(1)
			{
	            while (!kbhit()) Sleep(100);
    	        c=getch();
        	    if (c==-32)
	            {
					char cc=getch();
					if(cc==77 && flagE==0)
					{
						gotoxy(51,16);
						SetColor(15);
						cout<<"Co";
						gotoxy(64,16);
						flagE=1;
						SetColor(0);
						cout<<"Khong";
					}
					if(cc==75 && flagE==1)
					{
						gotoxy(64,16);
						SetColor(15);
						cout<<"Khong";
						gotoxy(51,16);
						SetColor(0);
						cout<<"Co";
						flagE=0;
					}
				}
				if(c==13)
				{
					if(flagE==1)
						return 0;
					else
						return 1;
				}
				if(c==27)
					return 1;
			}
        }
        if (c>=49 && c<=53) //nhan phim so bat ky, di chuyen den dong lenh do
        {
            int y = wherey();
            int hang = 4*(c-48) - 4;
            gotoxy(3,y);
            MauCB();
            cout<<lt[y-5];
            gotoxy(3,hang+5);
            Mauchon();
            cout<<lt[hang];
        }
        if (c==-32) //neu nhan phim len thi di chuyen len, nhan phim xuong thi di chuyen xuong
        {
            c = getch();
            if (c == 72)
            {
                int y = wherey();
                if (y == 5) //neu dang o hang dau ma nhan phim len thi di chuyen xuong hang cuoi cung
                {
                    gotoxy(3,y);
                    MauCB();
                    cout<<lt[0];
                    gotoxy(3,21);
                    Mauchon();
                    cout<<lt[16];
                }
                else
                {
                    gotoxy(3,y);
                    MauCB();
                    cout<<lt[y-5];
                    gotoxy(3,y-4);
                    Mauchon();
                    cout<<lt[y-9];
                }
            }
            if (c==80)
            {
                int y = wherey();
                if (y == 21) //neu o hang cuoi ma di chuyen xuong thi dua con tro ve hang dau
                {
                    gotoxy(3,y);
                    MauCB();
                    cout<<lt[y-5];
                    gotoxy(3,5);
                    Mauchon();
                    cout<<lt[0];
                }
                else
                {
                    gotoxy(3,y);
                    MauCB();
                    cout<<lt[y-5];
                    gotoxy(3,y+4);
                    Mauchon();
                    cout<<lt[y-1];
                }
            }
        }
        if (c==13) //neu nhan phim ENTER
        {
            int y = wherey();
            if (y==5)
            {
                while (1)
                    if (Menu_Tinh_Vat_Tu(t) ==1 )break;
                return 0;
            }
            else if (y==9)
            {
                while (1)
                    if (Menu_NhanVien(ds_nv)==1) break;
                return 0;
            }
            else if (y==13)
            {
                while(1)
                	if (menu_hoadon(ds_nv ,t) ==1 ) break;
                return 0;
            }
            else if (y==17)
            {
				
                int nam;
                while (1) {
                    nam = NhapNam();
                    if (nam == -1) break; 
                    long long doanhThuThang[12] = {0}; 
                    ThongKeDoanhThu(ds_nv, nam, doanhThuThang);
                    if (VeBangThongKe(doanhThuThang, nam) == 0) break; 
                }
                return 0;
                
	
			    
            }
            else if (y==21)
            {
            	if(InTop10VatTu(ds_nv,t)==1) break;
            	return 0;
				

//    return 0;
//            	while(1)
//            	{	
//            		if (top10(t) ==1 )
//            		{
//            			break;
//					}
//
//				}
//				return 0;
            }
        }
    }
}

void SetConsoleWindowSize(int width, int height) {
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    SMALL_RECT rect = {0, 0, static_cast<SHORT>(width - 1), static_cast<SHORT>(height - 1)};
    SetConsoleWindowInfo(console, TRUE, &rect);

    COORD coord = {static_cast<SHORT>(width), static_cast<SHORT>(height)};
    SetConsoleScreenBufferSize(console, coord);
}
int main ()
{
	

	LIST_NHAN_VIEN ds_nv;
    TREE_VT t;
    initTree_VT(t);

	ds_nv.sl = 0 ; 
	    // Khoi tao tung phan tu trong ds_nv.ds
    for (int i = 0; i < MAXNV; ++i) {
        ds_nv.ds[i] = NULL; // Khoi tao tung con tro la nullptr de tranh loi khi giai phong
    }

    Doc_File_VT(t);
	Load_file_ds_nhan_vien(ds_nv);
	Load_file_ds_hoa_don(ds_nv);
	Load_file_ds_chi_tiet_hoa_don(ds_nv);
	
	
	
	while (1)
	{
		if (Menu_Chinh(ds_nv,t) == 1)
		{
			break;
		}
	}
	Ghi_File_VT(t);
	Luu_file_ds_nhan_vien(ds_nv);
	Luu_file_ds_hoa_don(ds_nv);
	Luu_file_ds_chi_tiet_hoa_don(ds_nv);
    GiaiPhongTree(t);
	GiaiPhongBoNho(ds_nv);



	return 0;
}
