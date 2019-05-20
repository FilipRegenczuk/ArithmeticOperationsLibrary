#include "adding.h"

using namespace std;

vector <bool> adding(vector <bool> vecta, vector <bool> vectb)
{
                       //1 2 3 4 5 6 7 8 1 2 3 4 5 6 7 8 1 2 3 4 5 6 7 8 1 2 3 4 5 6 7 8
  vector <bool> ciag1 = {0,0,0,0,0,1,1,1,0,0,0,0,0,1,0,1,0,1,0,0,1,1,0,0,0,1,1,0,0,0,0,1};
  vector <bool> ciag2 = {0,0,1,0,1,0,0,1,0,1,1,1,0,1,1,0,0,0,0,1,0,0,0,0,1,1,0,1,1,0,1,1,1,0};
  vector <bool> pomoc;

  vector <bool> partA [32];
  vector <bool> partB [32];
  vector <bool> wynik;

cout<<"\n\njesteœmy w dodawaniu\n\n";
  int uzup;
  int licz=0;
  int dlA = ciag1.size();
  int dlB = ciag2.size();

  bool przeniesienie=0;
  bool liczbawyniku=0;
  if (dlA > dlB)
  {
      if(ciag2[0]==0)
      {
           uzup=0;
      }
      else uzup=1;
      pomoc = ciag1;

      for(int i=0; i<dlA-dlB; i++)
      {
              pomoc[i]=uzup;
      }
      for(int i=dlA-dlB; i<dlA; i++)
      {
              pomoc[i]=ciag2[i-dlA+dlB];
      }
    dlB=dlA;
  }
  else if (dlA < dlB)
  {
      if(ciag1[0]==0)
      {
           uzup=0;
      }
      else uzup=1;
      pomoc = ciag2;

      for(int i=0; i<dlB-dlA; i++)
      {
              pomoc[i]=uzup;
      }
      for(int i=dlB-dlA; i<dlB; i++)
      {
              pomoc[i]=ciag1[i-dlB+dlA];
      }
    dlA=dlB;
  }
cout<<"\n\ndlugosci wyrownane\n\n";
  while(dlA>=0)
  {
      dlA = dlA-32;
      licz++;
  }
    wynik = pomoc;
cout<<"licz="<<licz<<endl;
  while (licz!=0)
  {
      for (int i=31; i>=0; i--)
      {


          //cout<<pomoc[i*licz];
      }



      licz--;
  }

    return pomoc;
}
