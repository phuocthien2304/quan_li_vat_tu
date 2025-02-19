#include "NHANVIEN.h"
void khung_in_allhd()
{
	for (int i = 6; i <= 40; i++)
    {
        gotoxy(85, i);
        cout << "|";
        gotoxy(107, i);
        cout << "|"; // so hoa don
        gotoxy(119, i);
        cout << "|"; // ngay lap
        gotoxy(130, i);
        cout << "|"; // Loai hoa don
        gotoxy(160, i);
        cout << "|"; // Ho va ten nhan vien lap
        gotoxy(190, i);
        cout << "|"; // tri gia
    }
    for (int j = 85; j <= 190; j++)
    {
        gotoxy(j, 6);
        cout << "-";
        gotoxy(j, 8);
        cout << "-";
        gotoxy(j, 40);
        cout << "-";
    }
    gotoxy(86, 7);
    cout << "So hoa don";
    gotoxy(108, 7);
    cout << "Ngay lap";
    gotoxy(120, 7);
    cout << "Loai hd";
    gotoxy(131, 7);
    cout << "Ho va ten nhan vien";
    gotoxy(161, 7);
    cout << "Tri gia hoa don";
}
void khungthongke()
{
	SetColor(13);
    for (int i = 6; i <= 40; i++)
    {
        gotoxy(5, i);
        cout << "|";
        gotoxy(27, i);
        cout << "|"; // so hoa don
        gotoxy(39, i);
        cout << "|"; // ngay lap
        gotoxy(50, i);
        cout << "|"; // Loai hoa don
        gotoxy(80, i);
        cout << "|"; // Ho va ten nhan vien lap
        gotoxy(110, i);
        cout << "|"; // tri gia
    }
    for (int j = 5; j <= 110; j++)
    {
        gotoxy(j, 6);
        cout << "-";
        gotoxy(j, 8);
        cout << "-";
        gotoxy(j, 40);
        cout << "-";
    }
    gotoxy(22, 3);
    cout << "BANG KE CAC HOA DON TRONG KHOANG THOI GIAN";
    gotoxy(12, 4);
    cout << "Tu ngay: " ;
    gotoxy(36, 4);
    cout << "Den ngay: " ;
    gotoxy(6, 7);
    cout << "So hoa don";
    gotoxy(28, 7);
    cout << "Ngay lap";
    gotoxy(40, 7);
    cout << "Loai hd";
    gotoxy(51, 7);
    cout << "Ho va ten nhan vien";
    gotoxy(81, 7);
    cout << "Tri gia hoa don";
}
void khungcthd()
{
	for (int i = 6; i <= 40; i++)
    {
        gotoxy(5, i);
        cout << "|";
        gotoxy(10, i);
        cout << "|"; // stt
        gotoxy(20, i);
        cout << "|"; // ma vt
        gotoxy(50, i);
        cout << "|"; // ten vt
        gotoxy(60, i);
        cout << "|"; // so luong
        gotoxy(70, i);
        cout << "|"; // don gia
        gotoxy(80, i);
        cout << "|"; // thue
        gotoxy(110, i);
        cout << "|"; // tri gia
    }
    for (int j = 5; j <= 110; j++)
    {
        gotoxy(j, 6);
        cout << "-";
        gotoxy(j, 8);
        cout << "-";
        gotoxy(j, 40);
        cout << "-";
        gotoxy(j, 42);
        cout << "-";
    }
    gotoxy(5, 41);
    cout << "|";
    gotoxy(110, 41);
    cout << "|";
    gotoxy(22, 3);
    cout << "Hoa don so: ";
    gotoxy(12, 4);
    cout << "Loai phieu: ";
    gotoxy(32, 4);
    cout << "Ngay lap: " ;
    gotoxy(12, 5);
    cout << "Nhan vien :";
    gotoxy(6, 7);
    cout << "STT";
    gotoxy(12, 7);
    cout << "Ma vat tu";
    gotoxy(28, 7);
    cout << "Ten vat tu";
    gotoxy(52, 7);
    cout << "SL";
    gotoxy(62, 7);
    cout << "Don gia";
    gotoxy(72, 7);
    cout << "Thue (%)";
    gotoxy(82, 7);
    cout << "Tri gia sau thue";
    gotoxy(65, 41);
    cout << "Tong tri gia:";
}
void khung_menulap()
{
	SetColor(13);
            for (int i = 6; i <= 40; i++)
            {
                gotoxy(5, i);
                cout << "|";
                gotoxy(10, i);
                cout << "|"; // stt
                gotoxy(20, i);
                cout << "|"; // ma vt
                gotoxy(50, i);
                cout << "|"; // ten vt
                gotoxy(60, i);
                cout << "|"; // so luong
                gotoxy(70, i);
                cout << "|"; // don gia
                gotoxy(80, i);
                cout << "|"; // thue
                gotoxy(110, i);
                cout << "|"; // tri gia
            }
            for (int j = 5; j <= 110; j++)
            {
                gotoxy(j, 6);
                cout << "-";
                gotoxy(j, 8);
                cout << "-";
                gotoxy(j, 40);
                cout << "-";
                gotoxy(j, 42);
                cout << "-";
            }
            gotoxy(5, 41);
            cout << "|";
            gotoxy(110, 41);
            cout << "|";
            gotoxy(22, 3);
            cout << "Hoa don so: " ;
            gotoxy(12, 4);
            cout << "Loai phieu: ";
            gotoxy(32, 4);
            cout << "Ngay lap: "  ;
            gotoxy(12, 5);
            cout << "Nhan vien: ";
            gotoxy(6, 7);
            cout << "STT";
            gotoxy(12, 7);
            cout << "Ma vat tu";
            gotoxy(28, 7);
            cout << "Ten vat tu";
            gotoxy(52, 7);
            cout << "SL";
            gotoxy(62, 7);
            cout << "Don gia";
            gotoxy(72, 7);
            cout << "Thue";
            gotoxy(82, 7);
            cout << "Tri gia";
            gotoxy(6, 41);
            SetColor(15);
            cout << "Luu y: hoa don toi da 31 loai vat tu";
            gotoxy(65, 41);
            SetColor(13);
            cout << "Tong tri gia:";

            for (int ix = 113; ix <= 160; ix++)
            {
                gotoxy(ix, 30);
                cout << char(196);
                gotoxy(ix, 31);
                cout << " ";
                gotoxy(ix, 32);
                cout << char(196);
            }
            gotoxy(113, 31);
            cout << char(179);
            gotoxy(160, 31);
            cout << char(179);
            gotoxy(113, 30);
            cout << char(218);
            gotoxy(160, 30);
            cout << char(191);
            gotoxy(113, 32);
            cout << char(192);
            gotoxy(160, 32);
            cout << char(217);
            gotoxy(114, 31);
            cout << "Thong bao: ";
            // tao cac phim tac
            KhungNho(115, 4);
            SetColor(11);
            cout << "F10:Tra cuu ma vt";
            KhungNho(115, 8);
            SetColor(11);
            cout << "Them";
            KhungNho(115, 12);
            SetColor(11);
            cout << "Xoa";
            KhungNho(115, 16);
            SetColor(11);
            cout << "Hieu chinh";
            KhungNho(115, 20);
            SetColor(11);
            cout << "ESC: thoat";
            gotoxy(116, 5);
            Mauchon();
            cout << "F10: Tra cuu ma vt";
            MauCB();
}
void khung_menu()
{
	system("cls");
    KhungNho(3, 4);
    SetColor(11);
    cout << "===========HOA_DON==========";
    KhungNho(3, 8);
    SetColor(11);
    cout << "Lap hoa don.";
    KhungNho(3, 12);
    SetColor(11);
    cout << "Tra hang.";
    KhungNho(3, 16);
    SetColor(11);
    cout << "In hoa don.";
    KhungNho(3, 20);
    SetColor(11);
    cout << "Thong ke hoa don.";
    KhungNho(3, 24);
    SetColor(11);
    cout << "ESC: Thoat.";
    gotoxy(4, 9);
    Mauchon();
    cout << "Lap hoa don.";
    MauCB();
    gotoxy(4, 9);
}
void khunginlap()
{
	 system("cls");
    textcolor(112);
    for (int i = 3; i <= 18; i++)
    {
        for (int j = 50; j <= 120; j++)
        {
            gotoxy(j, i);
            cout << " ";
        }
    }
    textcolor(116);
    gotoxy(51, 4);
    cout << "So hoa don      : ";
    gotoxy(51, 6);
    cout << "Ngay            : ";
    gotoxy(51, 8);
    cout << "Thang           : ";
    gotoxy(51, 10);
    cout << "Nam             : ";
    gotoxy(51, 14);
    cout << "Ho&ten nhan vien: " ;
    gotoxy(51, 12);
    cout << "Loai            : ";
    for (int i = 70; i <= 100; i++)
    {
        for (int j = 4; j <= 12; j += 2)
        {
            textcolor(51);
            gotoxy(i, j);
            cout << " ";
        }
    }
    textcolor(116);
    for (int ix = 50; ix <= 120; ix++)
    {
        gotoxy(ix, 21);
        cout << char(196);
        gotoxy(ix, 22);
        cout << " ";
        gotoxy(ix, 23);
        cout << char(196);
    }
    gotoxy(50, 22);
    cout << char(179);
    gotoxy(120, 22);
    cout << char(179);
    gotoxy(50, 21);
    cout << char(218);
    gotoxy(120, 21);
    cout << char(191);
    gotoxy(50, 23);
    cout << char(192);
    gotoxy(120, 23);
    cout << char(217);
    gotoxy(51, 22);
    cout << "Thong bao: ";
    textcolor(119);
    for (int i = 50; i <= 120; i++)
    {
        for (int j = 27; j <= 30; j++)
        {
            gotoxy(i, j);
            cout << " ";
        }
    }
    SetColor(4);
    gotoxy(80, 27);
    cout << "~~NOTE~~";
    gotoxy(51, 28);
    cout << "So hoa don toi da 20 ki tu";
    gotoxy(51, 29);
    cout << " N-Nhap / X-Xuat";
}
void khungin()
{
	SetColor(13);
    for (int i = 6; i <= 40; i++)
    {
        gotoxy(5, i);
        cout << "|";
        gotoxy(10, i);
        cout << "|"; // stt
        gotoxy(20, i);
        cout << "|"; // ma vt
        gotoxy(50, i);
        cout << "|"; // ten vt
        gotoxy(60, i);
        cout << "|"; // so luong
        gotoxy(70, i);
        cout << "|"; // don gia
        gotoxy(80, i);
        cout << "|"; // thue
        gotoxy(100, i);
        cout << "|"; // tri gia
        gotoxy(111, i);
        cout << "|"; // trang thai
    }
    for (int j = 5; j <= 111; j++)
    {
        gotoxy(j, 6);
        cout << "-";
        gotoxy(j, 8);
        cout << "-";
        gotoxy(j, 40);
        cout << "-";
        gotoxy(j, 42);
        cout << "-";
    }
    gotoxy(5, 41);
    cout << "|";
    gotoxy(111, 41);
    cout << "|";
    gotoxy(22, 3);
    cout << "Hoa don so: " ;
    gotoxy(12, 4);
    cout << "Loai phieu: ";
    gotoxy(32, 4);
    cout << "Ngay lap: " ;
    gotoxy(12, 5);
    cout << "Nhan vien :";
    gotoxy(6, 7);
    cout << "STT";
    gotoxy(12, 7);
    cout << "Ma vat tu";
    gotoxy(28, 7);
    cout << "Ten vat tu";
    gotoxy(52, 7);
    cout << "SL";
    gotoxy(62, 7);
    cout << "Don gia";
    gotoxy(72, 7);
    cout << "Thue (%)";
    gotoxy(81, 7);
    cout << "Tri gia sau thue";
    gotoxy(101, 7);
    cout << "Trang thai";
    gotoxy(65, 41);
    cout << "Tong tri gia:";
    for (int ix = 113; ix <= 160; ix++)
    {
        gotoxy(ix, 30);
        cout << char(196);
        gotoxy(ix, 31);
        cout << " ";
        gotoxy(ix, 32);
        cout << char(196);
    }
    gotoxy(113, 31);
    cout << char(179);
    gotoxy(160, 31);
    cout << char(179);
    gotoxy(113, 30);
    cout << char(218);
    gotoxy(160, 30);
    cout << char(191);
    gotoxy(113, 32);
    cout << char(192);
    gotoxy(160, 32);
    cout << char(217);
    gotoxy(114, 31);
    cout << "Thong bao: ";
    KhungNho(115, 20);
    cout << "ESC : Thoat";
}

