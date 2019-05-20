#include <iostream>
#include <cstdlib>
#include <vector>
#include "conv.h"
#include "adding.h"

using namespace std;

char *decToBin(int);

int main()
{
vector <bool> a, b;
vector <bool> c {1,0};
vector <bool> d {0,1};
//a = conv();
//b = conv();

cout<<endl<<endl<<"jestesmy w mainie"<<endl;
a = adding(c, d);
for (int i = 0; i < a.size(); i++)  cout<<a[i];


return 0;
}
