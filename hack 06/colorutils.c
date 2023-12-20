#include <colorutils.h>

int max(int x, int y, int z)
{
  int m = x > y ? x : y;
  m = m > z ? m : z;
  return m;
}




int rgbToCMYK(int r, int g, int b, double *c, double *m, double *y, double *k)
{

if ((r<0||r>255)||(g<0||g>255)||(b<0||b>255))
{
    return 1;
}

else{
int r1=r/255;
int g1=g/255;
int b1=b/255;
int k1=1- max(r1,g1,b1);

int c1=((1-r1-k1)/(1-k1));
int m1=((1-g1-k1)/(1-k1));
int y1=((1-b1-k1)/(1-k1));
c=&c1;
m=&m1;
y=&y1;
k=&k1;

return 0;

}

}