#include "..\include\tel.h"
using namespace std;
tel:tel(){
  model = "Noname";
  cena = 0;
}
tel:tel(string x,int y){
  model = x;
  cena = y;
}
void tel:setcena(int y){
  cena = y;
}
void tel:setmodel(string x){
  model = x;
}
void tel:show(){
  cout << "Стоимость =" << " " << cena << " " << "Модель телефона -" << " " << model << endl;
}
