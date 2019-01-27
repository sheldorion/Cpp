#include <iostream>
#include <string>

using namespace std;


class Personel{
	public:
		string isim;
		string soyisim;
		int para;
	Personel(string ad,string soyad,int maas){

		setAd(ad);
		setSoyad(soyad);
		setMaas(maas);


	}	
	void setAd(string ad){
		 isim = ad;
	}
	void setSoyad(string soyad){
		 soyisim = soyad;
	}
	void setMaas(int maas){
		 para= maas;
	}
	void getAd(){
		cout << isim << endl;

	}
	void getSoyad(){
		cout << soyisim << endl;
		
	}
	void getMaas(){
		cout << para << endl;
		
	}
	void zam(){
		para = (para*10)/100+para;
	}


};



int main() {
	Personel calisan1("Hasan","ONAL",2000);
	Personel calisan2("Hatice","ONAL",1231);

	calisan2.getAd();
	calisan2.getSoyad();
	calisan2.getMaas();
	calisan2.zam();
	calisan2.getMaas();
	return 0;
}