bool sosanhDate(const Date &d1, const Date &d2)
{
    if (d1.year < d2.year)
        return true;
    if (d1.year == d2.year && d1.month < d2.month)
        return true;
    if (d1.year == d2.year && d1.month == d2.month && d1.day < d2.day)
        return true;
    return false;
}
void bubblesort_hd(HoaDon  hoaDons[], int n)
{
    bool swapped;
    do
    {
        swapped = false;
        for (int i = 0; i < n - 1; ++i)
        {
            if (sosanhDate(hoaDons[i].ngaylap, hoaDons[i + 1].ngaylap))
            {
                swap(hoaDons[i], hoaDons[i + 1]);
                swapped = true;
            }
        }
    } while (swapped);
}

NV *tim_nv_theosohd(LIST_NHAN_VIEN ds_nv, string sohd)
{
    for (int i = 0; i < ds_nv.sl; i++)
    {
        NV *nv = ds_nv.ds[i];
        ptrhd hd = nv->dshd.head;
        while (hd != NULL)
        {
            if (hd->SoHD == sohd)
            {
                return nv;
            }
            hd = hd->hdnext;
        }
    }
    return NULL;
}

int tongsohoadon(LIST_NHAN_VIEN ds_nv)
{
    int index = 0;
    for (int i = 0; i < ds_nv.sl; i++)
    {
        ptrhd hd = ds_nv.ds[i]->dshd.head;
        while (hd != nullptr)
        {
            index++;
            hd = hd->hdnext;
        }
        
    }
    return index;
}


void thontintrang(int page, int pageQuantity, int x, int y) {
	textcolor(174);	gotoxy(x, y); cout << " Trang:        ";
	gotoxy(x + 8, y); cout << page << "/" << pageQuantity;
	gotoxy(x+18 , y); cout << "PAGE UP - PAGE DOWN";
	gotoxy(x,y+2); cout << "ENTER: nhap - ESC: thoat";
	textcolor(14);
  gotoxy(0,0);
}
void thontintrang_thongke(int page, int pageQuantity, int x, int y) {
	textcolor(174);	gotoxy(x, y); cout << " Trang:        ";
	gotoxy(x + 8, y); cout << page << "/" << pageQuantity;
	gotoxy(x+18 , y); cout << "PAGE UP - PAGE DOWN - ESC";
	textcolor(14);
  gotoxy(0,0);
}
int Xemhoadon(LIST_NHAN_VIEN ds_nv)
{
  system("cls");
  SetColor(15);
  int quantity = tongsohoadon(ds_nv);
    HoaDon allHoaDons[quantity];
    int count = 0;
    for (int i = 0; i < ds_nv.sl; i++)
    {
        ptrhd current = ds_nv.ds[i]->dshd.head;
        while (current != nullptr)
        {
            allHoaDons[count++] = *current;
           current = current->hdnext;
        }
    }
   bubblesort_hd(allHoaDons, quantity);
  int pageQuantity = (quantity - 1) / 31 + 1;
  int pageCurrent = 0;
  while (true)
  {int dem = 0;
  system("cls");
  khung_in_allhd();
    for (int i = pageCurrent * 31; i < (pageCurrent + 1) * 31 && i < quantity; i++)
    {
    	textcolor(12);
      
            gotoxy(86, dem+9);
            cout << allHoaDons[i].SoHD;
            gotoxy(108, dem+9);
            cout << allHoaDons[i].ngaylap.day << '/' << allHoaDons[i].ngaylap.month << '/' << allHoaDons[i].ngaylap.year;
            if (allHoaDons[i].loai == 'X')
            {
                gotoxy(122, dem+9);
                cout << "Xuat";
            }
            if (allHoaDons[i].loai == 'N')
            {
                gotoxy(122, dem+9);
                cout << "Nhap";
            }
            NV *nv = tim_nv_theosohd(ds_nv, allHoaDons[i].SoHD);
            gotoxy(132, dem+9);
            cout << nv->HO << ' ' << nv->TEN;
            unsigned tongtrigiahoadon = 0;
            ptrcthd currcthd = allHoaDons[i].dscthd.headCTHD;
            while (currcthd != NULL)
            {
                if (currcthd->Trangthai == 1)
                {

                    tongtrigiahoadon += (currcthd->Soluong * currcthd->Dongia) * (1 + (currcthd->VAT * 1.0 / 100));
                }
                currcthd = currcthd->ctnext;
            }
            gotoxy(162, dem+9);
            cout << tongtrigiahoadon;
            dem++;
    }
    SetColor(11);
    thontintrang(pageCurrent + 1, pageQuantity, 110, 42);
    while(!kbhit())
    Sleep(100);
    char key = getch(); 
    if (key == PAGE_UP  && pageCurrent < pageQuantity-1)
    {
      pageCurrent++;
    }

    else if (key == PAGE_DOWN && pageCurrent > 0)
    {
      pageCurrent--;
    }

    else if (key == ESC)
    {
      return 1 ;
    }
    else if ( key == 13)
    {
    	return 0;
}
  }
  }

