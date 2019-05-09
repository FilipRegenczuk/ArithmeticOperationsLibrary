#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

char *decToBin(int);

int main()
{
//deklaracje u¿ywanych zmiennych
string str;
string str2;
string strZer;
string strBin;
string strDopelnienia;


vector <bool> czarty;

int c;
int licznik = 0;
int reszta = 0;
int pozyczka;

/* zmienne które jednak nie zosta³y u¿yte

vector <vector <int>> macierz;
vector <int> temp;
int kolejnyLicz = 0;
int krotnosc = 0;
char *pointer;
*/

cin >> str;


if(str[0]=='-')                         //sprawdzenie czy wprowadzona liczba jest dodatnia, czy ujemna i wykonanie funkcji dla ujemnej
{
str2 = str.substr(1, str.size()-1);     //usuniêcie minusa z ci¹gu znaków
str = str2;
strZer = str;

c=str.size();

for (unsigned int zeruj=0; zeruj<str.size(); zeruj++)
{
    strZer[zeruj] = '0';
}

   while(str!=strZer)
    {


        pozyczka = 0;
        for(int i=0; i<c; i++)      //konwersja z systemu dzi
        {

            switch (str[i])
            {
            case '9':
            if(pozyczka==1) str2[i] = '9';
            else str2[i] = '4';
            pozyczka = 1;
            break;

            case '8':
            if(pozyczka==1) str2[i] = '9';
            else str2[i] = '4';
            pozyczka = 0;
            break;

            case '7':
            if(pozyczka==1) str2[i] = '8';
            else str2[i] = '3';
            pozyczka = 1;
            break;

            case '6':
            if(pozyczka==1) str2[i] = '8';
            else str2[i] = '3';
            pozyczka = 0;
            break;

            case '5':
            if(pozyczka==1) str2[i] = '7';
            else str2[i] = '2';
            pozyczka = 1;
            break;

            case '4':
            if(pozyczka==1) str2[i] = '7';
            else str2[i] = '2';
            pozyczka = 0;
            break;

            case '3':
            if(pozyczka==1) str2[i] = '6';
            else str2[i] = '1';
            pozyczka = 1;
            break;

            case '2':
            if(pozyczka==1) str2[i] = '6';
            else str2[i] = '1';
            pozyczka = 0;    break;

            case '1':
            if(pozyczka==1) str2[i] = '5';
            else str2[i] = '0';
            pozyczka = 1;
            break;

            case '0':
            if(pozyczka==1) str2[i] = '5';
            else str2[i] = '0';
            pozyczka = 0;
            break;
            }
        }
    str = str2;
    if (pozyczka==1) strBin.insert(0, "1");
    else strBin.insert(0, "0");

    }
    strBin.insert(0, "0");

    int przeniesienie = 1;
    for (int k=strBin.size()-1; k>=0; k--)
    {
        if (strBin[k]=='1')
        {
            if (przeniesienie == 0)
            {
                strBin[k] = '0';
                przeniesienie = 0;
            }
            else
            {
                strBin[k] = '1';
                przeniesienie = 0;
            }
        }
        else
        {
            if (przeniesienie == 0)
            {
                strBin[k] = '1';
                przeniesienie = 0;
            }
            else
            {
                strBin[k] = '0';
                przeniesienie = 1;
            }
        }

    }

    if (strBin[0]==0 && przeniesienie==1)
    {
        strBin.insert(0, "1");
    }

    c = strBin.size();

    reszta = c%32;

    while(c>32)
{
    c = c - 32;
    licznik++;

}
/*macierz.resize(licznik, vector<int>(32, 1));

while(kolejnyLicz!= licznik)
{
    str2 = strBin.substr (kolejnyLicz*32, 32);

    for (int l = 0; l<32; l++)
    {
        if(str2[l] == '0') temp.push_back(0);
        else temp.push_back(1);
    }
    macierz.push_back(temp);
    kolejnyLicz++;

}*/


cout<<"rozmiar strBin"<<strBin.size()<<endl;
czarty.resize(strBin.size()+(32-reszta));

cout<<"rozmiar czartow"<<czarty.size()<<endl;

cout<<"wypisana tablica czartow\n\n|";
for (int i=0; i<32-reszta; i++)
{
    czarty[i]=1;
}

for (int i=0; i<strBin.size(); i++)
{
    if(strBin[i]=='0') czarty[32-reszta+i]=0;
    else czarty[32-reszta+i]=1;


}

for (int i=0; i<czarty.size(); i++)
{
cout<<czarty[i];
}
cout<<"|\n\n";


    return 0;
}


//-------------------------------------------------------------------------------------


else
{
str2 = str;
strZer = str;
c=str.size();

for (int unsigned zeruj=0; zeruj<str.size(); zeruj++)
{
    strZer[zeruj] = '0';
}
cout<<"wyzerowany string:"<<endl<< strZer<<endl;

    while(str!=strZer)
    {


        pozyczka = 0;
        for(int i=0; i<c; i++)
        {

            switch (str[i])
            {
            case '9':
            if(pozyczka==1) str2[i] = '9';
            else str2[i] = '4';
            pozyczka = 1;
            break;

            case '8':
            if(pozyczka==1) str2[i] = '9';
            else str2[i] = '4';
            pozyczka = 0;
            break;

            case '7':
            if(pozyczka==1) str2[i] = '8';
            else str2[i] = '3';
            pozyczka = 1;
            break;

            case '6':
            if(pozyczka==1) str2[i] = '8';
            else str2[i] = '3';
            pozyczka = 0;
            break;

            case '5':
            if(pozyczka==1) str2[i] = '7';
            else str2[i] = '2';
            pozyczka = 1;
            break;

            case '4':
            if(pozyczka==1) str2[i] = '7';
            else str2[i] = '2';
            pozyczka = 0;
            break;

            case '3':
            if(pozyczka==1) str2[i] = '6';
            else str2[i] = '1';
            pozyczka = 1;
            break;

            case '2':
            if(pozyczka==1) str2[i] = '6';
            else str2[i] = '1';
            pozyczka = 0;    break;

            case '1':
            if(pozyczka==1) str2[i] = '5';
            else str2[i] = '0';
            pozyczka = 1;
            break;

            case '0':
            if(pozyczka==1) str2[i] = '5';
            else str2[i] = '0';
            pozyczka = 0;
            break;
            }
        }
    str = str2;
    if (pozyczka==1) strBin.insert(0, "1");
    else strBin.insert(0, "0");

    }
    strBin.insert(0, "0");
}

cout<<"strBin\n"<<strBin<<endl;


cout<<str<<endl;
cout<<str2<<endl;


    c = strBin.size();

    reszta = c%32;

    cout<<reszta<<endl;

    while(c>32)
{
    c = c - 32;
    licznik++;

}
/*



macierz.resize(licznik, vector<int>(32, 0));

while(kolejnyLicz!= licznik)
{
    str2 = strBin.substr (kolejnyLicz*32, 32);

    for (int l = 0; l<32; l++)
    {
        if(str2[l] == '1') temp.push_back(1);
        else temp.push_back(0);
    }
    macierz.push_back(temp);
    kolejnyLicz++;

}
cout<<endl<<endl;
for (unsigned int  m = 0; m < macierz.size(); m++)
{
    for (unsigned int  n = 0; macierz[n].size(); n++)
    {
        cout<<macierz[m][n];
    }

}
cout<<"rozmiar macierzy"<<macierz.size();


//macierz[1][1]=1;
//cout<<macierz[1][1];
//cout<<"cos"<<endl;

*/

cout<<"rozmiar strBin"<<strBin.size()<<endl;
czarty.resize(strBin.size()+(32-reszta));

cout<<"rozmiar czartow"<<czarty.size()<<endl;

cout<<"wypisana tablica czartow\n\n|";
for (int i=0; i<32-reszta; i++)
{
    czarty[i]=0;
}

for (int i=0; i<strBin.size(); i++)
{
    if(strBin[i]=='0') czarty[32-reszta+i]=0;
    else czarty[32-reszta+i]=1;


}

for (int i=0; i<czarty.size(); i++)
{
cout<<czarty[i];
}
cout<<"|";


return 0;
}
