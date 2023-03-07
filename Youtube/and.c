#include <stdio.h>
int main(void)
{
unsigned u, v, w, x = 0x10,
y = 0x110, z = 0x0;
u = x && y;
v = x && z;
w = y && z;
printf("u = %x\tv = %x\tw = %x\n", u, v, z);
return(0);
}