int kiemtrangaytrahang(Date ngaylap)
{

    // Lay thoi gian he thong
    time_t now = time(0);
    // chuyen doi thoi gian he thong thanh cau truc tm
    tm *ltm = localtime(&now);
    // lay ngay , thang , nam cau truc tm
    int _day = ltm->tm_mday;
    int _month = 1 + ltm->tm_mon;    // tm_mon co gia tri 0-11 nen th?m 1
    int _year = 1900 + ltm->tm_year; // tm_year l? so nam ke tu  1900
    int dayhd = ngaylap.day;
    int monthhd = ngaylap.month;
    int yearhd = ngaylap.year;
    int hieu;
    if (yearhd != _year) // neu khac nam
    {
        hieu = _year - yearhd;
        if (hieu != 1) // 2 nam khong nam ke nhau
        {
            return 2;
        }
        hieu = (dayhd + monthhd) - (_day + _month); // 2 nam lien ke
        if (hieu > 41 or hieu < 39)
        {
            return 2;
        }
    }
    else
    {
        if (monthhd == _month)
        {
            hieu = _day - dayhd;
            if (hieu > 3)
            {
                return 2;
            }
        }
        else if (monthhd != _month)
        {
            if ((monthhd == 1 and _month == 2) or ((_month == 4 or _month == 6 or _month == 8 or _month == 9 or _month == 11) and monthhd == _month - 1))
            { //_month la nhung thang co thang truoc do co 31 ngay
                hieu = (monthhd + dayhd) - (_day + _month);
                if (hieu < 27 or hieu > 29)
                {
                    return 2;
                }
            }
            else if ((_month == 5 or _month == 7 or _month == 10 or _month == 12) and monthhd == _month - 1)
            { //_month la nhung thang co thang truoc do co 30 ngay
                if (hieu < 26 or hieu > 28)
                {
                    return 2;
                }
            }
            else if (monthhd == 2 and _month == 3)
            {
                if ((yearhd % 400 == 0) or (yearhd % 4 == 0 and yearhd % 100 != 0))
                {
                    hieu = (monthhd + dayhd) - (_day + _month);
                    if (hieu < 25 or hieu > 27)
                    {
                        return 2;
                    }
                }
                else
                {
                    hieu = (monthhd + dayhd) - (_day + _month);
                    if (hieu < 24 or hieu > 26)
                    {
                        return 2;
                    }
                }
            }
        }
    }
}
bool kiemtrangaythongke(Date ngaylap)
{
    if ((ngaylap.year % 400 == 0) or (ngaylap.year % 4 == 0 and ngaylap.year % 100 != 0)) // kiem tra nam nhuan
    {
    	if(ngaylap.month==2)
    	{
    		if(ngaylap.day <30)
    		{
    			return true;
			}
			else{
				return false;
			}
		}
		else if (ngaylap.month == 1 || ngaylap.month == 3 || ngaylap.month == 5 || ngaylap.month == 7 || ngaylap.month == 8 || ngaylap.month == 10 || ngaylap.month ==12)
		{
			if ( ngaylap.day <=31)
			{
				return true;
			}
			else return false;
		}
		else if( ngaylap.month == 4 || ngaylap.month == 6 || ngaylap.month == 9 || ngaylap.month == 11)
		{
			if (ngaylap.day <=30)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
    }
    else //  nam khong nhuan
    {
    	if(ngaylap.month == 2)
    	{
    		if(ngaylap.day<=28)
    		{
    			return true;
			}
			else {
		return false;	
			}
		}
		else if (ngaylap.month == 1 || ngaylap.month == 3 || ngaylap.month == 5 || ngaylap.month == 7 || ngaylap.month == 8 || ngaylap.month == 10 || ngaylap.month ==12)
		{
			if ( ngaylap.day <=31)
			{
				return true;
			}
			else return false;
		}
		else if( ngaylap.month == 4 || ngaylap.month == 6 || ngaylap.month == 9 || ngaylap.month == 11)
		{
			if (ngaylap.day <=30)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
    }
    
}
ptrhd timhoadon(LIST_NHAN_VIEN ds_nv, string sohd)
{
    for (int i = 0; i < ds_nv.sl; i++)
    {
        NV *nv = ds_nv.ds[i];
        ptrhd hd = nv->dshd.head;
        while (hd != NULL)
        {
            if (hd->SoHD == sohd)
            {
                return hd;
            }
            hd = hd->hdnext;
        }
    }
    return NULL;
}
bool Check_ton_tai_hd(LIST_NHAN_VIEN &ds_nv, string SoHD)
{
    for (int i = 0; i < ds_nv.sl; i++)
    {

        for (ptrhd p = ds_nv.ds[i]->dshd.head; p != NULL; p = p->hdnext)
        {
            if (p->SoHD == SoHD)
            {
                return true;
            }
        }
    }
    return false;
}
bool Check_ton_tai_mavt(LIST_NHAN_VIEN &ds_nv, string manv, string SoHD, string mavt)
{
    for (int i = 0; i < ds_nv.sl; i++)
    {
        if (ds_nv.ds[i]->MANV == manv)
        {
            for (ptrhd p = ds_nv.ds[i]->dshd.head; p != NULL; p = p->hdnext)
            {
                if (p->SoHD == SoHD)
                {
                    for (ptrcthd temp = p->dscthd.headCTHD; temp != NULL; temp = temp->ctnext)
                    {
                        if (temp->MAVT == mavt)
                        {
                            return true;
                        }
                    }
                }
            }
        }
    }
    return false;
}
ptrcthd timVTtronghoadon(LIST_NHAN_VIEN &ds_nv, string SoHD, string mavt)
{
    for (int i = 0; i < ds_nv.sl; i++)
    {

        for (ptrhd p = ds_nv.ds[i]->dshd.head; p != NULL; p = p->hdnext)
        {
            if (p->SoHD == SoHD)
            {
                for (ptrcthd temp = p->dscthd.headCTHD; temp != NULL; temp = temp->ctnext)
                {
                    if (temp->MAVT == mavt)
                    {
                        return temp;
                    }
                }
            }
        }
    }
    return NULL;
}
void Delete_cthd(LIST_NHAN_VIEN &ds_nv, string sohd, const string &MAVT)
{
    for (int i = 0; i < ds_nv.sl; ++i)
    {
        NV *nv = ds_nv.ds[i];
        ptrhd currentHD = nv->dshd.head;
        while (currentHD != NULL)
        {
            if (currentHD->SoHD == sohd)
            {

                ptrcthd currentCTHD = currentHD->dscthd.headCTHD;
                ptrcthd prevCTHD = NULL;
                while (currentCTHD != NULL)
                {
                    if (currentCTHD->MAVT == MAVT)
                    {
                        if (prevCTHD == NULL)
                        {
                            currentHD->dscthd.headCTHD = currentCTHD->ctnext;
                        }
                        else
                        {
                            prevCTHD->ctnext = currentCTHD->ctnext;
                        }
                        delete currentCTHD;
                        currentHD->dscthd.soluong--;
                        return;
                    }
                    prevCTHD = currentCTHD;
                    currentCTHD = currentCTHD->ctnext;
                }
            }
            currentHD = currentHD->hdnext;
        }
    }
}
void Delete_hd(LIST_NHAN_VIEN &ds_nv, string &sohd)
{
    for (int i = 0; i < ds_nv.sl; ++i)
    {
        NV *nv = ds_nv.ds[i];
        ptrhd currentHD = nv->dshd.head;
        ptrhd p = NULL;
        while (currentHD != NULL)
        {
            if (currentHD->SoHD == sohd)
            {
                if (p == NULL)
                {
                    nv->dshd.head = currentHD->hdnext;
                    delete currentHD;
                    nv->dshd.soluong--;
                    return;
                }
                else
                {
                    p->hdnext = currentHD->hdnext;
                    delete currentHD;
                    nv->dshd.soluong--;
                    return;
                }
            }
            p = currentHD;
            currentHD = currentHD->hdnext;
        }
    }
}
int inputSoHD(LIST_NHAN_VIEN &ds_nv, string &hd)
{
    bool ktrasohd = true;
    string result = "";
    int count = 0;
    int x = 70, y = 4;
    while (ktrasohd)
    {
        ktrasohd = false;
        textcolor(51);
        gotoxy(x, y);
        cout << string(30, ' ');
        gotoxy(x, y);
        result = "";
        count = 0;
        while (true)
        {
            SetColor(0);
            char c = _getch();
            if (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')) && count < 20)
            {
                if (c >= 'a' && c <= 'z')
                {
                    c = toupper(c);
                }
                result += c;
                cout << c;
                count++;
            }
            else if (c == '\b' && count > 0)
            {
                // Backspace
                cout << "\b \b";
                count--;
                result.erase(result.length() - 1, 1);
            }
            else if (c == 27)
            {
                return 1;
            }
            else if (c == '\r')
            { // Enter
                if (result.empty())
                {
                    ktrasohd = true;
                    break;
                }
                if (Check_ton_tai_hd(ds_nv, result))
                {
                    ktrasohd = true;
                    gotoxy(63, 22);
                    textcolor(116);
                    cout << "So hoa don da ton tai! Nhap lai!";
                    Sleep(1500);
                    gotoxy(63, 22);
                    textcolor(119);
                    cout << string(57, ' ');
                    break;
                }
                hd = result;
                return 0;
            }
        }
    }
}
int inputMAVT_xoa(LIST_NHAN_VIEN &ds_nv, string manv, string sohd, string &mavt, int x, int y)
{
    bool flag = true;
    string result = "";
    int count = 0;
    while (flag)
    {
        flag = false;
        SetColor(15);
        gotoxy(x, y);
        cout << string(10, ' ');
        gotoxy(x, y);
        result = "";
        count = 0;
        while (true)
        {
            char c = _getch();
            if (count == 0)
            {
                if (c == 13)
                    break;
            }
            if (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')) && count < 10)
            {
                if (c >= 'a' && c <= 'z')
                {
                    c = toupper(c);
                }
                result += c;
                cout << c;
                count++;
            }
            else if (c == '\b' && count > 0)
            {
                // Backspace
                cout << "\b \b";
                count--;
                result.erase(result.length() - 1, 1);
            }
            else if (c == 27)
            {
                return 1;
            }
            else if (c == '\r')
            { // Enter
                if (result.empty())
                {
                    flag = true;
                    break;
                }
                if (!Check_ton_tai_mavt(ds_nv, manv, sohd, result))
                {
                    flag = true;
                    gotoxy(125, 31);
                    cout << "Ma vat tu khong co trong hoa don!";
                    Sleep(1500);
                    gotoxy(125, 31);
                    cout << string(35, ' ');
                    break;
                }
                mavt = result;
                return 0;
            }
        }
    }
}
int inputMAVT_them(LIST_NHAN_VIEN &ds_nv, string manv, string sohd, string &mavt, int x, int y)
{
    bool flag = true;
    string result = "";
    int count = 0;
    while (flag)
    {
        flag = false;
        SetColor(15);
        gotoxy(x, y);
        cout << string(10, ' ');
        gotoxy(x, y);
        result = "";
        count = 0;
        while (true)
        {
            char c = _getch();
            if (count == 0)
            {
                if (c == 13)
                    break;
            }
            if (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')) && count < 10)
            {
                if (c >= 'a' && c <= 'z')
                {
                    c = toupper(c);
                }
                result += c;
                cout << c;
                count++;
            }
            else if (c == '\b' && count > 0)
            {
                // Backspace
                cout << "\b \b";
                count--;
                result.erase(result.length() - 1, 1);
            }
            else if (c == 27)
            {
                return 1;
            }
            else if (c == '\r')
            { // Enter
                if (result.empty())
                {
                    flag = true;
                    break;
                }
                if (Check_ton_tai_mavt(ds_nv, manv, sohd, result))
                {
                    flag = true;
                    gotoxy(125, 31);
                    cout << "Ma vat tu da co trong hoa don!";
                    Sleep(1500);
                    gotoxy(125, 31);
                    cout << string(30, ' ');
                    break;
                }
                mavt = result;
                return 0;
            }
        }
    }
}
int inputSoHD_in(LIST_NHAN_VIEN &ds_nv, string &sohd)
{
    bool ktrasohd = true;
    string result = "";
    int count = 0;
    int x = 56, y = 8;

    while (ktrasohd)
    {
        gotoxy(56, 8);
        for (int i = 1; i <= 20; i++)
        {
            textcolor(0);
            cout << " ";
        }
        ktrasohd = false;
        SetColor(15);
        gotoxy(x, y);
        result = "";
        count = 0;
        while (true)
        {
            char c = _getch();
            if (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')) && count < 20)
            {
                if (c >= 'a' && c <= 'z')
                {
                    c = toupper(c);
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
            { // Enter
                if (result.empty())
                {
                    ktrasohd = true;

                    break;
                }
                if (!Check_ton_tai_hd(ds_nv, result))
                {
                    for (int i = 35; i <= 80; i++)
                    {
                        for (int j = 11; j <= 15; j++)
                        {
                            textcolor(112);
                            gotoxy(i, j);
                            cout << " ";
                        }
                    }
                    gotoxy(40, 11);
                    cout << "So hoa don khong ton tai!";
                    gotoxy(40, 14);
                    cout << "Nhan ENTER de nhap lai!";
                    gotoxy(40, 15);
                    cout << "Nhan ESC de thoat!";
                    while (1)
                    {
                        while (!kbhit())
                            Sleep(100);
                        char key = getch();
                        if (key == 13)
                        {
                            ktrasohd = true;
                            for (int i = 35; i <= 80; i++)
                            {
                                for (int j = 11; j <= 15; j++)
                                {
                                    textcolor(0);
                                    gotoxy(i, j);
                                    cout << " ";
                                }
                            }
                            break;
                        }
                        else if (key == 27)
                        {
                            textcolor(0);
                            return 1;
                        }
                    }
                    break;
                }
                sohd = result;
                return 5;
            }
        }
    }
}
int inputSoHD_tra(LIST_NHAN_VIEN &ds_nv, string &sohd)
{
    bool ktrasohd = true;
    string result = "";
    int count = 0;
    int x = 56, y = 8;

    while (ktrasohd)
    {
        gotoxy(56, 8);
        for (int i = 1; i <= 20; i++)
        {
            textcolor(0);
            cout << " ";
        }
        ktrasohd = false;
        SetColor(15);
        gotoxy(x, y);
        result = "";
        count = 0;
        while (true)
        {
            char c = _getch();
            if (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')) && count < 20)
            {
                if (c >= 'a' && c <= 'z')
                {
                    c = toupper(c);
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
            { // Enter
                if (result.empty())
                {
                    ktrasohd = true;

                    break;
                }
                else if (!Check_ton_tai_hd(ds_nv, result))
                {
                    for (int i = 35; i <= 80; i++)
                    {
                        for (int j = 11; j <= 15; j++)
                        {
                            textcolor(112);
                            gotoxy(i, j);
                            cout << " ";
                        }
                    }
                    gotoxy(40, 11);
                    cout << "So hoa don khong ton tai!";
                    gotoxy(40, 14);
                    cout << "Nhan ENTER de nhap lai!";
                    gotoxy(40, 15);
                    cout << "Nhan ESC de thoat!";
                    while (1)
                    {
                        while (!kbhit())
                            Sleep(100);
                        char key = getch();
                        if (key == 13)
                        {
                            ktrasohd = true;
                            for (int i = 35; i <= 80; i++)
                            {
                                for (int j = 11; j <= 15; j++)
                                {
                                    textcolor(0);
                                    gotoxy(i, j);
                                    cout << " ";
                                }
                            }
                            break;
                        }
                        else if (key == 27)
                        {
                            textcolor(0);
                            return 1;
                        }
                    }
                    break;
                }
                else if (timhoadon(ds_nv, result)->loai == 'N')
                {
                    for (int i = 35; i <= 80; i++)
                    {
                        for (int j = 11; j <= 15; j++)
                        {
                            textcolor(112);
                            gotoxy(i, j);
                            cout << " ";
                        }
                    }
                    gotoxy(40, 11);
                    cout << "Hoa don nhap khong the tra!";
                    gotoxy(40, 14);
                    cout << "Nhan ENTER de nhap lai!";
                    gotoxy(40, 15);
                    cout << "Nhan ESC de thoat!";
                    while (1)
                    {
                        while (!kbhit())
                            Sleep(100);
                        char key = getch();
                        if (key == 13)
                        {
                            ktrasohd = true;
                            for (int i = 35; i <= 80; i++)
                            {
                                for (int j = 11; j <= 15; j++)
                                {
                                    textcolor(0);
                                    gotoxy(i, j);
                                    cout << " ";
                                }
                            }
                            break;
                        }
                        else if (key == 27)
                        {
                            textcolor(0);
                            return 1;
                        }
                    }
                    break;
                }
                
                sohd = result;
                return 5;
            }
        }
    }
}
int inputMANV(LIST_NHAN_VIEN &ds_nv, string &manv)
{
    bool ktrasohd = true;
    string result = "";
    int count = 0;
    int x = 136, y = 8;

    while (ktrasohd)
    {
        gotoxy(136, 8);
        for (int i = 1; i <= 20; i++)
        {
            textcolor(0);
            cout << " ";
        }
        ktrasohd = false;
        SetColor(15);
        gotoxy(x, y);
        result = "";
        count = 0;
        while (true)
        {
            char c = _getch();
            if (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')) && count < 5)
            {
                if (c >= 'a' && c <= 'z')
                {
                    c = toupper(c);
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
            { // Enter
                if (result.empty())
                {
                    ktrasohd = true;

                    break;
                }
                if (!ktra_trung_manv(result, ds_nv))
                {
                    for (int i = 115; i <= 160; i++)
                    {
                        for (int j = 11; j <= 15; j++)
                        {
                            textcolor(112);
                            gotoxy(i, j);
                            cout << " ";
                        }
                    }
                    gotoxy(128, 11);
                    cout << "Ma nhan vien khong ton tai!";
                    gotoxy(120, 14);
                    cout << "Nhan ENTER de nhap lai!";
                    gotoxy(120, 15);
                    cout << "Nhan ESC de thoat!";
                    while (1)
                    {
                        while (!kbhit())
                            Sleep(100);
                        char key = getch();
                        if (key == 13)
                        {
                            ktrasohd = true;
                            for (int i = 115; i <= 160; i++)
                            {
                                for (int j = 11; j <= 15; j++)
                                {
                                    textcolor(0);
                                    gotoxy(i, j);
                                    cout << " ";
                                }
                            }
                            break;
                        }
                        else if (key == 27)
                        {
                            textcolor(0);
                            return 1;
                        }
                    }
                    break;
                }
                manv = result;
                return 5;
            }
        }
    }
}
int inputloai(char &loai)
{
nhaploai:
    string result = "";
    int count = 0;
    SetColor(0);
    while (true)
    {
        char c = getch();
        if ((c == 'x' || c == 'n' || c == 'N' || c == 'X') && count < 1)
        {
            if (c == 'x' || c == 'n')
            {
                c = toupper(c);
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
                goto nhaploai;
            }
            loai = result[0];
            return 5;
        }
    }
}
int inputvat(uint &vat)
{
nhapvat:
    string result = "";
    int count = 0;
    SetColor(15);
    while (true)
    {
        char c = getch();
        if (c >= '0' && c <= '9' && count < 2)
        {
            if (result.empty() == 1)
            {
                if (c == '0')
                {
                    goto nhapvat;
                }
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
                goto nhapvat;
            }
            vat = stoi(result);
            return 5;
        }
    }
}
int inputsoluong(uint &soluong)
{
nhapsoluong:
    string result = "";
    int count = 0;
    SetColor(15);
    while (true)
    {
        char c = getch();
        if (c >= '0' && c <= '9' && count < 10)
        {
            if (result.empty() == 1)
            {
                if (c == '0')
                {
                    goto nhapsoluong;
                }
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
                goto nhapsoluong;
            }
            soluong = stoi(result);
            return 5;
        }
    }
}

int inputngay(int &day, int x, int y)
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
int inputthang(int &month, int x, int y)
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
int inputnam(int &year, int x, int y)
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
bool isWithinRange(const Date &date, const Date &startDate, const Date &endDate)
{
    return !sosanhDate(date, startDate) && !sosanhDate(endDate, date);
}
int thongkehoadon(Date startDate, Date endDate, LIST_NHAN_VIEN &ds_nv)
{
	system("cls");
	SetColor(15);
	int index = tongsohoadon(ds_nv);
	int a = 0;

    for (int i = 0; i < ds_nv.sl; i++)
    {
        ptrhd current = ds_nv.ds[i]->dshd.head;
        while (current != nullptr)
        {
            if(isWithinRange(current->ngaylap,startDate , endDate))
    	{
    		a ++;
		}
           current = current->hdnext;
        }
    }
    HoaDon allHoaDons[a]; // cach hay hon la tao 1 struct temp luu ca ho va ten nhan vien va tonggiatri cua hoa don vo;
    int count = 0 ; 
    for (int i = 0 ; i < ds_nv.sl;i++)
    {
    	ptrhd curr = ds_nv.ds[i]->dshd.head;
    	while(curr!=nullptr)
    	{ if(isWithinRange(curr->ngaylap,startDate , endDate))
    	{
    		allHoaDons[count++] = *curr;
		}
    		curr = curr->hdnext;
		}
	}
    bubblesort_hd(allHoaDons, a);
	int quantity = a;
	int pageQuantity = (quantity-1)/31+1;
	int pageCurrent = 0;
	
	while(true)
	{
		int dem = 0 ;
		system("cls");
		khung_in_allhd();
		for (int i = pageCurrent*31;i<(pageCurrent+1)*31 && i < a; i++)
		{
			if (isWithinRange(allHoaDons[i].ngaylap,startDate,endDate))
			{
				gotoxy(86, dem+9);
            cout << allHoaDons[i].SoHD;
            gotoxy(108, dem+9);
            cout << allHoaDons[i].ngaylap.day << '/' << allHoaDons[i].ngaylap.month << '/' << allHoaDons[i].ngaylap.year;
            if (allHoaDons[i].loai == 'X')
            {
                gotoxy(122, dem+9);
                cout << "Xuat";
            }
            if (allHoaDons[i].loai == 'N')
            {
                gotoxy(122, dem+9);
                cout << "Nhap";
            }
            NV *nv = tim_nv_theosohd(ds_nv, allHoaDons[i].SoHD);
            gotoxy(132, dem+9);
            cout << nv->HO << ' ' << nv->TEN;
            unsigned long long tongtrigiahoadon = 0;
            ptrcthd currcthd = allHoaDons[i].dscthd.headCTHD;
            while (currcthd != NULL)
            {
                if (currcthd->Trangthai == 1)
                {

                    tongtrigiahoadon += (currcthd->Soluong * currcthd->Dongia) * (1 + (currcthd->VAT * 1.0 / 100));
                }
                currcthd = currcthd->ctnext;
            }
            gotoxy(162, dem+9);
            cout << tongtrigiahoadon;
            dem++;
			}
		}
			SetColor(11);
    thontintrang_thongke(pageCurrent + 1, pageQuantity, 110, 42);
    while(!kbhit())
    Sleep(100);
    char key = getch(); 
    if (key == PAGE_UP  && pageCurrent < pageQuantity-1)
    {
      pageCurrent++;
    }
    else if (key == PAGE_DOWN && pageCurrent > 0)
    {
      pageCurrent--;
    }
    else if (key == ESC)
    {
      return 1 ;
    }
	}
	
}
void ThemVatTuVaoHoaDon(LIST_NHAN_VIEN &ds_nv, string sohd, CTHoaDon cthd)
{
    for (int i = 0; i < ds_nv.sl; i++) // Duyet qua ds nhan vien
    {
        ptrhd p = ds_nv.ds[i]->dshd.head;
        while (p != NULL)
        {
            if (sohd == p->SoHD)
            {
                ptrcthd newCTHD = new CTHoaDon;
                *newCTHD = cthd;
                newCTHD->ctnext = NULL;
                if (p->dscthd.headCTHD == NULL)
                {
                    p->dscthd.headCTHD = newCTHD;
                    p->dscthd.soluong++;
                    return;
                }
                else
                {
                    ptrcthd current = p->dscthd.headCTHD;
                    while (current->ctnext != NULL)
                    {
                        current = current->ctnext;
                    }
                    current->ctnext = newCTHD;
                    p->dscthd.soluong++;
                    return;
                }
            }
            p = p->hdnext;
        }
    }
}
void LapHoaDon(LIST_NHAN_VIEN &ds_nv, string manv, HoaDon hd)
{
    NV *nv = NULL;
    for (int i = 0; i < ds_nv.sl; i++)
    {
        if (ds_nv.ds[i]->MANV == manv)
        {
            nv = ds_nv.ds[i];
        }
    }
    if (nv != NULL)
    {
        ptrhd newHD = new HoaDon;
        *newHD = hd;
        newHD->hdnext = nv->dshd.head;
        nv->dshd.head = newHD;
        nv->dshd.soluong++;
        return;
    }
}
void Load_file_ds_hoa_don(LIST_NHAN_VIEN &ds_nv)
{
    ifstream filein;
    filein.open("hoadon.txt", ios::in);

    if (!filein.is_open())
    {
        cout << "Loi khi mo tep." << endl;
        return;
    }
    string line;
    while (getline(filein, line))
    {
        stringstream ss(line);
        string manv;
        HoaDon hd;
        getline(ss, manv, '@');
        getline(ss, hd.SoHD, '@');
        ss >> hd.ngaylap.day;
        ss.ignore();
        ss >> hd.ngaylap.month;
        ss.ignore();
        ss >> hd.ngaylap.year;
        ss.ignore();
        ss >> hd.loai;
        LapHoaDon(ds_nv, manv, hd);
    }
    filein.close();
}
void Luu_file_ds_hoa_don(LIST_NHAN_VIEN &ds_nv)
{
    ofstream fileout;
    fileout.open("hoadon.txt", ios_base::out); // Thay d?i du?ng d?n t?p tuong ?ng

    if (!fileout.is_open())
    {
        cout << "Loi khi mo tep." << endl;
        return;
    }
    for (int i = 0; i < ds_nv.sl; i++)
    {
        for (ptrhd p = ds_nv.ds[i]->dshd.head; p != NULL; p = p->hdnext)
        {
            fileout << ds_nv.ds[i]->MANV << '@';
            fileout << p->SoHD << '@';
            fileout << p->ngaylap.day << '/';
            fileout << p->ngaylap.month << '/';
            fileout << p->ngaylap.year << '@';
            fileout << p->loai << '\n';
        }
    }
    fileout.close();
}
void Load_file_ds_chi_tiet_hoa_don(LIST_NHAN_VIEN &ds_nv)
{
    ifstream filein;
    filein.open("chitiethoadon.txt", ios::in);

    if (!filein.is_open())
    {
        cout << "Loi khi mo tep." << endl;
        return;
    }
    string line;
    while (getline(filein, line))
    {
        stringstream ss(line);
        CTHoaDon cthd;
        string sohd;
        getline(ss, sohd, '@');
        getline(ss, cthd.MAVT, '@');
        ss >> cthd.Soluong;
        ss.ignore();
        ss >> cthd.Dongia;
        ss.ignore();
        ss >> cthd.VAT;
        ss.ignore();
        ss >> cthd.Trangthai;
        ThemVatTuVaoHoaDon(ds_nv, sohd, cthd);
    }
    filein.close();
}
void Luu_file_ds_chi_tiet_hoa_don(LIST_NHAN_VIEN &ds_nv)
{
    ofstream fileout;
    fileout.open("chitiethoadon.txt", ios_base::out); // Thay doi duong dan tep tuong duong
    if (!fileout.is_open())
    {
        cout << "Loi khi mo tep." << endl;
        return;
    }
    for (int i = 0; i < ds_nv.sl; i++)
    {
        ptrhd p = ds_nv.ds[i]->dshd.head;
        while (p != NULL)
        {
            ptrcthd currcthd = p->dscthd.headCTHD;
            while (currcthd != NULL)
            {
                fileout << p->SoHD << '@';
                fileout << currcthd->MAVT << '@';
                fileout << currcthd->Soluong << '@';
                fileout << currcthd->Dongia << '@';
                fileout << currcthd->VAT << '@';
                fileout << currcthd->Trangthai << '\n';
                currcthd = currcthd->ctnext;
            }
            p = p->hdnext;
        }
    }
    fileout.close();
}
void Luu_all(LIST_NHAN_VIEN &ds_nv , TREE_VT &t)
{
	Luu_file_ds_nhan_vien(ds_nv);
	Luu_file_ds_hoa_don(ds_nv);
	Luu_file_ds_chi_tiet_hoa_don(ds_nv);
	Ghi_File_VT(t);
}
int In_DS_NV(LIST_NHAN_VIEN ds_nv)
{
	MauNenNormal();
	clrscr();
	gotoxy(16, 1);
	SetColor(2);
	cout << "~~~DANH SACH NHAN VIEN~~~";
	SetColor(BLACK);
	MauNenNormal();
		
	int nDS = ds_nv.sl;
	int choose;
	
	Sap_xep_nv_theo_Ten_Ho(ds_nv);

	MauNenNormal();

	// thu tu trang
	int tttrang, tongtrang;
	tttrang = 1;
	tongtrang = (nDS/NUMBER_LINES) + 1;
	
	label1:
	Xoa_1_Vung(79, yDisplay, 30, 53);
	DisplayNV(keyDisplayNV, 5, xDisplayDSNV);
//	Sap_Xep_NV_Name(ds_nv);
	OutputNV_PerPage(ds_nv, tttrang);

	int kb_hit;
	int currposMainMenu = -1;
	int nKey=6;
    do
    {
        if (_kbhit())
		{
			kb_hit = _getch();
			if (kb_hit == 224 || kb_hit == 0)
				kb_hit = _getch();
			switch(kb_hit)
			{
			case PAGE_UP:
				(tttrang > 1) ? tttrang-- : tttrang = tongtrang;
				OutputNV_PerPage(ds_nv,tttrang);
				break;
			
			case PAGE_DOWN:
				(tttrang < tongtrang) ? tttrang++ : tttrang = 1;
				OutputNV_PerPage(ds_nv,tttrang);
				break;
			case ESC: return 1 ;
			case ENTER: return -1;
			}	
		}
	gotoxy(3,yHotkey+2);
	SetColor(2);

	cout<<"Trang "<<tttrang<<" /"<<tongtrang<<"  "<<"PagUP-Trang Truoc, PagDn-Trang Sau";
	
	gotoxy(3, yHotkey );
	SetColor(2);
	cout << "So luong nhan vien : " << ds_nv.sl ;
	gotoxy(3,yHotkey+4); cout << "ENTER: de nhap ma nhan vien - ESC: thoat";
    }while (true);
}
int menu_laphoadon(LIST_NHAN_VIEN &ds_nv, TREE_VT &t)
{
    if(In_DS_NV(ds_nv)==1){
    	return 1;
	}
	ShowCur(true);
    for (int i = 115; i <= 160; i++)
    {
        for (int j = 7; j <= 9; j++)
        {
            textcolor(112);
            gotoxy(i, j);
            cout << " ";
        }
    }
    gotoxy(116, 8);
    cout << "Nhap ma nhan vien: ";
nhapmanv:
    gotoxy(136, 8);
    for (int i = 1; i <= 20; i++)
    {
        textcolor(0);
        cout << " ";
    }
    SetColor(7);
    gotoxy(136, 8);
    string manv;
    NV *nv;
    if (inputMANV(ds_nv, manv) == 1)
    {
        return 1;
    }
    for (int i = 0; i < ds_nv.sl; i++)
    {
        if (manv == ds_nv.ds[i]->MANV)
        {
            nv = ds_nv.ds[i];
            break;
        }
    }
    khunginlap();
    textcolor(51);
    SetColor(0);
     gotoxy(70,14) ; cout << nv->HO << " " << nv->TEN;
    HoaDon hd;
    inputSoHD(ds_nv, hd.SoHD);
    // Lay thoi gian he thong
    time_t now = time(0);
    // chuyen doi thoi gian he thong thanh cau truc tm
    tm *ltm = localtime(&now);
    // lay ngay , thang , nam cau truc tm
    hd.ngaylap.day = ltm->tm_mday;
    hd.ngaylap.month = 1 + ltm->tm_mon; // tm_mon co gia tri 0-11 nen th?m 1
    hd.ngaylap.year = 1900 + ltm->tm_year;
    gotoxy(70, 6);
    cout << hd.ngaylap.day;
    gotoxy(70, 8);
    cout << hd.ngaylap.month;
    gotoxy(70, 10);
    cout << hd.ngaylap.year;
    gotoxy(70, 12);
    if (inputloai(hd.loai) == 1)
    {
        textcolor(0);
        return 1;
    }
    SetColor(4);
    textcolor(4);
    gotoxy(3, 40);
    cout << "ESC: thoat - ENTER: them vat tu vao hoa don";
    while (1)
    {
        while (!kbhit())
            Sleep(100);
        char key = getch();
        if (key == 27)
        {
            return 1;
        }
        else if (key == 13)
        {
            gotoxy(63, 22);
            textcolor(116);
            cout << " SUCCESSFULLY !!!!";
            Sleep(1000);
            SetColor(4);
            textcolor(4);
            LapHoaDon(ds_nv, nv->MANV, hd);
        themvattu:
            system("cls");
            ptrhd temp = nv->dshd.head;
            while (temp != NULL)
            {
                if (temp->SoHD == hd.SoHD)
                {

                    SetColor(15);
                    unsigned long long trigia = 0;
                    unsigned long long tongtrigia = 0;
                    int y = 9;
                    int STT = 0;
                    ptrcthd p = temp->dscthd.headCTHD;
                    while (p != NULL)
                    {
                        STT++;
                        gotoxy(7, y);
                        cout << STT;
                        gotoxy(12, y);
                        cout << p->MAVT;
                        gotoxy(21,y);
                        TREE_VT hoa = find_VT(t ,p->MAVT);
                        cout << hoa->VT.ten;
                        gotoxy(52, y);
                        cout << p->Soluong;
                        gotoxy(62, y);
                        cout << p->Dongia;
                        gotoxy(72, y);
                        cout << p->VAT;
                        trigia = (p->Soluong * p->Dongia) * (1 + (p->VAT * 1.0 / 100));
                        gotoxy(82, y);
                        cout << trigia;
                        tongtrigia += trigia;
                        gotoxy(80, 41);
                        cout << tongtrigia;
                        y++;
                        p = p->ctnext;
                    }
                    break;
                }
                temp = temp->hdnext;
            }
            khung_menulap();
             gotoxy(35,3); cout<< hd.SoHD;
            gotoxy(25 , 4);
            if (hd.loai == 'X')
            {
                cout << "Xuat";
            }
            else
            {
                cout << "Nhap";
            }
             gotoxy(42,4); cout<< hd.ngaylap.day << '/' << hd.ngaylap.month << '/' << hd.ngaylap.year;
              gotoxy(25,5); cout  << nv->HO << ' ' << nv->TEN;
            gotoxy(116, 5);
            while (1)
            {
                while (!kbhit())
                    Sleep(100);
                key = getch();
                if (key == -32)
                {
                    key = getch();
                    int y = wherey();
                    if (key == 72 or key == 75)
                    {
                        if (y == 5)
                        {
                            MauCB();
                            cout << "F10: Tra cuu ma vt";
                            gotoxy(116, 21);
                            Mauchon();
                            cout << "ESC: Thoat";
                            MauCB();
                            gotoxy(116, 21);
                        }
                        else if (y == 9)
                        {
                            MauCB();
                            cout << "Them";
                            gotoxy(116, 5);
                            Mauchon();
                            cout << "F10: Tra cuu ma vt";
                            MauCB();
                            gotoxy(116, 5);
                        }
                        else if (y == 13)
                        {
                            MauCB();
                            cout << "Xoa";
                            gotoxy(116, 9);
                            Mauchon();
                            cout << "Them";
                            MauCB();
                            gotoxy(116, 9);
                        }
                        else if (y == 17)
                        {
                            MauCB();
                            cout << "Hieu chinh";
                            gotoxy(116, 13);
                            Mauchon();
                            cout << "Xoa";
                            MauCB();
                            gotoxy(116, 13);
                        }
                        else if (y == 21)
                        {
                            MauCB();
                            cout << "ESC: thoat";
                            gotoxy(116, 17);
                            Mauchon();
                            cout << "Hieu chinh";
                            MauCB();
                            gotoxy(116, 17);
                        }
                    }
                    else if (key == 0 || key == 224)
                    {
                        key = getch();
                        if (key == 68)
                        {
                        }
                    }
                    else if (key == 80 or key == 77)
                    {
                        if (y == 5)
                        {
                            MauCB();
                            cout << "F10: Tra cuu ma vt";
                            gotoxy(116, 9);
                            Mauchon();
                            cout << "Them";
                            MauCB();
                            gotoxy(116, 9);
                        }
                        else if (y == 9)
                        {
                            MauCB();
                            cout << "Them";
                            gotoxy(116, 13);
                            Mauchon();
                            cout << "Xoa";
                            MauCB();
                            gotoxy(116, 13);
                        }
                        else if (y == 13)
                        {
                            MauCB();
                            cout << "Xoa";
                            gotoxy(116, 17);
                            Mauchon();
                            cout << "Hieu chinh";
                            MauCB();
                            gotoxy(116, 17);
                        }
                        else if (y == 17)
                        {
                            MauCB();
                            cout << "Hieu chinh";
                            gotoxy(116, 21);
                            Mauchon();
                            cout << "ESC: thoat";
                            MauCB();
                            gotoxy(116, 21);
                        }
                        else if (y == 21)
                        {
                            MauCB();
                            cout << "ESC: Thoat";
                            gotoxy(116, 5);
                            Mauchon();
                            cout << "F10: Tra cuu ma vt";
                            MauCB();
                            gotoxy(116, 5);
                        }
                    }
                }
                else if (key == 13)
                {
                    int y = wherey();
                    if (y == 5) // nhap ten de tim ma vat tu
                    {         	                      
						In_Danh_Sach_VT(t);
                        goto themvattu;
                    }
                    else if (y == 9) // them vat tu vao hoa don
                    {
                        for (int i = 115; i <= 160; i++)
                        {
                            for (int j = 6; j <= 15; j++)
                            {
                                textcolor(112);
                                gotoxy(i, j);
                                cout << " ";
                            }
                        }
                        textcolor(112);
                        gotoxy(116, 7);
                        cout << "Ma vat tu : ";
                        gotoxy(116, 9);
                        cout << "So luong : ";
                        gotoxy(116, 11);
                        cout << "Don gia : ";
                        gotoxy(116, 13);
                        cout << "VAT : ";
                        for (int iy = 7; iy <= 13; iy += 2)
                        {
                            gotoxy(127, iy);
                            for (int i = 1; i <= 32; i++)
                            {

                                textcolor(0);
                                cout << " ";
                            }
                        }
                        SetColor(7);
                        CTHoaDon cthd;
                        if (inputMAVT_them(ds_nv, manv, hd.SoHD, cthd.MAVT, 127, 7) == 1)
                        {
                            goto themvattu;
                        }
                        gotoxy(127, 9);
                        TREE_VT c = find_VT(t, cthd.MAVT);
                        if (c == NULL)
                        {
                            gotoxy(125, 31);
                            SetColor(15);
                            cout << "Ma vat tu khong ton tai!";
                            Sleep(1500);
                            gotoxy(125, 31);
                            cout << string(35, ' ');
                            textcolor(0);
                            goto themvattu;
                        }
                        if (inputsoluong(cthd.Soluong) == 1)
                        {
                            goto themvattu;
                        }
                        if ( (hd.loai == 'X') )
                        {
						    if (c->VT.so_luong_ton < cthd.Soluong)
                            {
						
                                gotoxy(125, 31);
                            	SetColor(15);
                            	cout << "So luong ton chi con :   " << c->VT.so_luong_ton;
                            	Sleep(1500);
                            	gotoxy(125, 31);
                            	cout << string(35, ' ');
                            	textcolor(0);
                            	goto themvattu;
                        	}
                        
                            	
						}
						
                        gotoxy(127, 11);
                        if (inputsoluong(cthd.Dongia) == 1)
                        {
                             goto themvattu;
                        }
                        gotoxy(127, 13);
                        if (inputvat(cthd.VAT) == 1)
                        {
                             goto themvattu;
                        }
                        if (hd.loai == 'X')
                        {
                        	c->VT.so_luong_ton -= cthd.Soluong;
					    }
					    else if(hd.loai == 'N'){
							c->VT.so_luong_ton += cthd.Soluong;
						}
						c->VT.trong_hoa_don++;
                        ThemVatTuVaoHoaDon(ds_nv, hd.SoHD, cthd);
                        gotoxy(125, 31);
                        SetColor(15);
                        cout << "SUCCESSFULLY !!!!";
                        Sleep(1500);
                        gotoxy(125, 31);
                        cout << string(35, ' ');
                        Luu_all(ds_nv,t);
                        goto themvattu;
                    }
                    else if (y == 13)
                    {
                        for (int i = 115; i <= 160; i++)
                        {
                            for (int j = 11; j <= 13; j++)
                            {
                                textcolor(112);
                                gotoxy(i, j);
                                cout << " ";
                            }
                        }
                        gotoxy(116, 12);
                        cout << "Nhap mavt xoa: ";
                        gotoxy(140, 12);
                        for (int i = 1; i <= 15; i++)
                        {
                            textcolor(0);
                            cout << " ";
                        }
                        SetColor(7);
                        gotoxy(141, 12);
                        string mavtxoa;
                        if (inputMAVT_xoa(ds_nv, manv, hd.SoHD, mavtxoa, 141, 12) == 1)
                        {
                            goto themvattu;
                        }
                        for (int i = 110; i <= 140; i++)
                        {
                            for (int j = 11; j <= 15; j++)
                            {
                                textcolor(119);
                                gotoxy(i, j);
                                cout << " ";
                            }
                        }
                        SetColor(0);
                        gotoxy(111, 12);
                        cout << "Ban co chac chan muon xoa?";

                        gotoxy(130, 14);
                        cout << "Khong";
                        Mauchon();
                        gotoxy(111, 14);
                        cout << "Co";
                        SetColor(0);
                        gotoxy(111, 14);
                        while (1)
                        {
                            while (!kbhit())
                                Sleep(100);
                            key = getch();
                            if (key == -32)
                            {
                                key = getch();
                                int x = wherex();
                                if (key == 77)
                                {

                                    if (x == 111)
                                    {
                                        SetColor(0);
                                        cout << "Co";
                                        Mauchon();
                                        gotoxy(130, 14);
                                        cout << "Khong";
                                        gotoxy(130, 14);
                                    }
                                }
                                else if (key == 75)
                                {

                                    if (x == 130)
                                    {
                                        SetColor(0);
                                        cout << "Khong";
                                        Mauchon();
                                        gotoxy(111, 14);
                                        cout << "Co";
                                        gotoxy(111, 14);
                                    }
                                }
                            }
                            else if (key == 13)
                            {
                                int x = wherex();
                                if (x == 130)
                                {
                                    textcolor(0);
                                    goto themvattu;
                                }
                                else if (x == 111)
                                {
                                    ptrcthd timvt = timVTtronghoadon(ds_nv, hd.SoHD, mavtxoa);
                                    TREE_VT tree = find_VT(t , mavtxoa);
                                    if (hd.loai == 'X'){
									tree->VT.so_luong_ton +=timvt->Soluong;
									}
									else if(hd.loai =='N')
									{
										tree->VT.so_luong_ton -=timvt->Soluong;
									}
									tree->VT.trong_hoa_don--;
                                    Delete_cthd(ds_nv, hd.SoHD, mavtxoa);
                                    gotoxy(125, 31);
                                    SetColor(15);
                                    cout << "SUCCESSFULLY !!!!";
                                    Sleep(1500);
                                    gotoxy(125, 31);
                                    cout << string(35, ' ');
                                    textcolor(0);
                                    Luu_all(ds_nv , t);
                                    goto themvattu;
                                }
                            }
                        }
                    }
                    else if (y == 17)
                    {
                        for (int i = 115; i <= 160; i++)
                        {
                            for (int j = 11; j <= 13; j++)
                            {
                                textcolor(112);
                                gotoxy(i, j);
                                cout << " ";
                            }
                        }
                        gotoxy(116, 12);
                        cout << "Nhap mavt hieu chinh: ";
                        gotoxy(140, 12);
                        for (int i = 1; i <= 15; i++)
                        {
                            textcolor(0);
                            cout << " ";
                        }
                        SetColor(7);
                        CTHoaDon cthd;
                        if (inputMAVT_xoa(ds_nv, manv, hd.SoHD, cthd.MAVT, 141, 12) == 1)
                        {
                            goto themvattu;
                        }
                        for (int i = 115; i <= 160; i++)
                        {
                            for (int j = 14; j <= 23; j++)
                            {
                                textcolor(112);
                                gotoxy(i, j);
                                cout << " ";
                            }
                        }

                        textcolor(112);
                        gotoxy(116, 16);
                        cout << "Ma vat tu : ";
                        gotoxy(116, 18);
                        cout << "So luong : ";
                        gotoxy(116, 20);
                        cout << "Don gia : ";
                        gotoxy(116, 22);
                        cout << "VAT : ";
                        for (int iy = 16; iy <= 22; iy += 2)
                        {
                            gotoxy(127, iy);
                            for (int i = 1; i <= 32; i++)
                            {

                                textcolor(0);
                                cout << " ";
                            }
                        }
                        ptrhd temp = nv->dshd.head;
                        while (temp != NULL)
                        {
                            if (temp->SoHD == hd.SoHD)
                            {
                                SetColor(7);
                                ptrcthd p = temp->dscthd.headCTHD;
                                while (p != NULL)
                                {
                                    if (p->MAVT == cthd.MAVT)
                                    {
                                        gotoxy(127, 16);
                                        cout << p->MAVT;
                                        gotoxy(127, 18);
                                        cout << p->Soluong;
                                        gotoxy(127, 20);
                                        cout << p->Dongia;
                                        gotoxy(127, 22);
                                        cout << p->VAT;
                                        break;
                                    }
                                    p = p->ctnext;
                                }
                                break;
                            }
                            temp = temp->hdnext;
                        }

                        gotoxy(159, 18);
                        while (1)
                        {
                            while (!kbhit())
                                Sleep(100);
                            char a = getch();
                            if (a == '\b')
                            {
                                gotoxy(127, 18);
                                for (int i = 1; i <= 32; i++)
                                {
                                    textcolor(0);
                                    cout << " ";
                                }
                                gotoxy(127, 18);
                                if (inputsoluong(cthd.Soluong) == 1)
                                {
                                     goto themvattu;
                                }
                                else
                                {
                                    break;
                                }
                            }

                            else if (a == -32)
                            {
                                a = getch();
                                if (a == 80)
                                {
                                    break;
                                }
                            }
                            else if (a == 13)
                            {
                                break;
                            }
                        }
                        TREE_VT f = find_VT(t , cthd.MAVT);
                        if (f->VT.so_luong_ton < cthd.Soluong)
                        {
                            gotoxy(125, 31);
                            SetColor(15);
                            cout << "So luong ton chi con :   " << f->VT.so_luong_ton;
                            Sleep(1500);
                            gotoxy(125, 31);
                            cout << string(35, ' ');
                            textcolor(0);
                            goto themvattu;
                        }
                        gotoxy(159, 20);
                        while (1)
                        {
                            while (!kbhit())
                                Sleep(100);
                            char b = getch();
                            if (b == '\b')
                            {

                                gotoxy(127, 20);
                                for (int i = 1; i <= 32; i++)
                                {
                                    textcolor(0);
                                    cout << " ";
                                }
                                gotoxy(127, 20);
                                if (inputsoluong(cthd.Dongia) == 1)
                                {
                                     goto themvattu;
                                }
                                else
                                {
                                    break;
                                }
                                
                            }
                            else if (b == -32)
                            {
                                b = getch();
                                if (b == 80)
                                {
                                    break;
                                }
                            }
                            else if (b == 13)
                            {
                                break;
                            }
                        }
                        gotoxy(159, 22);
                        while (1)
                        {
                            while (!kbhit())
                                Sleep(100);
                            char c = getch();
                            if (c == '\b')
                            {

                                gotoxy(127, 22);
                                for (int i = 1; i <= 32; i++)
                                {
                                    textcolor(0);
                                    cout << " ";
                                }
                                gotoxy(127, 22);
                                if (inputvat(cthd.VAT) == 1)
                                {
                                     goto themvattu;
                                }
                                else
                                {
                                    break;
                                }
                            }
                            else if (c == -32)
                            {
                                c = getch();
                                if (c == 80)
                                {
                                    break;
                                }
                            }
                            else if (c == 13)
                            {
                                break;
                            }
                        }
                        for (int i = 110; i <= 140; i++)
                        {
                            for (int j = 11; j <= 15; j++)
                            {
                                textcolor(119);
                                gotoxy(i, j);
                                cout << " ";
                            }
                        }
                        SetColor(0);
                        gotoxy(111, 12);
                        cout << "Ban co chac chan hieu chinh?";

                        gotoxy(130, 14);
                        cout << "Khong";
                        Mauchon();
                        gotoxy(111, 14);
                        cout << "Co";
                        SetColor(0);
                        gotoxy(111, 14);
                        while (1)
                        {
                            while (!kbhit())
                                Sleep(100);
                            key = getch();
                            if (key == -32)
                            {
                                key = getch();
                                int x = wherex();
                                if (key == 77)
                                {

                                    if (x == 111)
                                    {
                                        SetColor(0);
                                        cout << "Co";
                                        Mauchon();
                                        gotoxy(130, 14);
                                        cout << "Khong";
                                        gotoxy(130, 14);
                                    }
                                }
                                else if (key == 75)
                                {

                                    if (x == 130)
                                    {
                                        SetColor(0);
                                        cout << "Khong";
                                        Mauchon();
                                        gotoxy(111, 14);
                                        cout << "Co";
                                        gotoxy(111, 14);
                                    }
                                }
                            }
                            else if (key == 13)
                            {
                                int x = wherex();
                                if (x == 130)
                                {
                                    textcolor(0);
                                    goto themvattu;
                                }
                                else if (x == 111)
                                {
                                    ptrcthd timvt = timVTtronghoadon(ds_nv, hd.SoHD, cthd.MAVT);
                                    ptrhd curr = nv->dshd.head;
                                    while (curr != NULL)
                                    {
                                        if (curr->SoHD == hd.SoHD)
                                        {
                                            SetColor(7);
                                            ptrcthd q = curr->dscthd.headCTHD;
                                            while (q != NULL)
                                            {
                                                TREE_VT a = find_VT(t, cthd.MAVT);
                                                a->VT.so_luong_ton = a->VT.so_luong_ton + q->Soluong - cthd.Soluong;
                    
                                                q->Soluong = cthd.Soluong;
                                                q->Dongia = cthd.Dongia;
                                                q->VAT = cthd.VAT;
                                                break;
                                            }
                                            q = q->ctnext;
                                        }
                                        break;
                                    }
                                    curr = curr->hdnext;
                                }
                                gotoxy(125, 31);
                                SetColor(15);
                                cout << "SUCCESSFULLY !!!!";
                                Sleep(1500);
                                gotoxy(125, 31);
                                cout << string(35, ' ');
                                textcolor(0);
                                Luu_all(ds_nv , t);
                                goto themvattu;
                            }
                        }
                    }
                    else if (y == 21)
                    {

                        if (timhoadon(ds_nv, hd.SoHD)->dscthd.headCTHD == NULL )
                        {
                            Delete_hd(ds_nv, hd.SoHD);
                        }
                        Luu_all(ds_nv , t);
                        return 1;
                    }
                }
                else if( key == 0 || key == 224 )
                {
                	key = getch();
                	if ( key == 68 )
                	{
                		In_Danh_Sach_VT(t);
                		goto themvattu;
					}
				}
                else if (key == 27)
                {
                    if (timhoadon(ds_nv, hd.SoHD)->dscthd.headCTHD == NULL)
                    {
                        Delete_hd(ds_nv, hd.SoHD);
                    }
                    Luu_all(ds_nv , t);
                    return 1;
                }
            }
        }
    }
}
int menu_trahang(LIST_NHAN_VIEN &ds_nv, TREE_VT &t)
{
	tra:
    if (Xemhoadon(ds_nv)==1)
    {return 1;
	}
	
    SetColor(0);
    for (int i = 35; i <= 80; i++)
    {
        for (int j = 7; j <= 9; j++)
        {
            textcolor(112);
            gotoxy(i, j);
            cout << " ";
        }
    }
    gotoxy(36, 8);
    cout << "Nhap ma hoa don: ";
nhap:
    gotoxy(56, 8);
    for (int i = 1; i <= 20; i++)
    {
        textcolor(0);
        cout << " ";
    }
    string sohd;
    int a = inputSoHD_tra(ds_nv, sohd);
    if (a == 1)
    {
        goto tra;
    }
    NV *nv = tim_nv_theosohd(ds_nv, sohd);
    ptrhd hd = timhoadon(ds_nv, sohd);
    if (kiemtrangaytrahang(hd->ngaylap) == 2)
    {
        for (int i = 35; i <= 80; i++)
        {
            for (int j = 11; j <= 15; j++)
            {
                textcolor(112);
                gotoxy(i, j);
                cout << " ";
            }
        }
        gotoxy(40, 11);
        cout << "Het han thoi gian tra hang!";
        gotoxy(40, 14);
        cout << "Nhan ENTER de nhap lai!";
        gotoxy(40, 15);
        cout << "Nhan ESC de thoat!";
        while (1)
        {
            while (!kbhit())
                Sleep(100);
            char key = getch();
            if (key == 13)
            {
                for (int i = 35; i <= 80; i++)
                {
                    for (int j = 11; j <= 15; j++)
                    {
                        textcolor(0);
                        gotoxy(i, j);
                        cout << " ";
                    }
                }
                goto nhap;
            }
            else if (key == 27)
            {
                textcolor(0);
                Luu_all(ds_nv,t);
                return 1;
            }
        }
    }
trahang:
    system("cls");
    SetColor(13);
    khungin();
    gotoxy(34, 3);
    cout << hd->SoHD;
    gotoxy(23, 4);
    if (nv->dshd.head->loai == 'X')
    {
        cout << "Xuat";
    }
    else
    {
        cout << "Nhap";
    }
    gotoxy(42, 4);
    cout << hd->ngaylap.day << '/' << hd->ngaylap.month << '/' << hd->ngaylap.year;
    gotoxy(24, 5);
    cout << nv->HO << ' ' << nv->TEN;
    gotoxy(6, 7);
    for (int i = 115; i <= 160; i++)
    {
        for (int j = 11; j <= 13; j++)
        {
            textcolor(112);
            gotoxy(i, j);
            cout << " ";
        }
    }
    gotoxy(116, 12);
    cout << "Nhap mavt tra: ";
    textcolor(0);
    SetColor(15);
    unsigned long long trigia = 0;
    unsigned long long tongtrigia = 0;
    int y = 9;
    int STT = 0;
    ptrcthd p = hd->dscthd.headCTHD;
    while (p != NULL)
    {
        STT++;
        gotoxy(7, y);
        cout << STT;
        gotoxy(12, y);
        cout << p->MAVT;
        gotoxy(21,y);
        TREE_VT hoa = find_VT(t ,p->MAVT);
        cout << hoa->VT.ten;
        gotoxy(52, y);
        cout << p->Soluong;
        gotoxy(62, y);
        cout << p->Dongia;
        gotoxy(72, y);
        cout << p->VAT;
        trigia = (p->Soluong * p->Dongia) * (1 + (p->VAT * 1.0 / 100));
        gotoxy(82, y);
        cout << trigia;
        gotoxy(103, y);
        if (p->Trangthai == 1)
        {
            tongtrigia += trigia;
        }
        else
        {
            cout << "Da tra";
        }
        gotoxy(80, 41);
        cout << tongtrigia;
        y++;
        p = p->ctnext;
    }
    while (1)
    {
        gotoxy(140, 12);
        for (int i = 1; i <= 15; i++)
        {
            textcolor(0);
            cout << " ";
        }
        gotoxy(125, 31);
        SetColor(15);
        cout << "An phim bat ky de nhap ma";

        while (!kbhit())
            Sleep(100);
        char key = getch();
        if (key == 27)
        {
            return 1;
        }
        else
        {
        input:
            gotoxy(125, 31);
            cout << string(35, ' ');
            textcolor(0);
            SetColor(7);
            string mavt;
            if (inputMAVT_xoa(ds_nv, nv->MANV, hd->SoHD, mavt, 141, 12) == 1)
            {
                return 1;
            }
            ptrcthd curr = hd->dscthd.headCTHD;
            while (curr != NULL)
            {
                if (curr->MAVT == mavt)
                {
                    if (curr->Trangthai == 0)
                    {
                        gotoxy(125, 31);
                        SetColor(5);
                        cout << "Ma vat tu nay da tra !";
                        Sleep(1500);
                        gotoxy(125, 31);
                        cout << string(35, ' ');
                        textcolor(0);
                        goto input;
                    }
                }
                curr = curr->ctnext;
            }

            for (int i = 110; i <= 140; i++)
            {
                for (int j = 11; j <= 15; j++)
                {
                    textcolor(119);
                    gotoxy(i, j);
                    cout << " ";
                }
            }
            SetColor(0);
            gotoxy(111, 12);
            cout << "Ban co chac chan muon tra hang?";
            gotoxy(130, 14);
            cout << "Khong";
            Mauchon();
            gotoxy(111, 14);
            cout << "Co";
            SetColor(0);
            gotoxy(111, 14);
            while (1)
            {
                while (!kbhit())
                    Sleep(100);
                key = getch();
                if (key == -32)
                {
                    key = getch();
                    int x = wherex();
                    if (key == 77)
                    {

                        if (x == 111)
                        {
                            SetColor(0);
                            cout << "Co";
                            Mauchon();
                            gotoxy(130, 14);
                            cout << "Khong";
                            gotoxy(130, 14);
                        }
                    }
                    else if (key == 75)
                    {

                        if (x == 130)
                        {
                            SetColor(0);
                            cout << "Khong";
                            Mauchon();
                            gotoxy(111, 14);
                            cout << "Co";
                            gotoxy(111, 14);
                        }
                    }
                }
                else if (key == 13)
                {
                    int x = wherex();
                    if (x == 130)
                    {
                        textcolor(0);
                        goto trahang;
                    }
                    else if (x == 111)
                    {

                        ptrcthd temp = hd->dscthd.headCTHD;
                        while (temp != NULL)
                        {
                            if (temp->MAVT == mavt)
                            {
                                TREE_VT cay=find_VT(t , mavt);
                                cay->VT.so_luong_ton+=temp->Soluong;
                            
                                temp->Trangthai = 0;
                            }
                            temp = temp->ctnext;
                        }
                        gotoxy(125, 31);
                        SetColor(15);
                        cout << "SUCCESSFULLY !!!!";
                        Sleep(1500);
                        gotoxy(125, 31);
                        cout << string(35, ' ');
                        textcolor(0);
                        Luu_all(ds_nv , t);
                        goto trahang;
                    }
                }
            }
        }
    }
}

int menu_inhoadon(LIST_NHAN_VIEN ds_nv ,TREE_VT t)
{
	in:
    if(Xemhoadon(ds_nv)==1)
	{
		return 1;
	}
    SetColor(0);
    for (int i = 35; i <= 80; i++)
    {
        for (int j = 7; j <= 9; j++)
        {
            textcolor(112);
            gotoxy(i, j);
            cout << " ";
        }
    }
    gotoxy(36, 8);
    cout << "Nhap ma hoa don: ";
    gotoxy(56, 8);
    for (int i = 1; i <= 20; i++)
    {
        textcolor(0);
        cout << " ";
    }
    string sohd;
    int a = inputSoHD_in(ds_nv, sohd);
    if (a == 1)
    {
        goto in;
    }
    NV *nv = tim_nv_theosohd(ds_nv, sohd);
    ptrhd hd = timhoadon(ds_nv, sohd);
    system("cls");
    SetColor(13);
    khungin();
    gotoxy(35, 3);
    cout << hd->SoHD;
    gotoxy(24, 4);
    if (hd->loai == 'X')
    {
        cout << "Xuat";
    }
    else
    {
        cout << "Nhap";
    }
    gotoxy(43, 4);
    cout << hd->ngaylap.day << '/' << hd->ngaylap.month << '/' << hd->ngaylap.year;
    gotoxy(25, 5);
    cout << nv->HO << ' ' << nv->TEN;
    SetColor(15);
    unsigned long long trigia = 0;
    unsigned long long tongtrigia = 0;
    int y = 9;
    int STT = 0;
    ptrcthd p = hd->dscthd.headCTHD;
    while (p != NULL)
    {
        STT++;
        gotoxy(7, y);
        cout << STT;
        gotoxy(12, y);
        cout << p->MAVT;
        gotoxy(21,y);
        TREE_VT hoa = find_VT(t ,p->MAVT);
        cout << hoa->VT.ten;
        gotoxy(52, y);
        cout << p->Soluong;
        gotoxy(62, y);
        cout << p->Dongia;
        gotoxy(72, y);
        cout << p->VAT;
        trigia = (p->Soluong * p->Dongia) * (1 + (p->VAT * 1.0 / 100));
        gotoxy(82, y);
        cout << trigia;
        gotoxy(103 , y);
        if (p->Trangthai == 1)
        {
            tongtrigia += trigia;
        }
        else
        {
        	cout << "Da tra";
		}
        gotoxy(80, 41);
        cout << tongtrigia;
        y++;
        p = p->ctnext;
    }
    while(1)
    {
    	while (!kbhit())
            Sleep(100);
        char key = getch();
        if (key == 27)
        {
            goto in;
        }
	}
	
}

int menu_thongke(LIST_NHAN_VIEN &ds_nv)
{
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
    if (inputngay(truoc.day, 42, 12) == 1)
    {
        return 1;
    }
    if (inputthang(truoc.month, 55, 12) == 1)
    {
        return 1;
    }
    if (inputnam(truoc.year, 65, 12) == 1)

    {
        return 1;
    }
    if(kiemtrangaythongke(truoc)==false)
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
    if (inputngay(sau.day, 92, 12) == 1)

    {
        return 1;
    }
    if (inputthang(sau.month, 105, 12) == 1)

    {
        return 1;
    }

    if (inputnam(sau.year, 115, 12) == 1)
    {
        return 1;
    }
    if (kiemtrangaythongke(sau)==false)
    {
    	SetColor(15);
        gotoxy(70, 15);
        cout << "Ban nhap khong hop le!";
        Sleep(1000);
        gotoxy(70, 15);
        cout << "                      ";
    	goto inputsau;
	}
    if (sosanhDate(truoc, sau) == false)
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

    thongkehoadon(truoc, sau, ds_nv);
}

int menu_hoadon(LIST_NHAN_VIEN &DSNV, TREE_VT &t)
{
menu_hd:
    khung_menu();
    while (1)
    {
        while (!kbhit())
            Sleep(100);
        char key = getch();
        if (key == -32)
        {
            key = getch();
            int y = wherey();
            if (key == 72 or key == 75)
            {
                if (y == 9)
                {
                    MauCB();
                    cout << "Lap hoa don.";
                    gotoxy(4, 21);
                    Mauchon();
                    cout << "Thong ke hoa don.";
                    MauCB();
                    gotoxy(4, 21);
                }
                else if (y == 21)
                {
                    MauCB();
                    cout << "Thong ke hoa don.";
                    gotoxy(4, 17);
                    Mauchon();
                    cout << "In hoa don.";
                    MauCB();
                    gotoxy(4, 17);
                }
                else if (y == 17)
                {
                    MauCB();
                    cout << "In hoa don.";
                    gotoxy(4, 13);
                    Mauchon();
                    cout << "Tra hang.";
                    MauCB();
                    gotoxy(4, 13);
                }
                else if (y == 13)
                {
                    MauCB();
                    cout << "Tra hang.";
                    gotoxy(4, 9);
                    Mauchon();
                    cout << "Lap hoa don.";
                    MauCB();
                    gotoxy(4, 9);
                }
            }
            else if (key == 80 or key == 77)
            {
                int y = wherey();
                if (y == 9)
                {
                    MauCB();
                    cout << "Lap hoa don.";
                    Mauchon();
                    gotoxy(4, 13);
                    cout << "Tra hang.";
                    gotoxy(4, 13);
                }
                else if (y == 13)
                {
                    MauCB();
                    cout << "Tra hang.";
                    Mauchon();
                    gotoxy(4, 17);
                    cout << "In hoa don.";
                    gotoxy(4, 17);
                }
                else if (y == 17)
                {
                    MauCB();
                    cout << "In hoa don.";
                    Mauchon();
                    gotoxy(4, 21);
                    cout << "Thong ke hoa don.";
                    gotoxy(4, 21);
                }
                else if (y == 21)
                {
                    MauCB();
                    cout << "Thong ke hoa don.";
                    Mauchon();
                    gotoxy(4, 9);
                    cout << "Lap hoa don.";
                    gotoxy(4, 9);
                }
            }
        }
        else if (key == 13)
        {
            int y = wherey();
            if (y == 9) // Lap hoa don.
            {
                int a = menu_laphoadon(DSNV, t);
                if (a == 1)
                {
                    goto menu_hd;
                }
            }
            else if (y == 13) // Tra hang : user nhap vao so hoa don.
            // Liet ke ra cac vat tu trong hoa don de chon. Thoi han 3 ngay tro lai.
            {
                int a = menu_trahang(DSNV, t);
                if (a == 1)
                {
                    goto menu_hd;
                }
            }
            else if (y == 17) // In hoa don dua vao so hoa don nhap vao.
            {
                int a = menu_inhoadon(DSNV , t);
                if (a == 1)
                {
                    goto menu_hd;
                }
            }
            else if (y == 21) // Thong ke cac hoa doan trong khoang thoi gian duoc nhap vao.
            {
                int a = menu_thongke(DSNV);
                if (a == 1)
                {
                    goto menu_hd;
                }
            }
        }
        else if (key == 27)
        {
            return 1;
        }
    }
}

void XoaBangInHoaDon() {
    // Xác d?nh t?a d? và kích thu?c c?a b?ng in hóa don d? xóa vùng này
    int xStart = 80; // T?a d? X b?t d?u c?a b?ng hóa don
    int yStart = 8;  // T?a d? Y b?t d?u c?a b?ng hóa don
    int width = 100; // Chi?u r?ng c?a b?ng hóa don
    int height = 32; // Chi?u cao c?a b?ng hóa don

    for (int y = yStart; y < yStart + height; y++) {
        gotoxy(xStart, y);
        for (int x = 0; x < width; x++) {
            cout << ' ';
        }
    }
}
int XemNVCOHD(LIST_NHAN_VIEN ds_nv, string choice) {
    
    int flag = 0;
    SetColor(15);
    int quantity = tongsohoadon(ds_nv);
    HoaDon* allHoaDons = new HoaDon[quantity];
    int count = 0;

    for (int i = 0; i < ds_nv.sl; i++) {
        if (ds_nv.ds[i]->MANV == choice) {
            ptrhd current = ds_nv.ds[i]->dshd.head;
            while (current != nullptr) {
                allHoaDons[count++] = *current;
                current = current->hdnext;
            }
            flag = 1;
            break;
        }
    }

    if (flag == 0) {
        SetColor(4);
        cout << "Không tìm th?y nhân viên v?i mã này!";
        Sleep(2000);
        delete[] allHoaDons;
        return 0;
    }

    bubblesort_hd(allHoaDons, count);
    int pageQuantity = (count - 1) / 31 + 1;
    int pageCurrent = 0;

    while (true) {
        int dem = 0;
        system("cls");
        khung_in_allhd();

        for (int i = pageCurrent * 31; i < (pageCurrent + 1) * 31 && i < count; i++) {
            textcolor(12);
            gotoxy(86, dem + 9);
            cout << allHoaDons[i].SoHD;
            gotoxy(108, dem + 9);
            cout << allHoaDons[i].ngaylap.day << '/' << allHoaDons[i].ngaylap.month << '/' << allHoaDons[i].ngaylap.year;

            if (allHoaDons[i].loai == 'X') {
                gotoxy(122, dem + 9);
                cout << "Xuat";
            } else if (allHoaDons[i].loai == 'N') {
                gotoxy(122, dem + 9);
                cout << "Nhap";
            }

            NV* nv = tim_nv_theosohd(ds_nv, allHoaDons[i].SoHD);
            gotoxy(132, dem + 9);
            cout << nv->HO << ' ' << nv->TEN;

            unsigned tongtrigiahoadon = 0;
            ptrcthd currcthd = allHoaDons[i].dscthd.headCTHD;
            while (currcthd != nullptr) {
                if (currcthd->Trangthai == 1) {
                    tongtrigiahoadon += (currcthd->Soluong * currcthd->Dongia) * (1 + (currcthd->VAT * 1.0 / 100));
                }
                currcthd = currcthd->ctnext;
            }

            gotoxy(162, dem + 9);
            cout << tongtrigiahoadon;
            dem++;
        }

        SetColor(11);
        thontintrang(pageCurrent + 1, pageQuantity, 110, 42);

        while (!kbhit())
            Sleep(100);

        char key = getch();
        if (key == PAGE_UP && pageCurrent < pageQuantity - 1) {
            pageCurrent++;
        } else if (key == PAGE_DOWN && pageCurrent > 0) {
            pageCurrent--;
        } else if (key == ESC) {
            delete[] allHoaDons;
             Xoa_1_Vung(80, 8, 32, 100); // Clear invoice table area
            return 1;
            }
//        } else if (key == 13) {
//            delete[] allHoaDons;
//            return 0;
//        }
    }

    delete[] allHoaDons;
    return 0;
}


void Menu_NV(LIST_NHAN_VIEN &ds_nv) {
    MauNenNormal();
    clrscr();
    gotoxy(65, 1);
    SetColor(GREEN);
    cout << "~~~CAP NHAT NHAN VIEN~~~ ";
    MauNenNormal();

    int nDS = ds_nv.sl;
    int choose;
    NV *nv;

    Sap_xep_nv_theo_Ten_Ho(ds_nv);

    MauNenNormal();

    int tttrang, tongtrang;
    tttrang = 1;
    tongtrang = (nDS / NUMBER_LINES) + 1;

    

    
label1:
	SetColor(GREEN);
    Box_Original(41.5, 35.5, 76, 4);
	
	Menu_Nhan_Vien(keymenu_nhan_vien, 5);
    Xoa_1_Vung(79, yDisplay, 30, 53);
    DisplayNV(keyDisplayNV, 5, xDisplayDSNV);
    OutputNV_PerPage(ds_nv, tttrang);

    int kb_hit;
    int currposMainMenu = -1;
    int nKey = 5;
    do {
        if (_kbhit()) {
            kb_hit = _getch();
            if (kb_hit == 224 || kb_hit == 0)
                kb_hit = _getch();
            switch (kb_hit) {
            case PAGE_UP:
                (tttrang > 1) ? tttrang-- : tttrang = tongtrang;
                OutputNV_PerPage(ds_nv, tttrang);
                break;
            case PAGE_DOWN:
                (tttrang < tongtrang) ? tttrang++ : tttrang = 1;
                OutputNV_PerPage(ds_nv, tttrang);
                break;
            case KEY_F2:
                nv = new NV;
                if (nv == NULL)
                    goto label1;
                ADD_NV(ds_nv, nv, false);
                goto label1;
            case KEY_F3:
                choose = ChooseItems_NV(ds_nv, tttrang, tongtrang);
                if (choose > ds_nv.sl - 1 || choose < 0)
                    goto label1;
                if (Check_sohd_nv(ds_nv.ds[choose]) != 0) {
                    Thong_bao_OK("Nhan vien da lap hoa don!", "Thong bao");
                } else {
                    ADD_NV(ds_nv, ds_nv.ds[choose], true);
                    goto label1;
                }
                break;
            case KEY_F4:
                choose = ChooseItems_NV(ds_nv, tttrang, tongtrang);
                if (choose > ds_nv.sl - 1 || choose < 0)
                    goto label1;
                if (Check_sohd_nv(ds_nv.ds[choose]) != 0) {
                    Thong_bao_OK("Nhan vien da lap hoa don!", "Thong bao");
                } else if (ShowConfirmationDialog()) {
                    Delete_NV(choose, ds_nv);
                    Luu_file_ds_nhan_vien(ds_nv);
                    Thong_bao_OK("Xoa thanh cong!", "Thong bao");
                } else {
                    Thong_bao_OK("Xoa khong thanh cong!", "Thong bao");
                }
                goto label1;
            case ESC:
                return;
            case KEY_LEFT:
                if (currposMainMenu > 0) {
                    currposMainMenu = currposMainMenu - 1;
                } else {
                    currposMainMenu = nKey - 2;
                }
                EffectiveMenu_Nhan_Vien(currposMainMenu, 2);
                break;
            case KEY_RIGHT:
                if (currposMainMenu < nKey - 2) {
                    currposMainMenu = currposMainMenu + 1;
                } else {
                    currposMainMenu = 0;
                }
                EffectiveMenu_Nhan_Vien(currposMainMenu, 1);
                break;
            case ENTER:
                switch (currposMainMenu) {
                case 0:
                    nv = new NV;
                    if (nv == NULL)
                        goto label1;
                    ADD_NV(ds_nv, nv, false);
                    goto label1;
                case 1:
                    choose = ChooseItems_NV(ds_nv, tttrang, tongtrang);
                    if (choose > ds_nv.sl - 1 || choose < 0)
                        goto label1;
                    if (Check_sohd_nv(ds_nv.ds[choose]) != 0) {
                        Thong_bao_OK("Nhan vien da lap hoa don!", "Thong bao");
                    } else {
                        ADD_NV(ds_nv, ds_nv.ds[choose], true);
                        goto label1;
                    }
                    break;
                case 2:
                    choose = ChooseItems_NV(ds_nv, tttrang, tongtrang);
                    if (choose > ds_nv.sl - 1 || choose < 0)
                        goto label1;
                    if (Check_sohd_nv(ds_nv.ds[choose]) != 0) {
                        Thong_bao_OK("Nhan vien da lap hoa don!", "Thong bao");
                    } else if (ShowConfirmationDialog()) {
                        Delete_NV(choose, ds_nv);
                        Luu_file_ds_nhan_vien(ds_nv);
                        Thong_bao_OK("Xoa thanh cong!", "Thong bao");
                    } else {
                        Thong_bao_OK("Xoa khong thanh cong!", "Thong bao");
                    }
                    goto label1;
                case 3:
                    choose = ChooseItems_NV(ds_nv, tttrang, tongtrang);
                    if (choose > ds_nv.sl - 1 || choose < 0)
                        goto label1;
                    
                    
                    if (XemNVCOHD(ds_nv, ds_nv.ds[choose]->MANV) == 1) {
                    	system("cls");
                        goto label1;
                    }
                    break;
                
                }
                break;
            }
        }

        gotoxy(3, 39);
        SetColor(2);
        cout << "ESC : THOAT ";
        gotoxy(3, 37);
        SetColor(2);
        cout << "Trang " << tttrang << " / " << tongtrang;
        gotoxy(3, yHotkey);
        SetColor(GREEN);
        cout << "So luong nhan vien: " << ds_nv.sl;

    } while (true);
}


int Menu_NhanVien(LIST_NHAN_VIEN &ds_nv) {
	
    NV *nv;
    gotoxy(35,4);
    SetColor(2);
    cout << "~~~~MENU NHAN VIEN~~~~";
    MauCB();
    system("CLS");
    Khoitao_Menu_NhanVien();
    string lt[6];
    lt[0] = "1. Cap nhat nhan vien.";
    lt[3] = "2. In danh sach nhan vien.";
    gotoxy(3, 4);
    Mauchon();
    cout << lt[0];
    while (1) {
        while (!kbhit())
            Sleep(100);
        char c = getch();
        if (c == 27) { // Neu nhan ESC
            KhungExit(45, 13);
            int flagE = 0;
            while (1) {
                while (!kbhit()) Sleep(100);
                char kk = getch();
                if (kk == -32) {
                    char cc = getch();
                    if (cc == 77 && flagE == 0) {
                        gotoxy(51, 16);
                        SetColor(15);
                        cout << "Co";
                        gotoxy(64, 16);
                        flagE = 1;
                        SetColor(0);
                        cout << "Khong";
                    }
                    if (cc == 75 && flagE == 1) {
                        gotoxy(64, 16);
                        SetColor(15);
                        cout << "Khong";
                        gotoxy(51, 16);
                        SetColor(0);
                        cout << "Co";
                        flagE = 0;
                    }
                }
                if (kk == 13) {
                    if (flagE == 1)
                        return 0;
                    if (flagE == 0) {
                        Luu_file_ds_nhan_vien(ds_nv);
                        return 1;
                    }
                }
                if (kk == 27) {
                    Luu_file_ds_nhan_vien(ds_nv);
                    return 1;
                }
            }
        }
        if (c >= 49 && c <= 50) { // Nhan phím so 1-2
            int y = wherey();
            int hang = 3 * (c - 48) + 1;
            gotoxy(3, y);
            MauCB();
            cout << lt[(y - 4) / 3 * 3];
            gotoxy(3, hang);
            Mauchon();
            cout << lt[(hang - 4) / 3 * 3];
        }
        if (c == -32) { // Nhan phím lên xuong
            char kk = getch();
            if (kk == 72) { // Phím lên
                int y = wherey();
                if (y == 4) { // neu o dong dau thi di chuyen xuong dong cuoi
                    gotoxy(3, y);
                    MauCB();
                    cout << lt[0];
                    gotoxy(3, 7);
                    Mauchon();
                    cout << lt[3];
                } else {
                    gotoxy(3, y);
                    MauCB();
                    cout << lt[(y - 4) / 3 * 3];
                    gotoxy(3, y - 3);
                    Mauchon();
                    cout << lt[(y - 7) / 3 * 3];
                }
            }
            if (kk == 80) { // Phím xu?ng
                int y = wherey();
                if (y == 7) { // Neu o dòng cuoi thì di chuyen lên dòng dau
                    gotoxy(3, 7);
                    MauCB();
                    cout << lt[3];
                    gotoxy(3, 4);
                    Mauchon();
                    cout << lt[0];
                } else {
                    gotoxy(3, y);
                    MauCB();
                    cout << lt[(y - 4) / 3 * 3];
                    gotoxy(3, y + 3);
                    Mauchon();
                    cout << lt[(y - 1) / 3 * 3];
                }
            }
        }
        if (c == 13) { // Nhan phím ENTER
            int y = wherey();
            if (y == 4) { // 1. Cap nhat nhan vien
                saveNV = 0;
                Menu_NV(ds_nv); 
                return 0;
            }
            if (y == 7) { // 2. In danh sach nhan vien
                Menu_In_DS_NV(ds_nv);
                return 0;
            }
        }
    }
}
