#include "..\include\mob.h"

void mob:settytpe(string z){
  typecn = z;
  cout << "Тип связи -" << " " << typecn << endl;
}
mob:mob(string x, int y, string z){
  model = x;
  cena = y;
  typecn = z;
}
void tel:show(){
  cout << "Стоимость =" << " " << cena << " " << "Модель телефона -" << " " << model << " " << "Тип связи -" << " " << typecn << endl;
}
void tel::edit(){
  cout << "Стоимость?\n";
  cin >> y;
  setcena(int y);
  cout << "Модель?\n";
  cin << x;
  setmodel(sring y);
  cout << "Тип связи?\n";
  cin >> z;
  setves(string z);
}

