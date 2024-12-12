#include "..\include\stat.h"

void stat:setves(int w){
  ves = w;
}
stat:stat(string x, int y, int w){
  model = x;
  cena = y;
  ves = w;
}
void tel:show(){
  cout << "Стоимость =" << " " << cena << " " << "Модель телефона -" << " " << model << " " << "Вес кирпича =" << " " << ves << endl;
}
