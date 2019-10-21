#include <iostream>
#include <fstream>
#include <math.h>


using namespace std;

ifstream in("duomenys.txt"); //komanda duomenu nuskaitymui
ofstream out("rezultatai.txt"); //komanda duomenu rasymui


//---- 2darbas, kokiu funkciju man reikes, isvardinu

void nuskaitymas(float &plytosIlgis, float &plytosPlotis, int &sienosIlgis, int &sienosPlotis, int &langoIlgis, int &langoPlotis, int &plytuSkaiciusPaleteje);
//----- tris kartus darysiu ta pati darba - skaiciuosiu plota, tik su skirtingais kinamaisiais, man reiks parsinesti viena reiksme rezultata
float plotoSkaiciavimas(float ilgis, float plotis);

void KiekPlytu(float Plytosplotas, float SienosPlotas, float LangoPlotas, float &kiekReikesPlytu);
void KiekPaleciu(float kiekReikesPlytu, int plytuSkaiciusPaleteje, float &kiekReikesPaleciu);
void rasymasIFaila(float kiekReikesPlytu, float kiekReikesPaleciu);

int main() {

    //----- 1 darbas: kokiu kintamuju man reikes, vis pasipildau spresdama

    float plytosIlgis, plytosPlotis, ilgis, plotis, Plytosplotas, SienosPlotas, LangoPlotas, kiekReikesPlytu, kiekReikesPaleciu;
    int sienosIlgis, sienosPlotis, langoIlgis, langoPlotis, plytuSkaiciusPaleteje;


    //------------- 4darbas iskvieciu funkcija, tik tada ji suveikia

    nuskaitymas(plytosIlgis, plytosPlotis, sienosIlgis, sienosPlotis, langoIlgis, langoPlotis, plytuSkaiciusPaleteje);

    //-------pazingsniui issivedu duomenis i ekrana, nes reikia tikrinti, o ne tiketi

    cout<<plytosIlgis<<"   "<<plytosPlotis<<"   "<<sienosIlgis<<"   "<<sienosPlotis<<"   "<<langoIlgis<<"   "<<langoPlotis<<"   "<<plytuSkaiciusPaleteje<<endl;

    Plytosplotas=plotoSkaiciavimas(plytosIlgis, plytosPlotis);
    cout<<Plytosplotas<<endl;

    SienosPlotas=plotoSkaiciavimas(sienosIlgis, sienosPlotis);
    cout<<SienosPlotas<<endl;

    LangoPlotas=plotoSkaiciavimas(langoIlgis, langoPlotis);
    cout<<LangoPlotas<<endl;

    KiekPlytu(Plytosplotas, SienosPlotas, LangoPlotas, kiekReikesPlytu);
    cout<<ceil(kiekReikesPlytu)<<endl;

    KiekPaleciu(kiekReikesPlytu, plytuSkaiciusPaleteje, kiekReikesPaleciu);
    cout<<round(kiekReikesPaleciu)<<endl;

    rasymasIFaila(kiekReikesPlytu, kiekReikesPaleciu);


    in.close();
    out.close();
  return 0;
}

//----------- 3darbas, nurodau,  ka darys mano funkcijos

void nuskaitymas (float &plytosIlgis, float &plytosPlotis, int &sienosIlgis, int &sienosPlotis, int &langoIlgis, int &langoPlotis, int &plytuSkaiciusPaleteje)
 {
      in>>plytosIlgis>>plytosPlotis>>sienosIlgis>>sienosPlotis>>langoIlgis>>langoPlotis>>plytuSkaiciusPaleteje;

 }
 float plotoSkaiciavimas(float ilgis, float plotis){
     float plotas;
     plotas = ilgis*plotis;
     return plotas;
 }

 void KiekPlytu(float Plytosplotas, float SienosPlotas, float LangoPlotas, float &kiekReikesPlytu){
     float laikinas;
     laikinas=SienosPlotas-LangoPlotas;
     kiekReikesPlytu = laikinas/Plytosplotas;

}
 void KiekPaleciu(float kiekReikesPlytu, int plytuSkaiciusPaleteje, float &kiekReikesPaleciu){
    kiekReikesPaleciu = kiekReikesPlytu/plytuSkaiciusPaleteje;
 }
void rasymasIFaila(float kiekReikesPlytu, float kiekReikesPaleciu){
    out<<ceil(kiekReikesPlytu)<<"   "<<round(kiekReikesPaleciu)<<endl;
}
