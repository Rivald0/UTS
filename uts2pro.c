#include <stdio.h>

struct pecahan
{
    int pem;
    int pen;
};

struct pecahan p1, p2, pkali;


int main (){
    printf ("P1: \n"); scanf("%d %d", &p1.pem, &p1.pen);

    printf ("P2 : \n"); scanf("%d %d", &p2.pem, &p2.pen);

    pkali.pem = p1.pem * p2.pem;
    pkali.pen = p1.pen * p2.pen;

    printf("\n Pkali %d/%d", pkali.pem, pkali.pen);
}