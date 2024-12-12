#include "..\include\tel.h"
using namespace std;
tel::tel(){
  model = "Noname";
  cena = 0;
}
tel::tel(string x,int y){
  model = x;
  cena = y;
}
void tel::setcena(int y){
  cena = y;
  cout << "Стоимость =" << " " << cena << endl;
}
void tel::setmodel(string x){
  model = x;
  cout << "Модель телефона -" << " " << model << endl;
}
void tel::show(){
  cout << "Стоимость =" << " " << cena << " " << "Модель телефона -" << " " << model << endl;
}
int tel::getcenf(){
  return cena;
}
void tel::edit(){
  cout << "Стоимость?\n";
  cin >> y;
  setcena(int y);
  cout << "Модель?\n";
  cin << x;
  setmodel(sring y);
}
