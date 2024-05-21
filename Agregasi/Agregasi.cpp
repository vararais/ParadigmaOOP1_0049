#include <iostream>
using namespace std;

#include "anak.h"
#include "ibu.h"

int main()
{
    ibu* varIbu = new ibu("suharti ayam goreng");
    ibu* varIbu2 = new ibu("niki ngekost cibaduyut");
    anak* varAnak1= new anak("bodat ngajoak kieu");
    anak* varAnak2= new anak("siti karbu supra");
    anak* varAnak3 = new anak("rozak kopling cbr");

    varIbu->tambahAnak(varAnak1);
    varIbu->tambahAnak(varAnak2);
    varIbu->tambahAnak(varAnak3);
    varIbu->tambahAnak(varAnak1);

    varIbu->cetakAnak();
    varIbu2->cetakAnak();

    delete varIbu;
    delete varIbu2;
    delete varAnak1;
    delete varAnak2;
    delete varAnak3;

    system("pause");

    return 0;

}

