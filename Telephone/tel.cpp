#include "..\include\tel.h"
using namespace std;
tel:tel(){
  strcpy(model,"noname");
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
