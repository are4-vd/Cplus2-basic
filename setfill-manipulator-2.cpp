#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<iomanip>

using namespace std;

main(){
	system("cls");
	int a;
	int b;
	int c;
	int d;
	int col;
	cout<<"Program Penggunaan Manipulator Setfill \n\n";
	cout<<"-------------------------------------- \n\n";
	cout<<"Daftar warna :\n";
	cout<<"1. Merah      \n";
	cout<<"2. Biru       \n";
	cout<<"3. Hijau      \n";
	cout<<"4. Kuning     \n";
	cout<<"5. Ungu       \n";
	cout<<"6. Semua      \n";
	cout<<"Pilih warna : "; cin>>col;
	if(col==1){
		system("color c");
	}
	if(col==2){
		system("color 9");
	}
	if(col==3){
		system("color a");
	}
	if(col==4){
		system("color e");
	}
	if(col==5){
		system("color d");
	}
	if(col==6){
		goto all;
	}
	awal:
	for(a=0;a<=150;a+=1){
		cout<<setfill('0');
		cout<<setw(a)<<a<<"\n";
	
	}
	for(b=150;b>=1;b-=1){
		cout<<setfill('1');
		cout<<setw(b)<<b<<"\n";
	
	}
	for(c=0;c<=150;c+=1){
		cout<<setfill('0');
		cout<<setw(c)<<c<<"\n";
	
	}
	for(d=150;d>=1;d-=1){
		cout<<setfill('1');
		cout<<setw(d)<<d<<"\n";
	
	}
	goto awal;
	all:
	system("color c");
	for(a=0;a<=150;a+=1){
		cout<<setfill('0');
		cout<<setw(a)<<a<<"\n";
	
	}
	system("color 9");
	for(b=150;b>=1;b-=1){
		cout<<setfill('1');
		cout<<setw(b)<<b<<"\n";
	
	}
	system("color a");
	for(c=0;c<=150;c+=1){
		cout<<setfill('0');
		cout<<setw(c)<<c<<"\n";
	
	}
	system("color e");
	for(d=150;d>=1;d-=1){
		cout<<setfill('1');
		cout<<setw(d)<<d<<"\n";
	
	}
	goto all;
}
