#include<stdio.h>
#include<conio.h>
#include<iostream>

using namespace std;

main(){
	awal:
	system("cls");
	system("color a");
	cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
	cout<<"||====================                              PROGRAM KKM                                   ==================||\n";
	cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
	cout<<"||              !!~  ~:~!! :~!$!#$$$$$$$$$$8X:!                                                 |||  ||| || || |||  ||\n";
	cout<<"||              !~::!H!~   ~.U$X!?R$$$$$$$$MM~/    DIBUAT OLEH :                                 |||  ||| ||| |||  |||\n";
	cout<<"||              !~!!!!~~ .:XW$$$U!!?$$$$$$RMM!      NAMA       : ARYA ADHI NUGRAHA                |||  ||| | |||  ||||\n";
	cout<<"||               !:~~~ .:!M'T#$$$$WX??#MRRMMM!      KELAS      : X TKJ 2                           |||  ||| |||  |||||\n";
	cout<<"||               ~?WuxiW*`   `'#$$$$8!!!!$?!!!      ABSEN      : 09                                 |||   |||   ||| ||\n";
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
	cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n\n";
int nilai;
int pro;
char ulang;
    nilai = 1;
    para:
    	if(nilai=1){
    		pro = 1;
            cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>";
            goto dox;
		}
	dox:
		if(pro=1){
			nilai = 2;
		}
		if(nilai=2){
			pro = 2;
			cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";
			goto paradox;
		}
	paradox:
		if(pro=2){
			nilai = 1;
			goto para;
		}
    cout<<"\n";
    cout<<"  TEKAN ENTER UNTUK MELANJUTKAN : ";
	getch();
	
	restat:
	cout<<"  APAKAH ANDA INGIN MENGULANGI PROGRAM (y/n) ? : "; cin>>ulang;
	if(ulang=='y'||ulang=='Y'){
		goto awal;
	}
	else if(ulang=='n'||ulang=='N'){
		goto end;
	}
	else{
		cout<<"  PILIHAN YANG ANDA MASUKAN SALAH \n";
		getch();
		goto restat;
	}
	end:
	system("cls");
	cout<<"\n\n";
	cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
	cout<<"||====================                              PROGRAM KKM                                   ==================||\n";
	cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
    cout<<"||                                ARYA ADHI NUGRAHA / X TKJ 2 / SMKN 2 PURWODADI                                    ||\n";
	cout<<"||__________________________________________________________________________________________________________________||\n";
    cout<<"||                         DILARANG MENGUBAH ATAU MENYALIN PROGRAM TANPA SEIZIN PENULIS                             ||\n";
    cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
    cout<<"||                            HAK CIPTA DILINDUNGI UNDANG-UNDANG   Copyright ©2018                                  ||\n";
    cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n";
	
    getch();
    
}
