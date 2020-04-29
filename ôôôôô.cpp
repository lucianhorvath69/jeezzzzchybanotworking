#include <stdio.h>

void main()
{
    double x, y,nejmensi; // x = 1. číslo, y = 2. číslo, nejmensi = promnená do které uloží číslo po srovnání

    printf("Zadej dve cisla : ");   // Zadej 2 cisla
    scanf_s("%lf %lf", &x, &y);     // ulož je 
   
    if (x < y) {      //Porovnej x a y = kdyz bude x mensi jak y: 

        nejmensi = x; // uloz x (pokud je mensi jak y)

    }                  
    else {           //jinak
        if (y < x)  //Porovnej x a y = kdyz bude y mensi jak x:  
            nejmensi = y;   // uloz y (pokud je mensi jak x)

    }                  
    printf("Nejmensi cislo je %f \n", nejmensi); //Pis NEJmensi cislo z promnené "nejmensi"


   
}
