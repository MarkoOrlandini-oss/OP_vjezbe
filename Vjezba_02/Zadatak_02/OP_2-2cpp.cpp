#include <iostream>
#include <time.h>
using namespace std;

//	Definirati strukturu kruznica i strukturu pravokutnik. Napisati funkciju
//	koja prima niz pravokutnika i jednu kruznicu i vraca broj pravokutnika koji
//	sijeku kružnicu.Niz pravokutnika i kružnica šalju se u funkciju pomocu const referenci.
typedef struct Kruznica         //x^2+y^2=r^2
{
    /*int S[2];
    double r;*/
    int x, y, r; //rad;
    //int pi = 3.14;
}Kruznica;
struct Pravokutnik          // y=kx+l
{
    //int A, B, C, D;
    int A[2], B[2], C[2], D[2];
    /*double weight;
    double height;*/
};
/*Pravokutnik P[5];
Kruznica K;*/

void fillPravokutnik(Pravokutnik *);
void fillKruznica(Kruznica);
int sjecista(Pravokutnik *, Kruznica);
int main()
{
    srand(time(NULL));
    Pravokutnik P[5];
    Kruznica K;

    fillPravokutnik(P);
    for (int i = 0; i < 5; i++)     //ISPIS ZA PROVJERU
    {
        //std::cout << "(" << P[i].A << " " << P[i].B << " " << P[i].C << " " << P[i].D << ")" << std::endl;
        for (int j = 0; j < 2; j++)
        {
            std::cout << "(" << P[i].A[j] << " " << P[i].B[j] << " " << P[i].C[j] << " " << P[i].D[j] << ")" << std::endl;
        }
        std::cout << std::endl;
    }
    //fillKruznica(K);
    //sjecista(P, K);
}
void fillPravokutnik(Pravokutnik * P)
{
    for (int i = 0; i < 5; i++)
    {
        /*P[i].A = rand() % 10;
        P[i].B = rand() % 10;
        P[i].C = rand() % 10;
        P[i].D = rand() % 10;*/
        for (int j = 0; j < 2; j++)
        {
            P[i].A[j] = rand() % 10;
            P[i].B[j] = rand() % 10;
            P[i].C[j] = rand() % 10;
            P[i].D[j] = rand() % 10;
        }
    }
}
void fillKruznica(Kruznica K)
{
    K.x = rand() % 10;
    K.y = rand() % 10;
    K.r = 1;
}
int sjecista(struct Pravokutnik *P, Kruznica K)     //  k=(y2-y1)/(x2-x1)   l=0
{                                                   //  Ideja je uzet stranice pravokutnika kao pravce pa s njima trazit sjecista s kruznicom???
    int s = 0;

    return s;
}