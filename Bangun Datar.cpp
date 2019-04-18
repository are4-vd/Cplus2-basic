#include<stdio.h>
#include<conio.h>
#include<iostream>


using namespace std;
main(){
	awal:
	system("cls");
	system("color D");
	cout<<"II*********************************************************************************II\n";
	cout<<"II                            PROGRAM BANGUN DATAR                                 II\n";
	cout<<"II*********************************************************************************II\n";
    cout<<"II===          III   III   IIIIIIIIII II  II  IIIIIIII     IIII IIII            ===II\n";
    cout<<"II==========    III III       III     II II        III      II   II      ==========II\n";
    cout<<"II====   ======   III         III     IIII         III      II   II   ======   ====II\n";
    cout<<"II==========    III III       III     II II       III       II   II      ==========II\n";
    cout<<"II===          III   III      III     II  II  IIIIII       IIII IIII            ===II\n";
	cout<<"II_________________________________________________________________________________II\n";
	cout<<"II  OPERASI BANGUN DATAR :                  ||  DIBUAT OLEH :                      II\n";
	cout<<"II  1.KLL PERSEGI         7.KLL LINGKARAN   ||  NAMA      : ARYA ADHI NUGRAHA      II\n";
	cout<<"II  2.L PERSEGI           8.L LINGKARAN     ||  KELAS     : X TKJ 2                II\n";
	cout<<"II  3.KLL PERSEGI PANJANG                   ||  ABSEN     : 09                     II\n";
	cout<<"II  4.L PERSEGI PANJANG                     ||  MAPEL     : PEMROGRAMAN DASAR      II\n";
	cout<<"II  5.KLL SEGITIGA                          ||  GURU      : Bp Teguh Astoro, S.Kom.II\n";
	cout<<"II  6.L SEGITIGA                            ||  SEKOLAH   : SMKN 2 PURWODADI       II\n";
	cout<<"II*********************************************************************************II\n";
	cout<<"II                       NOTE : PILIH MENU UNTUK MEMULAI                           II\n";
	cout<<"II*********************************************************************************II\n";
int menu;
int hasil_kll_p;
int hasil_l_p;
int hasil_kll_pp;
int hasil_l_pp;
int hasil_kll_sgtg;
int hasil_l_sgtg;
float hasil_kll_l;
float hasil_l_l;
int bil_p;
int bil_pp_a;
int bil_pp_b;
int bil_sgtg_sisi_a;
int bil_sgtg_sisi_b;
int bil_sgtg_sisi_c;
int bil_sgtg_alas;
int bil_sgtg_tinggi;
float rdius;
int jd_m;
double mtr;
char ulang;
    cout<<"\n";
    cout<<" KETIKAN ANGKA DARI OPERASI BANGUN DATAR YANG ANDA INGINKAN : "; cin>>menu;
    cout<<"\n\n";
    if(menu==1){
    	cout<<"II*********************************************************************************II\n";
    	cout<<"II                                 KELILING PERSEGI                                II\n";
    	cout<<"II*********************************************************************************II\n";
    	cout<<"\n\n";
    	cout<<"  PANJANG SISI (cm) : "; cin>>bil_p;
    	cout<<"\n\n";
    	cout<<"II*********************************************************************************II\n";
    	cout<<"II                                   HASIL/RESULT                                  II\n";
    	cout<<"II*********************************************************************************II\n";
	hasil_kll_p = bil_p + bil_p + bil_p + bil_p;
        cout<<"  Keliling Persegi dengan P.sisi : "<<bil_p<<" adalah = "<<hasil_kll_p<<" cm"<<"\n";
        cout<<"\n\nII*********************************************************************************II\n";
        cout<<"II                                   SELESAI/END                                   II\n";
        cout<<"II*********************************************************************************II\n";
        cout<<"\n\n\n\n";	
    }
    if(menu==2){
    	cout<<"II*********************************************************************************II\n";
    	cout<<"II                                  LUAS PERSEGI                                   II\n";
    	cout<<"II*********************************************************************************II\n";
    	cout<<"\n\n";
    	cout<<"  PANJANG SISI (cm) : "; cin>>bil_p;
    	cout<<"\n\n";
    	cout<<"II*********************************************************************************II\n";
    	cout<<"II                                   HASIL/RESULT                                  II\n";
    	cout<<"II*********************************************************************************II\n";
	hasil_l_p = bil_p * bil_p;
        cout<<"  Luas Persegi dengan P.sisi : "<<bil_p<<" adalah = "<<hasil_l_p<<" cm2"<<"";
        cout<<"\n\nII*********************************************************************************II\n";
        cout<<"II                                   SELESAI/END                                   II\n";
        cout<<"II*********************************************************************************II\n";
        cout<<"\n\n\n\n";
    }
    if(menu==3){
    	cout<<"II*********************************************************************************II\n";
    	cout<<"II                            KELILING PERSEGI PANJANG                             II\n";
    	cout<<"II*********************************************************************************II\n";
    	cout<<"\n\n";
    	cout<<"  PANJANG PERSEGI PANJANG (cm) : "; cin>>bil_pp_a;
    	cout<<"  LEBAR PERSEGI PANJANG   (cm) : "; cin>>bil_pp_b;
    	cout<<"\n\n";
    	cout<<"II*********************************************************************************II\n";
    	cout<<"II                                   HASIL/RESULT                                  II\n";
    	cout<<"II*********************************************************************************II\n";
	hasil_kll_pp = bil_pp_a + bil_pp_a + bil_pp_b + bil_pp_b;
        cout<<"  Keliling Persegi Panjang dengan p: "<<bil_pp_a<<"dan l: "<<bil_pp_b<<" adalah = "<<hasil_kll_pp<<" cm"<<"";
        cout<<"\n\nII********************************************************************************II\n";
        cout<<"II                                   SELESAI/END                                   II\n";
        cout<<"II*********************************************************************************II\n";
        cout<<"\n\n\n\n";
    }
    if(menu==4){
    	cout<<"II*********************************************************************************II\n";
    	cout<<"II                               LUAS PERSEGI PANJANG                              II\n";
    	cout<<"II*********************************************************************************II\n";
    	cout<<"\n\n";
    	cout<<"  PANJANG PERSEGI PANJANG (cm) : "; cin>>bil_pp_a;
    	cout<<"  LEBAR PERSEGI PANJANG   (cm) : "; cin>>bil_pp_b;
    	cout<<"\n\n";
    	cout<<"II*********************************************************************************II\n";
    	cout<<"II                                   HASIL/RESULT                                  II\n";
    	cout<<"II*********************************************************************************II\n";
	hasil_l_pp = bil_pp_a * bil_pp_b;
        cout<<"  Luas Persegi Panjang dengan p: "<<bil_pp_a<<"dan l: "<<bil_pp_b<<" adalah = "<<hasil_l_pp<<" cm2"<<"";
        cout<<"\n\nII*********************************************************************************II\n";
        cout<<"II                                   SELESAI/END                                   II\n";
        cout<<"II*********************************************************************************II\n";
        cout<<"\n\n\n\n";
    }
    if(menu==5){
    	cout<<"II*********************************************************************************II\n";
    	cout<<"II                                KELILING SEGITIGA                                II\n";
    	cout<<"II*********************************************************************************II\n";
    	cout<<"\n\n";
    	cout<<"  PANJANG SISI SEGITIGA 1 (cm) : "; cin>>bil_sgtg_sisi_a;
    	cout<<"  PANJANG SISI SEGITIGA 2 (cm) : "; cin>>bil_sgtg_sisi_b;
    	cout<<"  PANJANG SISI SEGITIGA 3 (cm) : "; cin>>bil_sgtg_sisi_c;
    	cout<<"\n\n";
    	cout<<"II*********************************************************************************II\n";
    	cout<<"II                                   HASIL/RESULT                                  II\n";
    	cout<<"II*********************************************************************************II\n";
	hasil_kll_sgtg = bil_sgtg_sisi_a + bil_sgtg_sisi_b + bil_sgtg_sisi_c;
        cout<<"  Keliling Segitiga dengan sisi: "<<bil_sgtg_sisi_a<<","<<bil_sgtg_sisi_b<<","<<bil_sgtg_sisi_c<<" adalah = "<<hasil_kll_sgtg<<" cm"<<"";
        cout<<"\n\nII*********************************************************************************II\n";
        cout<<"II                                   SELESAI/END                                   II\n";
        cout<<"II*********************************************************************************II\n";
        cout<<"\n\n\n\n";
    }
    if(menu==6){
    	cout<<"II*********************************************************************************II\n";
    	cout<<"II                                  LUAS SEGITIGA                                  II\n";
    	cout<<"II*********************************************************************************II\n";
    	cout<<"\n\n";
    	cout<<"  ALAS SEGITIGA  (cm)        : "; cin>>bil_sgtg_alas;
    	cout<<"  TINGGI SEGITIGA  (cm) : "; cin>>bil_sgtg_tinggi;
    	cout<<"\n\n";
    	cout<<"II*********************************************************************************II\n";
    	cout<<"II                                   HASIL/RESULT                                  II\n";
    	cout<<"II*********************************************************************************II\n";
	hasil_l_sgtg = bil_sgtg_alas * bil_sgtg_tinggi / 2;
        cout<<"  Luas Segitiga dengan alas: "<<bil_sgtg_alas<<" dan "<<"tinggi: "<<bil_sgtg_tinggi<<" adalah = "<<hasil_l_sgtg<<" cm2"<<"";
        cout<<"\n\nII*********************************************************************************II\n";
        cout<<"II                                   SELESAI/END                                   II\n";
        cout<<"II*********************************************************************************II\n";
        cout<<"\n\n\n\n";
    }
    if(menu==7){
    	cout<<"II*********************************************************************************II\n";
    	cout<<"II                                KELILING LINGKARAN                               II\n";
    	cout<<"II*********************************************************************************II\n";
    	cout<<"\n\n";
    	cout<<"  JARI-JARI / RADIUS (cm)        : "; cin>>rdius;
    	cout<<"\n\n";
    	cout<<"II*********************************************************************************II\n";
    	cout<<"II                                   HASIL/RESULT                                  II\n";
    	cout<<"II*********************************************************************************II\n";
	hasil_kll_l = 3.142857142857143 * rdius * 2;
        cout<<"  Keliling Lingkaran dengan radius: "<<rdius<<" adalah = "<<hasil_kll_l<<" cm"<<"";
        cout<<"\n\nII*********************************************************************************II\n";
        cout<<"II                                   SELESAI/END                                   II\n";
        cout<<"II*********************************************************************************II\n";
        cout<<"\n\n\n\n";
    }
    if(menu==8){
    	cout<<"II*********************************************************************************II\n";
    	cout<<"II                                  LUAS LINGKARAN                                 II\n";
    	cout<<"II*********************************************************************************II\n";
    	cout<<"\n\n";
    	cout<<"  JARI-JARI / RADIUS (cm)        : "; cin>>rdius;
    	cout<<"\n\n";
    	cout<<"II*********************************************************************************II\n";
    	cout<<"II                                   HASIL/RESULT                                  II\n";
    	cout<<"IaI*********************************************************************************II\n";
	hasil_l_l = rdius * rdius * 3.142857142857143;
        cout<<"  Luas Lingkaran dengan radius: "<<rdius<<" adalah = "<<hasil_l_l<<" cm2"<<"";
        cout<<"\n\nII*********************************************************************************II\n";
        cout<<"II                                   SELESAI/END                                   II\n";
        cout<<"II*********************************************************************************II\n";
        cout<<"\n\n\n\n";
    }
    if(menu==0){
        cout<<"II*********************************************************************************II\n";
	    cout<<"II                           ERROR 404 : PAGE NOT FOUND                            II\n";
	    cout<<"II                           MENU TIDAK DAPAT DI TEMUKAN                           II\n";
	    cout<<"II*********************************************************************************II\n";	
	}
	cout<<"  APAKAH ANDA INGIN MENGULANGI PROGRAM (y/n) ? : "; cin>>ulang;
	if(ulang=='y'||ulang=='Y'){
		goto awal;
	}
	else if(ulang=='n'||ulang=='N'){
		goto akhir;
	}
	else{
		cout<<"  PILIHAN YANG ANDA MASUKAN SALAH \n";
		getch();
		goto restat;
	}
	akhir:
	cout<<"II*********************************************************************************II\n";
	cout<<"II                   ARYA ADHI NUGRAHA / X TKJ 2 / SMKN 2 PURWODADI                II\n";
	cout<<"II_________________________________________________________________________________II\n";
	cout<<"II            DILARANG MENGUBAH ATAU MENYALIN PROGRAM TANPA SEIZIN PENULIS         II\n";
	cout<<"II*********************************************************************************II\n";
	cout<<"II                HAK CIPTA DILINDUNGI UNDANG-UNDANG   Copyright ©2018             II\n";
	cout<<"II*********************************************************************************II\n\n";

    getch();	

}
