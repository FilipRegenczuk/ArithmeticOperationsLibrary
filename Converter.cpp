#include <iostream>
#include <cstdlib>

using namespace std;

string decToU2(string str);


int main()
{
	string number;

	cout << "Wprowadz liczbe:\n>> ";
	cin >> number;

	cout << "Liczba w U2: " << decToU2(number);
}

string decToU2(string str)
{
	string str2;
	string strZer;
	string strBin;

	int c;
	int pozyczka;

	// gdy liczba jest ujemna:
	if(str[0]=='-')
	{
		str2 = str.substr(1, str.size()-1);
		str = str2;
		strZer = str;

		c = str.size();

		for (int zeruj=0; zeruj<str.size(); zeruj++)
		{
			strZer[zeruj] = '0';
		}


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
		return strBin;
}


	// gdy liczba jest dodatnia:
	else
	{
		str2 = str;
		strZer = str;
		c=str.size();

		for (int zeruj=0; zeruj<str.size(); zeruj++)
		{
			strZer[zeruj] = '0';
		}

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
	return strBin;
}
