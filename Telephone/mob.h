#ifndef MOB_H
#define MOB_H
#include "tel.h"
class mob: public tel{
public:
mob(string x, int y, string z);
void settype(string z);
void show();
void edit();
protected:
private:
string typecn;
};
#endif // MOB_H
