#ifndef STAT_H
#define STAT_H
#include "tel.h"
class mob: public tel{
public:
mob(string x, int y, int w);
void setves(int ves);
void show();
protected:
private:
int ves;
};
#endif // STAT_H
