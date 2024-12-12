#include "..\include\mob.h"
 void mob:settytpe(string z){
  typecn = z;
}
mob:mob(string x, int y, string z){
  model = x;
  cena = y;
  typecn = z;
}
void tel:setcena(int y){
  cena = y;
}
void tel:setmodel(string x){
  model = x;
}
void tel:show(){
  cout << "Стоимость =" << " " << cena << " " << "Модель телефона -" << " " << model << " " << "Тип связи -" << " " << typecn << endl;
}
