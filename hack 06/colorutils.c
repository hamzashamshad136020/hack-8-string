#include <colorutils.h>

int max(int x, int y, int z)
{
  int m = x > y ? x : y;
  m = m > z ? m : z;
  return m;
}




int rgbToCMYK(int r, int g, int b, double *c, double *m, double *y, double *k)
{

int r1=r/255;
int g1=g/255;
int b1=b/255;
int k=1- max(r1,g1,b1);
int a;
int k= a;
int c=((1-r1-a)/(1-a));
int m=((1-g1-a)/(1-a));
int y=((1-b1-a)/(1-a));

}