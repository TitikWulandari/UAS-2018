#include <iostream>
using namespace std;

class Pengukuran{
	private:
		int tinggi;//tinggi
		int berat;//berat
		string nama;//nama
		int beratideal;//hasil berat
	public:
		Pengukuran(int tinggi ,int berat , string nama);//fungsi 
		int getTinggi();
		int getBerat();
		string getNama();
		float getBeratideal();
		
};

Pengukuran::Pengukuran(int tinggi ,int berat , string nama){
	this->tinggi=tinggi;//petunjuk tinggi
	this->berat=berat;//petunjuk berat
	this->nama=nama;//pentujuk nama
}

int Pengukuran::getTinggi(){
	return this->tinggi;//tinggi
}

int Pengukuran::getBerat(){
	return this->berat;//berat
}

float Pengukuran::getBeratideal(){
	return this->beratideal =tinggi-110;//hasil tinggi - berat
}

string Pengukuran ::getNama(){
	return this -> nama;
}

int main(){
	
	cout<<"============================================"<<endl;
	cout<<"APLIKASI PENGHITUNG BERAT BADAN IDEAL"<<endl;
	cout<<"============================================"<<endl;
	Pengukuran pengukuran = Pengukuran (168,52,"Titik Wulandari");//tampilan di layar tinggi,berat ,nama
	cout<<"Nama         : "<<pengukuran.getNama()<<endl;//nama
	cout<<"Tinggi Badan : "<<pengukuran.getTinggi()<<endl;//tinggi
	cout<<"Berat Badan  : "<<pengukuran.getBerat()<<endl;//barat
	cout<<"Berat badan Idealnya  : "<<pengukuran.getBeratideal()<<endl;//idealnya
	return 0;
}
