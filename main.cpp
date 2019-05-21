#include <iostream>
#include <cstdlib>
#include <vector>
#include "conv.h"
#include "adding.h"
#include "subtracting.h"


using namespace std;

char *decToBin(int);

int main()
{
vector <bool> a, b;
vector <bool> c;
vector <bool> d;

cout<<"podaj a:"<<endl;

a = conv();


cout<<endl<<"wczytalem a:"<<endl;
for (int i = 0; i < a.size(); i++)  cout<<a[i];
cout<<endl;

cout<<"podaj b:"<<endl;

b = conv();

cout<<endl<<"wczytalem b:"<<endl;
for (int i = 0; i < b.size(); i++)  cout<<b[i];
cout<<endl;


c = adding(a, b);

cout<<endl<<"suma a + b:"<<endl;
for (int i = 0; i < c.size(); i++)  cout<<c[i];
cout<<endl;

d = subtracting(a, b);

cout<<endl<<"roznica a + b:"<<endl;
for (int i = 0; i < d.size(); i++)  cout<<d[i];
cout<<endl;

return 0;
}
