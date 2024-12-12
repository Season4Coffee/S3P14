#ifndef TEL_H
#define TEL_H
#include <bits/stdc++.h>
using namespace std;
class tel{
public:
tel();
tel(string x,int y);
int getcena();
void setmodel(string x);
void setcena(int y);
virtual void show();
virtual void edit();
protected:
string model;
int cena;
private:
};
#endif // TEL_H
