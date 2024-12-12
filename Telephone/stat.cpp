#include "..\include\stat.h"

void stat:setves(int w){
  ves = w;
  cout << "Вес кирпича =" << " " << ves << endl;
}
stat:stat(string x, int y, int w){
  model = x;
  cena = y;
  ves = w;
}
void tel:show(){
  cout << "Стоимость =" << " " << cena << " " << "Модель телефона -" << " " << model << " " << "Вес кирпича =" << " " << ves << endl;
}
void tel::edit(){
  cout << "Стоимость?\n";
  cin >> y;
  setcena(int y);
  cout << "Модель?\n";
  cin << x;
  setmodel(sring y);
  cout << "Вес?\n";
  cin >> w;
  setves(int w);
}
