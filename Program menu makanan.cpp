#include<stdio.h>
#include<conio.h>
#include<iostream>

using namespace std;

main(){
	awal:
	system("cls");
	system("color a");
	cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
	cout<<"||====================                        PROGRAM MENU MAKANAN                                ==================||\n";
	cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
	cout<<"||              !!~  ~:~!! :~!$!#$$$$$$$$$$8X:!                                                 |||  ||| || || |||  ||\n";
	cout<<"||              !~::!H!~   ~.U$X!?R$$$$$$$$MM~/    DIBUAT OLEH :                                 |||  ||| ||| |||  |||\n";
	cout<<"||              !~!!!!~~ .:XW$$$U!!?$$$$$$RMM!      NAMA       : ARYA ADHI NUGRAHA                |||  ||| | |||  ||||\n";
	cout<<"||               !:~~~ .:!M'T#$$$$WX??#MRRMMM!      KELAS      : X TKJ 2                           |||  ||| |||  |||||\n";
	cout<<"||               ~?WuxiW*`   `'#$$$$8!!!!$?!!!      ABSEN      : 02                                 |||   |||   ||| ||\n";
	cout<<"||             :X- M$$$$       `'T#$T~!8$WUXU~      MAPEL      : PEMROGRAMAN DASAR                 |||  ||| |||  |||||\n";
	cout<<"||            :#`  ~#$$$m:    0   ~!~ ?$$$$$$       GURU       : Bp Teguh Astoro, S.Kom.          |||  ||| | |||  ||||\n";
	cout<<"||          :!`.-   ~T$$$$8xx.  .xWW- ~''##*'       SEKOLAH    : SMKN 2 PURWODADI                |||  ||| ||| |||  |||\n";
	cout<<"||.....   -~~:!` !    ~?T#$$@@W@*?$$  0   /`                                                    |||  ||| || || |||  ||\n";
	cout<<"||W$@@M!!! .!~~ !!     .:XUW$W!~ `'~:    :                                     IIIIIII          |||  ||| || || |||  ||\n";
	cout<<"||#'~~`.:x)`!!  !H:   !WM$$$$Ti.: .!WUn+!`                                   IIII   IIII         |||  ||| ||| |||  |||\n";
	cout<<"||:::~:!!`:X~ .: ?H.!u '$$$B$$$!W:U!T$$M~    IIIIIIIIII  II  II  IIIIIIII   IIII    IIII          |||  ||| | |||  ||||\n";
	cout<<"||.~~   :X@!.-~   ?@WTWo('*$$$W$TH$! `           II      II II         II          IIII            |||  ||| |||  |||||\n";
	cout<<"||Wi.~!X$?!-~    : ?$$$B$Wu('**$RM!              II      III           II         IIII              |||   |||   ||| ||\n";
	cout<<"||$R@i.~~ !     :   ~$$$$$B$$en:``               II      II II        II        IIII               |||  ||| |||  |||||\n";
	cout<<"||?MXT@Wx.~   :  / ~'##*$$$$M~                   II      II  II   IIIII       IIII                |||  ||| | |||  ||||\n";
	cout<<"||#$&%@!T$  :  / ~    $$$$                   =============================  IIIIIIIIIIIII        |||  ||| ||| |||  |||\n";
	cout<<"||@$^%JM!  :  / ~                                                                               |||  ||| || || |||  ||\n";
	cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n";
	cout<<"  TEKAN ENTER UNTUK MELANJUTKAN ";
	getch();
	resto:
	system("cls");
	int angka;
	int harga=0;
	char tambah;
	char ulang;
	pilih:
	system("cls");
	cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
    cout<<"||======================(                         MENU MAKANAN                       )==============================||\n";
    cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
    cout<<"||||||||||||||||||||||||||||||||    >> 1.NASI KUCING             Rp 6.000,-           ||||||||||||||||||||||||||||||||\n";
    cout<<"|||||||||               =|||||||    >> 2.NASI AYAM               Rp 18.000,-          |||||||=               |||||||||\n";
    cout<<"|| =|||||||               =|||||    >> 3.NASI UDUK               Rp 8.000,-           |||||=               |||||||= ||\n";
    cout<<"||   =|||||||               =|||    >> 4.NASI PADANG             Rp 22.000,-          |||=               |||||||=   ||\n";
    cout<<"||     =||||||               =||    >> 5.NASI RENDANG            Rp 15.000,-          ||=               ||||||=     ||\n";
    cout<<"||     =||||||               =||    >> 6.SAYUR YUYU              Rp 7.000,-           ||=               ||||||=     ||\n";
    cout<<"||   =|||||||               =|||    >> 7.SAYUR PINDANG           Rp 8.000,-           |||=               |||||||=   ||\n";
    cout<<"|| =|||||||               =|||||    >> 8.OSENG PINDANG           Rp 10.000,-          |||||=               |||||||= ||\n";
    cout<<"|||||||||               =|||||||    >> 9.SAMBEL TERONG POKAK     Rp 20.000,-          |||||||=               |||||||||\n";
    cout<<"||||||||||||||||||||||||||||||||    >> 10.BRAMBANG ASEM          Rp 5000,-            ||||||||||||||||||||||||||||||||\n";
    cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
    cout<<"||                                      NOTE: KETIKAN NOMOR UNTUK MEMILIH                                           ||\n";
    cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n";
    cout<<"  MASUKAN MENU PILIHAN ANDA : "; cin>>angka;
    cout<<"\n";
    if(angka==1){
    	cout<<"  ANDA MEMESAN NASI KUCING \n";
    	harga = harga + 6000;
    	getch();
	}
	else if(angka==2){
		cout<<"  ANDA MEMESAN NASI AYAM \n";
		harga = harga + 18000;
		getch();
	}
	else if(angka==3){
		cout<<"  ANDA MEMESAN NASI UDUK \n";
		harga = harga + 8000;
		getch();
	}
	else if(angka==4){
		cout<<"  ANDA MEMESAN NASI PADANG \n";
		harga = harga + 22000;
		getch();
	}
	else if(angka==5){
		cout<<"  ANDA MEMESAN NASI RENDANG \n";
		harga = harga + 15000;
		getch();
	}
	else if(angka==6){
		cout<<"  ANDA MEMESAN SAYUR YUYU \n";
		harga = harga + 7000;
		getch();
	}
	else if(angka==7){
		cout<<"  ANDA MEMESAN SAYUR PINDANG \n";
		harga = harga + 8000;
		getch();
	}
	else if(angka==8){
		cout<<"  ANDA MEMESAN OSENG PINDANG \n";
		harga = harga + 10000;
		getch();
	}
	else if(angka==9){
		cout<<"  ANDA MEMESAN SAMBEL TERONG POKAK \n";
		harga = harga + 20000;
		getch();
	}
	else if(angka==10){
		cout<<"  ANDA MEMESAN BRAMBANG ASEM \n";
		harga = harga + 5000;
		getch();
	}
	else{
		cout<<"  PILIHAN YANG ANDAN MASUKAN SALAH \n";
		getch();
		goto pilih;
	}
	tawartmbh:
	system("cls");
	cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
	cout<<"\n";
	cout<<"  HARGA SEKARANG : Rp. "<<harga<<"\n";
	cout<<"  APAKAH ANDA INGIN MENAMBAH PESANAN (y/n) ? : "; cin>>tambah;
	if(tambah=='y'||tambah=='Y'){
		goto pilih;
	}
	else if(tambah=='n'||tambah=='N'){
		goto jumlah;
	}
	else{
		cout<<"  PILIHAN YANG ANDAN MASUKAN SALAH \n";
		getch();
		goto tawartmbh;
	}
	jumlah:
	system("cls");
	cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
	cout<<"\n";
	cout<<"  JUMLAH YANG HARUS DIBAYARKAN : Rp. "<<harga<<"\n\n";
	getch();
	restat:
	cout<<"  APAKAH ANDA INGIN MENGULANGI PROGRAM (y/n) ? : "; cin>>ulang;
	if(ulang=='y'||ulang=='Y'){
		goto awal;
	}
	else if(ulang=='n'||ulang=='N'){
		goto akhir;
	}
	else{
		cout<<"  PILIHAN YANG ANDAN MASUKAN SALAH \n";
		getch();
		goto restat;
	}
	akhir:
	system("cls");
	cout<<"\n\n";
	cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
    cout<<"||                                ARYA ADHI NUGRAHA / X TKJ 2 / SMKN 2 PURWODADI                                    ||\n";
	cout<<"||__________________________________________________________________________________________________________________||\n";
    cout<<"||                         DILARANG MENGUBAH ATAU MENYALIN PROGRAM TANPA SEIZIN PENULIS                             ||\n";
    cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
    cout<<"||                            HAK CIPTA DILINDUNGI UNDANG-UNDANG   Copyright ©2018                                  ||\n";
    cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n";
	getch();

}
