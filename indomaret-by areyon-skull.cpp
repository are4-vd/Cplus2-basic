#include <iostream>
#include <conio.h>

using namespace std;
int main(){
	awal:
	system("cls");
	system("color C9");
	cout<<"||*********************************************************************************************||\n";
	system("color EC");
	cout<<"||================================     SELAMAT DATANG DI     ==================================||\n";
	system("color 9E");
	cout<<"||*********************************************************************************************||\n";
	system("color C9");
	cout<<"||     IIII  III    II  IIIII     IIIIII  III     III     II     IIIII    IIIIII  IIIIIIII     ||\n";
	system("color EC");
	cout<<"||      II   IIIII  II  II  III   II  II  IIII   IIII    IIII    II  II   II         II        ||\n";
	system("color 9E");
	cout<<"||      II   III II II  II   III  II  II  II II II II   II  II   IIIII    IIIIII     II        ||\n";
	system("color C9");
	cout<<"||      II   III  IIII  II  III   II  II  II  III  II  IIIIIIII  II  II   II         II        ||\n";
	system("color EC");
	cout<<"||     IIII  III    II  IIIII     IIIIII  II       II  II    II  II   II  IIIIII     II        ||\n";
	system("color 9E");
	cout<<"||*********************************************************************************************||\n";
	system("color C9");
	cout<<"||              !!~  ~:~!! :~!$!#$$$$$$$$$$8X:!                                                ||\n";
	system("color EC");
	cout<<"||              !~::!H!~   ~.U$X!?R$$$$$$$$MM~/    DIBUAT OLEH :                               ||\n";
	system("color 9E");
	cout<<"||              !~!!!!~~ .:XW$$$U!!?$$$$$$RMM!      NAMA       : ARYA ADHI NUGRAHA             ||\n";
	system("color C9");
	cout<<"||               !:~~~ .:!M'T#$$$$WX??#MRRMMM!      KELAS      : X TKJ 2                       ||\n";
	system("color EC");
	cout<<"||               ~?WuxiW*`   `'#$$$$8!!!!$?!!!      ABSEN      : 09                            ||\n";
	system("color 9E");
	cout<<"||             :X- M$$$$       `'T#$T~!8$WUXU~      MAPEL      : PEMROGRAMAN DASAR             ||\n";
	system("color C9");
	cout<<"||            :#`  ~#$$$m:    0   ~!~ ?$$$$$$       GURU       : Bp Teguh Astoro, S.Kom.       ||\n";
	system("color EC");
	cout<<"||          :!`.-   ~T$$$$8xx.  .xWW- ~''##*'       SEKOLAH    : SMKN 2 PURWODADI              ||\n";
	system("color 9E");
	cout<<"||.....   -~~:!` !    ~?T#$$@@W@*?$$  0   /`                                                   ||\n";
	system("color C9");
	cout<<"||W$@@M!!! .!~~ !!     .:XUW$W!~ `'~:    :                                      IIIIIII        ||\n";
	system("color EC");
	cout<<"||#'~~`.:x)`!!  !H:   !WM$$$$Ti.: .!WUn+!`                                    IIII   IIII      ||\n";
	system("color 9E");
	cout<<"||:::~:!!`:X~ .: ?H.!u '$$$B$$$!W:U!T$$M~     IIIIIIIIII  II  II  IIIIIIII   IIII    IIII      ||\n";
	system("color C9");
	cout<<"||.~~   :X@!.-~   ?@WTWo('*$$$W$TH$! `            II      II II         II          IIII       ||\n";
	system("color EC");
	cout<<"||Wi.~!X$?!-~    : ?$$$B$Wu('**$RM!               II      III           II         IIII        ||\n";
	system("color 9E");
	cout<<"||$R@i.~~ !     :   ~$$$$$B$$en:``                II      II II        II        IIII          ||\n";
	system("color C9");
	cout<<"||?MXT@Wx.~   :  / ~'##*$$$$M~                    II      II  II   IIIII       IIII            ||\n";
	system("color EC");
	cout<<"||#$&%@!T$  :  / ~    $$$$                    =============================  IIIIIIIIIIIII     ||\n";
	system("color 9E");
	cout<<"||@$^%JM!  :  / ~                                                                              ||\n";
	system("color B");
	cout<<"||*********************************************************************************************||\n";
int hrg_blj_a;
int hrg_blj_b;
int hrg_blj_c;
int jml_hrg;
int byr;
int kmbl;
char ulang;
    cout<<" HARGA BELANJA A : "; cin>>hrg_blj_a;
    system("color 9");
    cout<<" HARGA BELANJA B : "; cin>>hrg_blj_b;
    system("color C");
    cout<<" HARGA BELANJA C : "; cin>>hrg_blj_c;
    system("color E");
    cout<<"                 _______________________+\n";
jml_hrg = hrg_blj_a + hrg_blj_b + hrg_blj_c;
    cout<<" JUMLAH TOTAL    : " <<jml_hrg<<"\n";
    cout<<" TOTAL BAYAR     : "; cin>>byr;
kmbl = byr - jml_hrg;
    cout<<" KEMBALIAN       : " <<kmbl<<"\n\n";
    cout<<"||********************************************************************************************||\n";
    cout<<"||                                          SELESAI                                           ||\n";
    cout<<"||********************************************************************************************||\n";
    restat:
	cout<<"  APAKAH ANDA INGIN MENGULANGI QUIZ (y/n) ? : "; cin>>ulang;
	if(ulang=='y'||ulang=='Y'){
		goto awal;
	}
	else if(ulang=='n'||ulang=='N'){
		goto end;
	}
	else{
		cout<<"  PILIHAN YANG ANDAN MASUKAN SALAH \n";
		getch();
		goto restat;
	}
	end:
	cout<<"||********************************************************************************************||\n";
    cout<<"||                              TERIMA KASIH ATAS KUNJUNGAN ANDA                              ||\n";
    cout<<"||********************************************************************************************||\n";
    
    getch();
    
}
