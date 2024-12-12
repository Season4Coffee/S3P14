#include "include\tel.h"
#include "include\mob.h"
#include "include\stat.h"

using namespace std;

int main(){
  mob m1("Ifivey",15330,"4G");
  stat s1("lunoty",2300,1230);
  mob m2("lunoty",23000,"5G");
  stat s2("Ifivey",7500,670);
  tel* t[4];
  t[0]=&m1;
  t[1]=&m2;
  t[2]=&s1;
  t[3]=&s2;
  int mincena=t[0]->getcena;
  int ras=0

  for(i=0;i<4;i++){
    t[i]->show();
    cout << "Изменить?(1)\n" << ras << endl;
    if(ras==1){
      t[i]->edit();
    }
  }
  for(i=0;i<4;i++){
    prob=t[i]->getcena
    if(prob<mincena){
      mincena=prob;
    }
    else{
      mincena=mincena;
    }
  }
}
