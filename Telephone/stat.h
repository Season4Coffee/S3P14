#ifndef STAT_H
#define STAT_H
#include "tel.h"
class stat: public tel{
public:
stat(string x, int y, int w);
void setves(int ves);
void show();
protected:
private:
int ves;
};
#endif // STAT_H
