#include<stdio.h>
#include<conio.h>
#include<iostream>


using namespace std;
main(){
	cout<<"II*********************************************************************************II\n";
	cout<<"II                             PROGRAM ARITMATIKA                                  II\n";
	cout<<"II*********************************************************************************II\n";
    cout<<"II*            III   III   IIIIIIIIII II  II  IIIIIIII     IIII IIII              *II\n";
    cout<<"II*             III III       III     II II        III      II   II               *II\n";
    cout<<"II*               III         III     IIII         III      II   II               *II\n";
    cout<<"II*             III III       III     II II       III       II   II               *II\n";
    cout<<"II*            III   III      III     II  II  IIIIII       IIII IIII              *II\n";
	cout<<"II_________________________________________________________________________________II\n";
	cout<<"II   OPERASI ARITMATIKA :            ||    DIBUAT OLEH :                           II\n";
	cout<<"II   1.PENJUMLAHAN                   ||    NAMA      : ARYA ADHI NUGRAHA           II\n";
	cout<<"II   2.PENGURANGAN                   ||    KELAS     : X TKJ 2                     II\n";
	cout<<"II   3.PERKALIAN                     ||    ABSEN     : 09                          II\n";
	cout<<"II   4.PEMBAGIAN                     ||    MAPEL     : PEMROGRAMAN DASAR           II\n";
	cout<<"II   5.SISA HASIL BAGI               ||    GURU      : Bp Teguh Astoro, S.Kom.     II\n";
	cout<<"II   6.SEMUA OPERASI                 ||    SEKOLAH   : SMKN 2 PURWODADI            II\n";
	cout<<"II*********************************************************************************II\n";
	cout<<"II                       NOTE : PILIH MENU UNTUK MEMULAI                           II\n";
	cout<<"II*********************************************************************************II\n";
int arya;
int hasil_tambah;
int hasil_kurang;
int hasil_kali;
int hasil_bagi;
int hasil_sisa;
int hasil_all_tambah;
int hasil_all_kurang;
int hasil_all_kali;
int hasil_all_bagi;
int hasil_all_sisa;
int bil_tambah_a;
int bil_tambah_b;
int bil_kurang_a;
int bil_kurang_b;
int bil_kali_a;
int bil_kali_b;
int bil_bagi_a;
int bil_bagi_b;
int bil_sisa_a;
int bil_sisa_b;
int bil_all_a;
int bil_all_b;
    cout<<"\n";
    cout<<" KETIKAN ANGKA DARI OPERASI ARITMATIKA YANG ANDA INGINKAN : "; cin>>arya;
    cout<<"\n\n";
    if(arya==1){
    	cout<<"II*****************************************************************II\n";
    	cout<<"II                    OPERASI PENJUMLAHAN (+)                      II\n";
    	cout<<"II*****************************************************************II\n";
    	cout<<"\n\n";
    	cout<<" KETIKAN NILAI A : "; cin>>bil_tambah_a;
    	cout<<" KETIKAN NILAI A : "; cin>>bil_tambah_b;
    	cout<<"\n\n";
    	cout<<"II*****************************************************************II\n";
    	cout<<"II                        HASIL/RESULT                             II\n";
    	cout<<"II*****************************************************************II\n";
    hasil_tambah = bil_tambah_a + bil_tambah_b;
        cout<<"==>>"<<bil_tambah_a<<" + "<<bil_tambah_b<<" = "<<hasil_tambah<<"";
        cout<<"\n\nII*****************************************************************II\n";
        cout<<"II                        SELESAI/END                              II\n";
        cout<<"II*****************************************************************II\n";
        cout<<"\n\n\n\n";
    }
    if(arya==2){
    	cout<<"II*****************************************************************II\n";
    	cout<<"II                    OPERASI PENGURANGAN (-)                      II\n";
    	cout<<"II*****************************************************************II\n";
    	cout<<"\n\n";
    	cout<<" KETIKAN NILAI A : "; cin>>bil_kurang_a;
    	cout<<" KETIKAN NILAI A : "; cin>>bil_kurang_b;
    	cout<<"\n\n";
    	cout<<"II*****************************************************************II\n";
    	cout<<"II                        HASIL/RESULT                             II\n";
    	cout<<"II*****************************************************************II\n";
    hasil_kurang = bil_kurang_a - bil_kurang_b;
        cout<<"==>>"<<bil_kurang_a<<" - "<<bil_kurang_b<<" = "<<hasil_kurang<<"";
        cout<<"\n\nII*****************************************************************II\n";
        cout<<"II                        SELESAI/END                              II\n";
        cout<<"II*****************************************************************II\n";
        cout<<"\n\n\n\n";
    }
    if(arya==3){
    	cout<<"II*****************************************************************II\n";
    	cout<<"II                      OPERASI PERKALIAN (X)                      II\n";
    	cout<<"II*****************************************************************II\n";
    	cout<<"\n\n";
    	cout<<" KETIKAN NILAI A : "; cin>>bil_kali_a;
    	cout<<" KETIKAN NILAI A : "; cin>>bil_kali_b;
    	cout<<"\n\n";
    	cout<<"II*****************************************************************II\n";
    	cout<<"II                        HASIL/RESULT                             II\n";
    	cout<<"II*****************************************************************II\n";
    hasil_kali = bil_kali_a * bil_kali_b;
        cout<<"==>>"<<bil_kali_a<<" X "<<bil_kali_b<<" = "<<hasil_kali<<"";
        cout<<"\n\nII*****************************************************************II\n";
        cout<<"II                        SELESAI/END                              II\n";
        cout<<"II*****************************************************************II\n";
        cout<<"\n\n\n\n";
    }
    if(arya==4){
    	cout<<"II*****************************************************************II\n";
    	cout<<"II                     OPERASI PEMBAGIAN (:)                       II\n";
    	cout<<"II*****************************************************************II\n";
    	cout<<"\n\n";
    	cout<<" KETIKAN NILAI A : "; cin>>bil_bagi_a;
    	cout<<" KETIKAN NILAI A : "; cin>>bil_bagi_b;
    	cout<<"\n\n";
    	cout<<"II*****************************************************************II\n";
    	cout<<"II                        HASIL/RESULT                             II\n";
    	cout<<"II*****************************************************************II\n";
    hasil_bagi = bil_bagi_a / bil_bagi_b;
        cout<<"==>>"<<bil_bagi_a<<" : "<<bil_bagi_b<<" = "<<hasil_bagi<<"";
        cout<<"\n\nII*****************************************************************II\n";
        cout<<"II                        SELESAI/END                              II\n";
        cout<<"II*****************************************************************II\n";
        cout<<"\n\n\n\n";
    }
    if(arya==5){
    	cout<<"II*****************************************************************II\n";
    	cout<<"II                 OPERASI SISA HASIL BAGI (%)                     II\n";
    	cout<<"II*****************************************************************II\n";
    	cout<<"\n\n";
    	cout<<" KETIKAN NILAI A : "; cin>>bil_sisa_a;
    	cout<<" KETIKAN NILAI A : "; cin>>bil_sisa_b;
    	cout<<"\n\n";
    	cout<<"II*****************************************************************II\n";
    	cout<<"II                        HASIL/RESULT                             II\n";
    	cout<<"II*****************************************************************II\n";
    hasil_sisa = bil_sisa_a % bil_sisa_b;
        cout<<"==>>"<<bil_sisa_a<<" % "<<bil_sisa_b<<" = "<<hasil_sisa<<"";
        cout<<"\n\nII*****************************************************************II\n";
        cout<<"II                        SELESAI/END                              II\n";
        cout<<"II*****************************************************************II\n";
        cout<<"\n\n\n\n";
    }
    if(arya==6){
    	cout<<"II*****************************************************************II\n";
    	cout<<"II                  SEMUA OPERASI (+) (-) (X) (:)                  II\n";
    	cout<<"II*****************************************************************II\n";
    	cout<<"\n\n";
    	cout<<" KETIKAN NILAI A : "; cin>>bil_all_a;
    	cout<<" KETIKAN NILAI A : "; cin>>bil_all_b;
    	cout<<"\n\n";
    	cout<<"II*****************************************************************II\n";
    	cout<<"II                        HASIL/RESULT                             II\n";
    	cout<<"II*****************************************************************II\n";
    hasil_all_tambah = bil_all_a + bil_all_b;
    hasil_all_kurang = bil_all_a - bil_all_b;
    hasil_all_kali = bil_all_a * bil_all_b;
    hasil_all_bagi = bil_all_a / bil_all_b;
    hasil_all_sisa = bil_all_a % bil_all_b;
        cout<<"==>>"<<bil_all_a<<" + "<<bil_all_b<<" = "<<hasil_all_tambah<<"\n";
        cout<<"==>>"<<bil_all_a<<" - "<<bil_all_b<<" = "<<hasil_all_kurang<<"\n";
        cout<<"==>>"<<bil_all_a<<" X "<<bil_all_b<<" = "<<hasil_all_kali<<"\n";
        cout<<"==>>"<<bil_all_a<<" / "<<bil_all_b<<" = "<<hasil_all_bagi<<"\n";
        cout<<"==>>"<<bil_all_a<<" % "<<bil_all_b<<" = "<<hasil_all_sisa<<"\n";
        cout<<"\n\nII*****************************************************************II\n";
        cout<<"II                        SELESAI/END                              II\n";
        cout<<"II*****************************************************************II\n";
        cout<<"\n\n\n\n";
    }
    if(arya==0){
    cout<<"II*********************************************************************************II\n";
	cout<<"II                           ERROR 404 : PAGE NOT FOUND                            II\n";
	cout<<"II                           MENU TIDAK DAPAT DI TEMUKAN                           II\n";
	cout<<"II*********************************************************************************II\n";	
	}
	cout<<"II*********************************************************************************II\n";
	cout<<"II                   ARYA ADHI NUGRAHA / X TKJ 2 / SMKN 2 PURWODADI                II\n";
	cout<<"II_________________________________________________________________________________II\n";
	cout<<"II                        HAK CIPTA DILINDUNGI UNDANG-UNDANG                       II\n";
	cout<<"II*********************************************************************************II\n";
	cout<<"II                HAK CIPTA DILINDUNGI UNDANG-UNDANG   Copyright ©2018             II\n";
	cout<<"II*********************************************************************************II\n";
    
	
}
