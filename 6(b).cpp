#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
 ifstream file; //plik wejsciowy
 ofstream fileOut; //plik wynikowy do zapisu
 //char* endptr; // to jest wska�nik na miejsce, gdzie przy konwersji z systemu czworkowego wyst�pi b��d - nieu�ywana zmienna
 long liczba=0;
 string liczba1;
 string s; //dwie liczby w systemie czworkowym wczytujemy jako "string" bo mog� by� d�u�sze od long long
 file.open("dane123.txt"); //otworz plik liczb
 fileOut.open("wyjscie_123.txt"); //otworz plik do wynikow  //do algorytmu MINIMUM - zak�adamy, �e pierwsza liczba jest najmniejsza z dotychczas przeczytanych
 

     while(!file.eof())        //petla wykonuje sie az program dojedzie do konca pliku
     {
              file>>liczba1;
              liczba =  strtol(liczba1.c_str(), NULL, 8);
              string s = std::to_string(liczba);
               //^konwersja z systemu czworkowego do dziesietnego, string (C++) trzeba zamieni� na char * (C) funkcja .c_str()
               //zmienna endptr wskazuje na znak w stringu, kt�ry nie pasuje do systemu czw�rkowego - tu niesprawdzone, bo zak�adamy, �e dane s� poprawne!
            

     }
      cout<< liczba;
 fileOut<< "Wynik" <<" -- "<< liczba <<endl;

 file.close();
 fileOut.close();
 return 0;
}
