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
	cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
int nilai;
char name[100];
char kelas[11];
char abs[4];
char ulang;
char grade;
char ctk;
char menu;
    cout<<"\n";
    cout<<"  TEKAN ENTER UNTUK MELANJUTKAN : ";
	getch();
    daftar:
    system("cls");
    cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
	cout<<"||====================                              PROGRAM KKM                                   ==================||\n";
	cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n";
    cout<<"  MASUKAN DATA DIRI ANDA       "; 
	getch();
    cout<<"\n\n";
    cout<<"  MASUKAN NAMA       : "; cin>>name;
    cout<<"  MASUKAN KELAS      : "; cin>>kelas;
    cout<<"  MASUKAN ABSEN      : "; cin>>abs;
    bio:
    	system("cls");
    	cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
	    cout<<"||====================                              PROGRAM KKM                                   ==================||\n";
	    cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
    	cout<<"\n\n";
    	cout<<"  DATA DIRI ANDA : \n";
    	cout<<"   NAMA     : "<<name<<"\n";
    	cout<<"   KELAS    : "<<kelas<<"\n";
    	cout<<"   ABSEN    : "<<abs<<"\n";
    	cout<<"  KETIK 'Y' JIKA DATA SUDAH BENAR, ATAU KETIK 'N' UNTUK MENGULANGI PENDAFTARAN : "; cin>>menu;
    	if(menu=='y'||menu=='Y'){
    		goto input;
		}
		else if(menu=='N'||menu=='n'){
			goto daftar;
		}
		else{
			cout<<" INPUT SALAH !";
			getch();
			goto bio;
		}
    input:
    system("cls");
    cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
	cout<<"||====================                              PROGRAM KKM                                   ==================||\n";
	cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n";
    cout<<"  MASUKAN NILAI ANDA : "; cin>>nilai;
    akhir:
		system("cls");
		cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
	    cout<<"||====================                              PROGRAM KKM                                   ==================||\n";
	    cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
		cout<<"\n";
		if(nilai<=0){
			cout<<"  NILAI ANDA TIDAK VALID.....SILAHKAN ULANGI !";
			getch();
			goto input;
		}
		else if(nilai==10){
			grade = 'J';
		}
		else if(nilai==20){
			grade = 'I';
		}
		else if(nilai==30){
			grade = 'H';
		}
		else if(nilai==40){
			grade = 'G';
		}
		else if(nilai==50){
			grade = 'F';
		}
		else if(nilai==60){
			grade = 'E';
		}
		else if(nilai==70){
			grade = 'D';
		}
		else if(nilai==80){
			grade = 'C';
		}
		else if(nilai==90){
			grade = 'B';
		}
		else if(nilai==100){
			grade = 'A';
		}
		else if(nilai>=100){
			cout<<"  NILAI ANDA OVERLIMIT/KELEWAT BATAS...SILAHKAN ULANGI !";
			getch();
			goto input;
		}
		else{
			cout<<"  INPUT SALAH...SILAHKAN ULANGI !";
			getch();
			goto input;
		}
		cout<<"  NILAI ANDA ADALAH : "<<nilai<<"\n";
		cout<<"  GRADE ANDA ADALAH : "<<grade<<"\n";
		if(nilai<80){
			cout<<"  MOHON MAAF ANDA TIDAK LULUS...";
			getch();
		}
		else if(nilai>=80){
			cout<<"  SELAMAT, ANDA LULUS...!!!!!\n";
			cout<<"  APAKAH ANDA INGIN MENCETAK SERTIFIKAT ANDA ? (y/n) : "; cin>>ctk;
			if(ctk=='y'||ctk=='Y'){
				system("cls");
				system("color A");
				cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
				cout<<"||=->-=>..:|:..:|:..:|:..:|:..:|:..:|:..:|:..:|:..:|  SERTIFIKAT  |:..:|:..:|:..:|:..:|:..:|:..:|:..:|:..:|:..<=-<-=||\n";
				cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
				cout<<"||||| |||||||||| |||||||||||||||     |||                                      |||     ||||||||||||||| |||||||||| |||||\n";
				cout<<"|||  |  ||||||  |  |||||||||   ||| |||     DENGAN INI KAMI MENYATAKAN BAHWA     ||| |||    ||||||||  |  ||||||  |  |||\n";
				cout<<"||  |||  ||||  |||  ||||||||||      |||                                        |||      ||||||||||  |||  ||||  |||  ||\n";
				cout<<"|  |||||  ||  |||||  ||||||||||||    |||||                                  |||||    ||||||||||||  |||||  ||  |||||  |\n";
				cout<<"                                  NAMA        : "<<name<<"\n";
				cout<<"                                  KELAS       : "<<kelas<<"\n";
				cout<<"                                  ABSEN       : "<<abs<<"\n\n";
				cout<<"|||||||   |||||||   |||||||   |||||||               TELAH MEMENUHI               |||||||   |||||||   |||||||   |||||||\n";
				cout<<"||   |||||||   |||||||   |||||||              KRITERIA KETUNTASAN MINIMAL             |||||||   |||||||   |||||||   ||\n";
				cout<<"|||||||   |||||||   |||||||   |||||||                DENGAN GRADE                |||||||   |||||||   |||||||   |||||||\n";
				cout<<"                                                      ||*****||                                                       \n";
				cout<<"                                                      ||  "<<grade<<"  ||                                             \n";
				cout<<"                                                      ||.....||                                                       \n";
				cout<<"|        ||||||||||||||||                     |||||||     |      |||||||                     ||||||||||||||||        |\n";
				cout<<"||      ||||       |||                      ||||||       |||        ||||||                      |||       ||||      ||\n";
				cout<<"|||   |||||         |||||||||||||  ||||||||||||        ||| |||         ||||||||||||  |||||||||||||         |||||   |||\n";
				cout<<"|||| ||||||||||||             ||||||||       |||     ||||   ||||      |||       ||||||||             |||||||||||| ||||\n";
				cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
				cout<<"||                                                                                                                  ||\n";
				cout<<"||            PEMBIMBING                                                              PENULIS PROGRAM               ||\n";
				cout<<"||                                                                                                                  ||\n";
				cout<<"||               TTD                                                                        TTD                     ||\n";
				cout<<"||        ____________________                                                       _________________              ||\n";
				cout<<"||        Teguh Astoro, S.Kom.                                                       Arya Adhi Nugraha              ||\n";
				cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
				getch();
			}
		}
		cout<<"TEKAN ENTER UNTUK MENGAKHIRI : ";
	system("cls");
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
