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
 //char* endptr; // to jest wskaźnik na miejsce, gdzie przy konwersji z systemu czworkowego wystąpi błąd - nieużywana zmienna
 //long liczba;
 long wynik=0; //liczba dziesietna, minimum z pliku
 //string liczba1;
 string s; //dwie liczby w systemie czworkowym wczytujemy jako "string" bo mogą być dłuższe od long long
 file.open("dane123.txt"); //otworz plik liczb
 fileOut.open("wyjscie_123.txt"); //otworz plik do wynikow  //do algorytmu MINIMUM - zakładamy, że pierwsza liczba jest najmniejsza z dotychczas przeczytanych
 

     while(!file.eof())        //petla wykonuje sie az program dojedzie do konca pliku
     {
             // file>>liczba1;
             // liczba =  strtol(liczba1.c_str(), NULL, 8);
               //^konwersja z systemu czworkowego do dziesietnego, string (C++) trzeba zamienić na char * (C) funkcja .c_str()
               //zmienna endptr wskazuje na znak w stringu, który nie pasuje do systemu czwórkowego - tu niesprawdzone, bo zakładamy, że dane są poprawne!
               if (s[0] == s[s.length()-1]) //jeśli to pierwsza liczba z pliku - będzie nowym MINIMUM
               {
                            wynik++;
               }

     }
      cout<< wynik;
 fileOut<< "Wynik" <<" -- "<< wynik <<endl;

 file.close();
 fileOut.close();
 return 0;
}
