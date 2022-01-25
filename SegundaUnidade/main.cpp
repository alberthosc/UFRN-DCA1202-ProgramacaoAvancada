#include "Sculptor.h"
#include <iostream>
#include <fstream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    Sculptor Desenho(100,100,100);
    Desenho.setColor(0.5,0,0,0.5);
    Desenho.putVoxel(0,0,0);
    Desenho.cutVoxel(0,0,0);
    Desenho.putBox(0,0,0,0,0,0);
    Desenho.cutBox(0,0,0,0,0,0);
    Desenho.setColor(1,1,0,0.5);
   // Desenho.putSphere(0,0,0,0);
   // Desenho.cutSphere(0,0,0,0);
    Desenho.putEllipsoid(50,50,50,40,45,30);
    Desenho.cutEllipsoid(50,50,50,30,42,40);
    Desenho.writeOFF("write.off");
    return 0;
}
