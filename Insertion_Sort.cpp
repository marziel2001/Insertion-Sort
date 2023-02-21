#include <iostream>
using namespace std;

void sort(int* tab, int tS, int& sortedEnd)
{
    int swap = tab[sortedEnd + 1];
    for (int i = sortedEnd; i >= 0; i--)
    {
        if (tab[i] > swap)
        {
            tab[i + 1] = tab[i];
            if (i == 0)
            {
                tab[i] = swap;
                break;
            }
        }
        else
        {
            tab[i + 1] = swap;
            break;
        }
    }
}
void wczytaj(int* tab, int tS)
{
    for (int i = 0; i < tS; i++)
    {
        cin >> tab[i];
    }
}
void wypisz(int* tab, int tS)
{
    for (int i = 0; i < tS; i++)
    {
        cout << tab[i] << " ";
    }
}

int main()
{
    while (cin.good())
    {
        int tS = 0, sortedEnd = 0;
        cin >> tS;
        int* tab = new int[tS];
        wczytaj(tab, tS);

        int i = 1;
        while (i < tS)
        {
            sort(tab, tS, sortedEnd);
            wypisz(tab, tS);
            sortedEnd++;
            cout << "\n";
            i++;
        }
        cout << "\n";
        delete[] tab;
    }
}