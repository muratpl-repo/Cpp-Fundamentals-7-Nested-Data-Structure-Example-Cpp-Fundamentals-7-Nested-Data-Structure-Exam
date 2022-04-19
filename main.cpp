#include <iostream>

using namespace std;
//KURU KIDA -> MAKARNA, BAKLÝYAT
//KOZMETIK  -> PARFUM, MAKYAJ
//KASAP     -> TAVUK, DANA
//MANAV     -> SEBZE, MEYVE
struct kategori {
    string isim;
    int urunAdeti;
};
struct Reyonlar {
    string isim;
    bool acikMi;
    int urunSayisi;
    kategori* kategoriOzellikleri;
};
int main()
{
    Reyonlar r1;
    //Reyonlar r2 = {"Kasap",1,300,{"Tavuk",150}};
    Reyonlar r2;

    r2.isim = "Kasap";
    r2.acikMi = 1;
    r2.urunSayisi = 300;

    kategori a = {"Tavuk",150};
    r2.kategoriOzellikleri = &a;

    cout<<r1.isim<<endl;
    cout<<r2.kategoriOzellikleri->isim<<endl;
    cout<<r2.kategoriOzellikleri->urunAdeti<<endl;

    return 0;
}
