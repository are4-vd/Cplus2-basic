#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<windows.h>

#define batas_atas 2 
#define batas_bawah 23
#define batas_samping 2
#define batas_samping_k 120

using namespace std;

/*
	Name: QUIZ PEMOGRAMAN DASAR C++
	Copyright: DIVINE STINX.Inc 2018
	Author: ARYA ADHI NUGRAHA
	Date: 20/02/18 18.23
	Description: KUIS SEDERHANA (hanya coba-coba)
*/

void gotoxy(int x, int y)
{
 COORD pos = {x, y};
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void cBorder() {
 for(int i = 1; i <= 78; i++)
 {
  for(int j = 1; j <= 24; j += 23)
  {
   if(j > 1 || i >= 32)
   {
    gotoxy(i, j);cout << char(219);
   }
  }
 }
 for(int i = 1; i <= 24; i++)
 {
  for(int k = 1; k <= 80; k += 78)
  {
   gotoxy(k, i); cout << char(219);
  }
 }
}


main(){
	awal:
	system("cls");
	system("color a");
	cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
	cout<<"||====================                       QUIZ PEMROGRAMAN DASAR C++                           ==================||\n";
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
char menu;
char Nama[20];
char name[100];
char kelas[10];
char abs[4];
char ljt2;
char ljt3;
char ljt4;
char ljt5;
char ljt6;
char ljt7;
char ljt8;
char ljt9;
char ljt10;
char jwb1;
char jwb2;
char jwb3;
char jwb4;
char jwb5;
char jwb6;
char jwb7;
char jwb8;
char jwb9;
char jwb10;
char sls;
int nilai;
char grade;
char ulang;
char ctk;
nilai =0;
    cout<<"\n";
    cout<<"  SELAMAT DATANG DI KUIS PEMROGRAMAN DASAR KELAS X \n";
    cout<<"  TEKAN ENTER UNTUK MENDAFTAR KUIS : ";
	getch();
    daftar:
    system("cls");
    cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
    cout<<"    MASUKAN DATA DIRI ANDA       "; gets(Nama);
    cout<<"\n";
    cout<<"  MASUKAN NAMA       : "; gets(name);
    cout<<"  MASUKAN KELAS      : "; gets(kelas);
    cout<<"  MASUKAN ABSEN      : "; gets(abs);
    bio:
    	system("cls");
    	cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
    	cout<<"\n";
    	cout<<"  DATA DIRI ANDA : \n";
    	cout<<"   NAMA     : "<<name<<"\n";
    	cout<<"   KELAS    : "<<kelas<<"\n";
    	cout<<"   ABSEN    : "<<abs<<"\n";
    	cout<<"  KETIK 'Y' JIKA DATA SUDAH BENAR, ATAU KETIK 'N' UNTUK MENGULANGI PENDAFTARAN : "; cin>>menu;
    	if(menu=='y'||menu=='Y'){
    		goto soal1;
		}
		if(menu=='N'||menu=='n'){
			goto daftar;
		}
    soal1:
    	system("cls");
    	system("color 9");
        cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
        cout<<"   SOAL PERTAMA \n";
        cout<<"  1.Terdapat tujuh tipe data dasar dalam pemrograman c++, yaitu...\n";
        cout<<"    A) Char, Int, String, Boolean, Float, Long, Short \n";
        cout<<"    B) Char, String, Boolean, Int, Long Int, Double, Short \n";
        cout<<"    C) Char, Int, Short, Long, Float, Double, Long Double \n";
        cout<<"    D) Char, Int, Short, Long, Float, Double, Long Int \n";
        cout<<"\n";
        cout<<"  JAWABAN : "; cin>>jwb1;
        system("cls");
        cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n";
        cout<<"  JAWABAN YANG BENAR ADALAH : \n";
        cout<<"    C) Char, Int, Short, Long, Float, Double, Long Double \n";
        if(jwb1=='C'||jwb1=='c'){
        	cout<<"\n";
    	    cout<<"  SELAMAT, JAWABAN ANDA BENAR !";
    	    nilai = nilai + 10;
	    }
	    if(jwb1=='B'||jwb1=='b'||jwb1=='A'||jwb1=='a'||jwb1=='D'||jwb1=='d'){
	    	cout<<"\n";
		    cout<<"  JAWABAN ANDA SALAH !";
	    }
	    cout<<"\n\n";
	    cout<<"  APAKAH ANDA INGIN MELANJUTKAN KE SOAL BERIKUTNYA ? (y/n): "; cin>>ljt2;
	    if(ljt2=='Y'||ljt2=='y'){
		    goto soal2;
	    }
	    if(ljt2=='N'||ljt2=='n'){
		    goto akhir;
	    }
	soal2:
		system("cls");
		system("color A");
        cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
        cout<<"   SOAL KEDUA \n";
        cout<<"  2.Berikut ini aturan umum dalam penulisan/deklarasi variabel, kecuali... \n";
        cout<<"    A) Nama variabel harus diawali dengan huruf. \n";
        cout<<"    B) Nama variabel tidak boleh nama hewan. \n";
        cout<<"    C) Nama variabel tidak boleh menggunakan kata-kata kunci d bahasa pemrograman. \n";
        cout<<"    D) Tidak boleh menggunakan spasi pada satu nama variabel. \n";
        cout<<"\n";
        cout<<"  JAWABAN : "; cin>>jwb2;
        system("cls");
        cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n";
        cout<<"  JAWABAN YANG BENAR ADALAH : \n";
        cout<<"    B) Nama variabel tidak boleh nama hewan. \n";
        if(jwb2=='B'||jwb2=='b'){
        	cout<<"\n";
    	    cout<<"  SELAMAT, JAWABAN ANDA BENAR !";
    	     nilai = nilai + 10;
	    }
	    if(jwb2=='C'||jwb2=='c'||jwb2=='A'||jwb2=='a'||jwb2=='D'||jwb2=='d'){
	    	cout<<"\n";
		    cout<<"  JAWABAN ANDA SALAH !";
	    }
	    cout<<"\n\n";
	    cout<<"  APAKAH ANDA INGIN MELANJUTKAN KE SOAL BERIKUTNYA ? (y/n): "; cin>>ljt3;
	    if(ljt3=='Y'||ljt3=='y'){
		    goto soal3;
	    }
	    if(ljt3=='N'||ljt3=='n'){
		    goto akhir;
	    }
	soal3:
		system("cls");
		system("color B");
        cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
        cout<<"   SOAL KETIGA \n";
        cout<<"  3.Operator logika yang menyatakan 'atau' dalam lambang berikut ini adalah...\n";
        cout<<"    A) && \n";
        cout<<"    B) || \n";
        cout<<"    C) == \n";
        cout<<"    D) <> \n";
        cout<<"\n";
        cout<<"  JAWABAN : "; cin>>jwb3;
        system("cls");
        cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n";
        cout<<"  JAWABAN YANG BENAR ADALAH : \n";
        cout<<"    B) || \n";
        if(jwb3=='B'||jwb3=='b'){
        	cout<<"\n";
    	    cout<<"  SELAMAT, JAWABAN ANDA BENAR !";
    	     nilai = nilai + 10;
	    }
	    if(jwb3=='C'||jwb3=='c'||jwb3=='A'||jwb3=='a'||jwb3=='D'||jwb3=='d'){
	    	cout<<"\n";
		    cout<<"  JAWABAN ANDA SALAH !";
	    }
	    cout<<"\n\n";
	    cout<<"  APAKAH ANDA INGIN MELANJUTKAN KE SOAL BERIKUTNYA ? (y/n): "; cin>>ljt4;
	    if(ljt4=='Y'||ljt4=='y'){
		    goto soal4;
	    }
	    if(ljt4=='N'||ljt4=='n'){
		    goto akhir;
	    }
	soal4:
		system("cls");
		system("color C");
        cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
        cout<<"   SOAL KEEMPAT \n";
        cout<<"  4.Operator logika && adalah...\n";
        cout<<"    A) And \n";
        cout<<"    B) Nand \n";
        cout<<"    C) Or \n";
        cout<<"    D) For \n";
        cout<<"\n";
        cout<<"  JAWABAN : "; cin>>jwb4;
        system("cls");
        cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n";
        cout<<"  JAWABAN YANG BENAR ADALAH : \n";
        cout<<"    A) And \n";
        if(jwb4=='A'||jwb4=='a'){
        	cout<<"\n";
    	    cout<<"  SELAMAT, JAWABAN ANDA BENAR !";
    	     nilai = nilai + 10;
	    }
	    if(jwb4=='C'||jwb4=='c'||jwb4=='B'||jwb4=='b'||jwb4=='D'||jwb4=='d'){
	    	cout<<"\n";
		    cout<<"  JAWABAN ANDA SALAH !";
	    }
	    cout<<"\n\n";
	    cout<<"  APAKAH ANDA INGIN MELANJUTKAN KE SOAL BERIKUTNYA ? (y/n): "; cin>>ljt5;
	    if(ljt5=='Y'||ljt5=='y'){
		    goto soal5;
	    }
	    if(ljt5=='N'||ljt5=='n'){
		    goto akhir;
	    }
	soal5:
		system("cls");
		system("color D");
        cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
        cout<<"   SOAL KELIMA \n";
        cout<<"  5. ++ dan -- merupakan operator...\n";
        cout<<"    A) Operator Aritmatika  \n";
        cout<<"    B) Operator Increment dan Decrement \n";
        cout<<"    C) Operator Logika \n";
        cout<<"    D) Operator Relasional \n";
        cout<<"\n";
        cout<<"  JAWABAN : "; cin>>jwb5;
        system("cls");
        cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n";
        cout<<"  JAWABAN YANG BENAR ADALAH : \n";
        cout<<"    B) Operator Increment dan Decrement \n";
        if(jwb5=='B'||jwb5=='b'){
        	cout<<"\n";
    	    cout<<"  SELAMAT, JAWABAN ANDA BENAR !";
    	     nilai = nilai + 10;
	    }
	    if(jwb5=='C'||jwb5=='c'||jwb5=='A'||jwb5=='a'||jwb5=='D'||jwb5=='d'){
	    	cout<<"\n";
		    cout<<"  JAWABAN ANDA SALAH !";
	    }
	    cout<<"\n\n";
	    cout<<"  APAKAH ANDA INGIN MELANJUTKAN KE SOAL BERIKUTNYA ? (y/n): "; cin>>ljt6;
	    if(ljt6=='Y'||ljt6=='y'){
		    goto soal6;
	    }
	    if(ljt6=='N'||ljt6=='n'){
		    goto akhir;
	    }
	soal6:
		system("cls");
		system("color E");
        cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
        cout<<"   SOAL KEENAM \n";
        cout<<"  6.Compiler C++ yang telah beredar di pasaran antara lain, kecuali...\n";
        cout<<"    A) Dev C++  \n";
        cout<<"    B) Microsoft C++ \n";
        cout<<"    C) Visual C++ \n";
        cout<<"    D) Pascal C++ \n";
        cout<<"\n";
        cout<<"  JAWABAN : "; cin>>jwb6;
        system("cls");
        cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n";
        cout<<"  JAWABAN YANG BENAR ADALAH : \n";
        cout<<"    D) Pascal C++ \n";
        if(jwb6=='D'||jwb6=='d'){
        	cout<<"\n";
    	    cout<<"  SELAMAT, JAWABAN ANDA BENAR !";
    	     nilai = nilai + 10;
	    }
	    if(jwb6=='C'||jwb6=='c'||jwb6=='A'||jwb6=='a'||jwb6=='B'||jwb6=='b'){
	    	cout<<"\n";
		    cout<<"  JAWABAN ANDA SALAH !";
	    }
	    cout<<"\n\n";
	    cout<<"  APAKAH ANDA INGIN MELANJUTKAN KE SOAL BERIKUTNYA ? (y/n): "; cin>>ljt7;
	    if(ljt7=='Y'||ljt7=='y'){
		    goto soal7;
	    }
	    if(ljt7=='N'||ljt7=='n'){
		    goto akhir;
	    }
	soal7:
		system("cls");
		system("color F");
        cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
        cout<<"   SOAL KETUJUH \n";
        cout<<"  7.Berikut ini perintah menampilkan data, kecuali...\n";
        cout<<"    A) printf()  \n";
        cout<<"    B) puts() \n";
        cout<<"    C) putchar() \n";
        cout<<"    D) scanf() \n";
        cout<<"\n";
        cout<<"  JAWABAN : "; cin>>jwb7;
        system("cls");
        cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n";
        cout<<"  JAWABAN YANG BENAR ADALAH : \n";
        cout<<"    D) scanf() \n";
        if(jwb7=='D'||jwb7=='d'){
        	cout<<"\n";
    	    cout<<"  SELAMAT, JAWABAN ANDA BENAR !";
    	     nilai = nilai + 10;
	    }
	    if(jwb7=='C'||jwb7=='c'||jwb7=='A'||jwb7=='a'||jwb7=='B'||jwb7=='b'){
	    	cout<<"\n";
		    cout<<"  JAWABAN ANDA SALAH !";
	    }
	    cout<<"\n\n";
	    cout<<"  APAKAH ANDA INGIN MELANJUTKAN KE SOAL BERIKUTNYA ? (y/n): "; cin>>ljt8;
	    if(ljt8=='Y'||ljt8=='y'){
		    goto soal8;
	    }
	    if(ljt8=='N'||ljt8=='n'){
		    goto akhir;
	    }
	soal8:
		system("cls");
		system("color D");
        cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
        cout<<"   SOAL KEDELAPAN \n";
        cout<<"  8.Berikut hal yang benar mengenai peritah getchar(), kecuali...\n";
        cout<<"    A) Fungsi getchar() digunakan untuk membaca data yang bertipe karakter  \n";
        cout<<"    B) Harus diakhiri dengan penekanan tombol enter \n";
        cout<<"    C) Tidak memberikan efek pergantian baris secara otomatis \n";
        cout<<"    D) Karakter yang dimasukkan terlihat pada layar \n";
        cout<<"\n";
        cout<<"  JAWABAN : "; cin>>jwb8;
        system("cls");
        cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n";
        cout<<"  JAWABAN YANG BENAR ADALAH : \n";
        cout<<"    C) Tidak memberikan efek pergantian baris secara otomatis \n";
        if(jwb8=='C'||jwb8=='c'){
        	cout<<"\n";
    	    cout<<"  SELAMAT, JAWABAN ANDA BENAR !";
    	     nilai = nilai + 10;
	    }
	    if(jwb8=='D'||jwb8=='d'||jwb8=='A'||jwb8=='a'||jwb8=='B'||jwb8=='b'){
	    	cout<<"\n";
		    cout<<"  JAWABAN ANDA SALAH !";
	    }
	    cout<<"\n\n";
	    cout<<"  APAKAH ANDA INGIN MELANJUTKAN KE SOAL BERIKUTNYA ? (y/n): "; cin>>ljt9;
	    if(ljt9=='Y'||ljt9=='y'){
		    goto soal9;
	    }
	    if(ljt9=='N'||ljt9=='n'){
		    goto akhir;
	    }
	    soal9:
		system("cls");
		system("color B");
        cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
        cout<<"   SOAL KESEMBILAN \n";
        cout<<"  9.Operator Aritmatika dalam C++ berjumlah...\n";
        cout<<"    A) 5  \n";
        cout<<"    B) 6 \n";
        cout<<"    C) 4 \n";
        cout<<"    D) 7 \n";
        cout<<"\n";
        cout<<"  JAWABAN : "; cin>>jwb9;
        system("cls");
        cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n";
        cout<<"  JAWABAN YANG BENAR ADALAH : \n";
        cout<<"    A) 5  \n";
        if(jwb9=='a'||jwb9=='A'){
        	cout<<"\n";
    	    cout<<"  SELAMAT, JAWABAN ANDA BENAR !";
    	     nilai = nilai + 10;
	    }
	    if(jwb9=='D'||jwb9=='d'||jwb9=='C'||jwb9=='c'||jwb9=='B'||jwb9=='b'){
	    	cout<<"\n";
		    cout<<"  JAWABAN ANDA SALAH !";
	    }
	    cout<<"\n\n";
	    cout<<"  APAKAH ANDA INGIN MELANJUTKAN KE SOAL BERIKUTNYA ? (y/n): "; cin>>ljt10;
	    if(ljt10=='Y'||ljt10=='y'){
		    goto soal10;
	    }
	    if(ljt10=='N'||ljt10=='n'){
		    goto akhir;
	    }
	soal10:
		system("cls");
		system("color A");
        cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
        cout<<"   SOAL TERAKHIR \n";
        cout<<"  10.Pernyataan program berikut ini salah, kecuali\n";
        cout<<"    A) Int return=40;  \n";
        cout<<"    B) Cout>>count; \n";
        cout<<"    C) Float tiga_puluh; \n";
        cout<<"    D) Dua Int=30; \n";
        cout<<"\n";
        cout<<"  JAWABAN : "; cin>>jwb10;
        system("cls");
        cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n";
        cout<<"  JAWABAN YANG BENAR ADALAH : \n";
        cout<<"    C) Float tiga_puluh; \n";
        if(jwb10=='C'||jwb10=='c'){
            cout<<"\n";
    	    cout<<"  SELAMAT, JAWABAN ANDA BENAR !";
    	     nilai = nilai + 10;
	    }
	    if(jwb10=='D'||jwb10=='d'||jwb10=='A'||jwb10=='a'||jwb10=='B'||jwb10=='b'){
            cout<<"\n";
		    cout<<"  JAWABAN ANDA SALAH !";
	    }
	    cout<<"\n\n";
	    cout<<"  UJIAN SELESAI, KETIKAN 'Y' UNTUK MELIHAT HASIL : "; cin>>sls;
	    if(sls=='Y'||sls=='y'){
		    goto akhir;
	    }
	    if(sls=='N'||sls=='n'){
		    goto akhir;
	    }
	akhir:
		system("cls");
		system("color F");
		cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
		cout<<"\n";
		cout<<"  NILAI ANDA ADALAH : "<<nilai<<"\n";
		if(nilai<=50){
			grade = 'F';
		}
		if(nilai==60){
			grade = 'E';
		}
		if(nilai==70){
			grade = 'D';
		}
		if(nilai==80){
			grade = 'C';
		}
		if(nilai==90){
			grade = 'B';
		}
		if(nilai==100){
			grade = 'A';
		}
		cout<<"  GRADE ANDA ADALAH : "<<grade<<"\n";
		if(nilai<70){
			cout<<"  MOHON MAAF ANDA TIDAK LULUS...";
		}
		if(nilai>=70){
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
				cout<<"|||||||   |||||||   |||||||   |||||||              TELAH LULUS DARI              |||||||   |||||||   |||||||   |||||||\n";
				cout<<"||   |||||||   |||||||   |||||||             QUIZ PEMROGRAMAN DASAR KELAS X           |||||||   |||||||   |||||||   ||\n";
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
				cout<<"||            PEMBIMBING                                                               PENYUSUN QUIZ                ||\n";
				cout<<"||                                                                                                                  ||\n";
				cout<<"||               TTD                                                                        TTD                     ||\n";
				cout<<"||        ____________________                                                       _________________              ||\n";
				cout<<"||        Teguh Astoro, S.Kom.                                                       Arya Adhi Nugraha              ||\n";
				cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
			}
		}
		cout<<"KETIKAN ANGKA 1 UNTUK MENGAKHIRI : "; cin>>endi;
	system("cls");
	restat:
	cout<<"  APAKAH ANDA INGIN MENGULANGI QUIZ (y/n) ? : "; cin>>ulang;
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
    cout<<"||                                ARYA ADHI NUGRAHA / X TKJ 2 / SMKN 2 PURWODADI                                    ||\n";
	cout<<"||__________________________________________________________________________________________________________________||\n";
    cout<<"||                         DILARANG MENGUBAH ATAU MENYALIN PROGRAM TANPA SEIZIN PENULIS                             ||\n";
    cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
    cout<<"||                            HAK CIPTA DILINDUNGI UNDANG-UNDANG   Copyright ©2018                                  ||\n";
    cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n\n";
	
    getch();
}

