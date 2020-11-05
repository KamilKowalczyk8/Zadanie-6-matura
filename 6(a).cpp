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
 //char* endptr; // to jest wskaŸnik na miejsce, gdzie przy konwersji z systemu czworkowego wyst¹pi b³¹d - nieu¿ywana zmienna
 //long liczba;
int wynik=0; //liczba dziesietna, minimum z pliku
 //string liczba1;
 string s; //dwie liczby w systemie czworkowym wczytujemy jako "string" bo mog¹ byæ d³u¿sze od long long
 file.open("dane123.txt"); //otworz plik liczb
 fileOut.open("wyjscie_1234.txt"); //otworz plik do wynikow  //do algorytmu MINIMUM - zak³adamy, ¿e pierwsza liczba jest najmniejsza z dotychczas przeczytanych

     while(!file.eof())        //petla wykonuje sie az program dojedzie do konca pliku
     {
         if(s[0]==s[s.length()-1])wynik++;
     }
     string str(s);
    for(unsigned i=0; i<str.length(); i++)
    {
        if(str[0]==str[str.length()-1])wynik++;
    }
    cout<<wynik<<endl;
 fileOut<< "Wynik" <<" -- "<< wynik <<endl;

 file.close();
 fileOut.close();
 return 0;
}
