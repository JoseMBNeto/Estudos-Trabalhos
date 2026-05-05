#include <stdio.h>
#include <math.h>

struct point{
        int x;
        int y;
};

int main(){
    
    struct point pt;
    pt.x=0;
    pt.y=1;
    
    
    struct point pt2 = {4, 3};
    
    int dx = pt.x - pt2.x;
    
    int dy = pt.y - pt2.y;
    
    double dist = sqrt((dx * dx)+ (dy * dy));
    
    printf("Distância entre os pontos: %lf\n", dist);
    
    
    
    return 0;
}