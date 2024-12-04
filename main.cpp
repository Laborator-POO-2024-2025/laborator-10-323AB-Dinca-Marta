// lab10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
//#include "Bijuterie.h"
#include "Bratara.h"
#include "Inel.h"
#include "Lant.h"
/*int main()
{
    std::cout << "Hello World!\n";
}*/
int main() {
    int nrBijuterii = 8;
    Bijuterie** bijuterii = new Bijuterie * [nrBijuterii];
    bijuterii[0] = new Inel("pandorra", 5, 6.23f);
    bijuterii[1] = new Inel("b&b", 6, 78.23f);
    bijuterii[2] = new Inel("nustiu", 8, 18.223f);
    bijuterii[3] = new Bratara("idk", 3, 61.273f);
    bijuterii[4] = new Bratara("iasdk", 32, 11.273f);
    bijuterii[5] = new Bratara("lala", 2, 66.573f);
    bijuterii[6] = new Lant("iubi", 2, 162.12f);
    bijuterii[7] = new Lant("idgsd", 12, 6217.273f);
    for (int i = 0; i < nrBijuterii; i++)
    {
        std::cout << bijuterii[i] << '\n'; 
    }
    for (int i = 0; i < nrBijuterii-1;i++)
    {
        for (int j = i + 1;j < nrBijuterii;j++) {
            if (bijuterii[i]->getPret() > bijuterii[j]->getPret()) {
                Bijuterie* aux = bijuterii[i];
                bijuterii[i] = bijuterii[j];
                bijuterii[j] = aux;
               // delete[] aux;
            }

        }

    }
    std::cout << "sortate" << std::endl;
    for (int i = 0; i < nrBijuterii; i++)
    {
        std::cout << bijuterii[i] << '\n';
    }
    for (int i = 0; i < nrBijuterii; i++)
    {
        delete bijuterii[i];
    }

    delete[] bijuterii;

    return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

