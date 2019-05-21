#include "adding.h"

using namespace std;

vector <bool> adding(vector <bool> vecta, vector <bool> vectb)
{
                         //1 2 3 4 5 6 7 8 1 2 3 4 5 6 7 8 1 2 3 4 5 6 7 8 1 2 3 4 5 6 7 8
 // vector <bool> ciag1 = {0,0,0,0,0,1,1,1,0,0,0,0,0,1,0,1,0,1,0,0,1,1,0,0,0,1,1,0,0,0,0,1};
 // vector <bool> ciag2 = {0,0,1,0,1,0,0,1,0,1,1,1,0,1,1,0,0,0,0,1,0,0,0,0,1,1,0,1,1,0,1,1,1,0};
  vector <bool> pomoc;

  vector <bool> partA [32];
  vector <bool> partB [32];
  vector <bool> wynik;

cout<<"\n\njesteœmy w dodawaniu\n\n";
  int uzup;
  int licz=0;
  int dlA = vecta.size();
  int dlB = vecta.size();

  bool przeniesienie=0;
  bool bitwyniku=0;
  if (dlA > dlB)
  {
      if(vectb[0]==0)
      {
           uzup=0;
      }
      else uzup=1;
      pomoc = vecta;

      for(int i=0; i<dlA-dlB; i++)
      {
              pomoc[i]=uzup;
      }
      for(int i=dlA-dlB; i<dlA; i++)
      {
              pomoc[i]=vectb[i-dlA+dlB];
      }
    dlB=dlA;
  }
  else if (dlA < dlB)
  {
      if(vecta[0]==0)
      {
           uzup=0;
      }
      else uzup=1;
      pomoc = vectb;

      for(int i=0; i<dlB-dlA; i++)
      {
              pomoc[i]=uzup;
      }
      for(int i=dlB-dlA; i<dlB; i++)
      {
              pomoc[i]=vecta[i-dlB+dlA];
      }
    dlA=dlB;
  }
cout<<"\n\ndlugosci wyrownane\n\n";
cout<<"size.a="<<vecta.size()<<endl;
cout<<"size.b="<<vectb.size()<<endl;
  while(dlA>0)
  {
      dlA = dlA-32;
      licz++;
  }
    wynik = vecta;
     licz--;
cout<<"licz="<<licz<<endl;

  while (licz>=0)
  {
      for (int i=31; i>=0; i--)
      {
            cout<<"dodaje bit liczby a o wartosci:"<<vecta[licz*32+i]<<" z pozycji:"<<(licz*32+i)<<endl;
            cout<<"do bitu liczby b o wartosci:"<<vectb[licz*32+i]<<" z pozycji:"<<(licz*32+i)<<endl;
          bitwyniku = (vecta[licz*32+i]^vectb[licz*32+i])^przeniesienie;

            cout<<"bit wyniku ma wartosc:"<<bitwyniku<<endl;

          przeniesienie = (((vecta[licz*32+i]^vectb[licz*32+i]))&przeniesienie)|(vecta[licz*32+i]&(vectb[licz*32+i]));

            cout<<"przeniesienie ma wartosc:"<<przeniesienie<<endl;
            cout<<"test długosci wyniku:"<< wynik.size()<<endl;
          wynik[licz*32+i] = bitwyniku;
            cout<<"test długosci wyniku:"<< wynik.size()<<endl;

          //cout<<pomoc[i*licz];
      }



      licz--;
  }

    return wynik;
}
