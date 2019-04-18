#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
main(){
	int Jari_jari;
	float pi=3.14,luas;
	cout<<"Masukan Jari-jari : "; cin>>Jari_jari;
	luas = pi * Jari_jari * Jari_jari ;
	cout<<"Luas Lingkaran dengan r : "<<Jari_jari<<" adalah : "<<luas<<"\n";
	getch();
}
