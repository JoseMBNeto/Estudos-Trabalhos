#include <stdio.h>
#include <string.h>

typedef struct Ponto{
        int x;
        int y;
}Ponto;

typedef struct Retangulo{
    Ponto pt1;
    Ponto pt2;
}Rect;

int main(){
    
    Rect r;
    
    r.pt1.x=1;
    r.pt1.y=2;
    r.pt2.x=3;
    r.pt2.y=4;
    
    double base = abs(r.pt2.x - r.pt1.x);
    
    double altura = abs(r.pt2.y - r.pt1.y);
    
    double area = base * altura;
    
    print("A área do retângulo é: %2.lf", area);
    
    return 0;
}