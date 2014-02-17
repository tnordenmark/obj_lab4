#include <iostream>
#include <random>
#include <functional>
#include <fstream>
#include <iomanip>
#include "intarray.h"
#include "timer.h"
using namespace std;

// Standardkonstruktor
IntArray::IntArray(): maxSize(0), size(0)
{
    arr = nullptr;
}

// Överlagrad konstruktor
IntArray::IntArray(int pMaxSize): maxSize(pMaxSize), size(0)
{
    arr = new int[maxSize];
}

// Kopieringskonstruktor
IntArray::IntArray(const IntArray &a): maxSize(a.maxSize), size(a.size)
{
    arr = new int[a.maxSize];

    for (size_t i=0; i < a.size; i++)
        arr[i] = a.arr[i];
}

// Destruktor
IntArray::~IntArray()
{
    delete []arr;
    arr = NULL;
    // DEBUG
    //cout << "Kör destruktor på IntArray med storlek " << maxSize << endl;
}

// Getters
int IntArray::getValue(int idx) const
{
    return arr[idx];
}

// Setter
bool IntArray::addValue(int value)
{
    bool valueAdded = false;

    if(size < maxSize)
    {
        arr[size] = value;
        size++;
        valueAdded = true;
    }

    return valueAdded;
}

// Överlagrad =operator
const IntArray &IntArray::operator =(const IntArray &a)
{
    if(this != &a)
    {
        delete []arr;
        arr
                = new int[a.maxSize];
        maxSize = a.maxSize;
        size
                = a.size;
        for (size_t i=0; i < a.size; i++)
            arr[i] = a.arr[i];
    }

    return *this;
}

// Överlagrad []operator
int &IntArray::operator [](int idx)
{
    return arr[idx];
}

// Överlagrad const []operator
int IntArray::operator [](int idx) const
{
    return arr[idx];
}

// Fyll arrayen med slumptal i intervallet 0 - max
void IntArray::fillArray(IntArray &a, int &max, int &rand)
{
    // Initiera slumpdistributörsobjektet generator
    default_random_engine generator(static_cast<unsigned>(time(0)));
    // Slumpa i intervallet 0 ... arraystorlek -1
    uniform_int_distribution<int> random(0, rand);
    // Slå ihop slumpgeneratorn till en funktion för enklare användning
    auto randVal = bind(random, generator);

    // Fyll a[] med slumpade tal mellan 0 och max
    for(int i = 0; i < max; i++)
        //a.addValue(randVal(max));
        a[i] = randVal(max);
}

// Välj och kör sorteringsfunktion, returnera tiden som double.
// If-sats istället för case eftersom jag hade strängar som
// villkor först. Egentligen är det ju sak samma om man väljer
// if eller case
double IntArray::whichSort(IntArray &a, char sort, int max)
{
    // Skapa timer-objekt
    Timer timer;
    // Variabler för tid och genomsnittstid
    double time, sum = 0.0;
    // Variabel för slumpgeneratorns maxvärde
    int rand = a.getMaxSize()-1;

    // Hantera de olika sorteringsalternativen
    if(sort == 'Q')
    {
        for(int i = 0; i < 10; i++)
        {
            // Skapa en ny array för varje varv
            IntArray a(max);
            // Fyll arrayen med slumptal
            a.fillArray(a, max, rand);
            // Starta timern
            timer.start();
            // SOrtera arrayen
            a.qsortWrapper(a, max);
            // Stoppa timern och lagra tiden i time
            time = timer.stop()/1000000;
            // Skriv ut resultat under körning
            cout << "Sortering nr " << i+1 << " = " << time << " s" << endl;
            // Addera varje körnings tid till sum för uträkning av medelvärde
            sum += time;
        }
        // Spara resultatet på fil
        a.writeToFile("Quicksort", a, sum);
    }

    else if(sort == 'I')
    {
        for(int i = 0; i < 10; i++)
        {
            IntArray a(max);
            a.fillArray(a, max, rand);
            timer.start();
            a.insertionSort(a, max);
            time = timer.stop()/1000000;
            cout << "Sortering nr " << i+1 << " = " << time << " s" << endl;
            sum += time;
        }
        a.writeToFile("Insertsort", a, sum);
    }

    else if(sort == 'S')
    {
        for(int i = 0; i < 10; i++)
        {
            IntArray a(max);
            a.fillArray(a, max, rand);
            timer.start();
            a.selectionSort(a, max);
            time = timer.stop()/1000000;
            cout << "Sortering nr " << i+1 << " = " << time << " s" << endl;
            sum += time;
        }
        a.writeToFile("Selectsort", a, sum);
    }

    else if(sort == 'B')
    {
        for(int i = 0; i < 10; i++)
        {
            IntArray a(max);
            a.fillArray(a, max, rand);
            timer.start();
            a.bubbleSort(a, max);
            time = timer.stop()/1000000;
            cout << "Sortering nr " << i+1 << " = " << time << " s" << endl;
            sum += time;
        }
        a.writeToFile("Bubblesort", a, sum);
    }

    else
    {
        // Bör inte kunna hända
        cout << "Något knas inträffade!" << endl;
    }
    // Returnera medelvärdet av sorteringen
    return sum/10;
}


// Sortera array med quicksort
void IntArray::quickSort(IntArray &a, int first, int last)
{
    if(first < last)
    {
        int low = first;
        int high = last;

        if(a[first] > a[last])
            swap(a[first], a[last]);

        do
        {
            // Gå från från början och sök första värdet som är större än a[first]
            do{low++;}while(a[low] < a[first]);

            // Gå från slutet och sök första värdet som är mindre än a[first]
            do{high--;}while(a[high] > a[first]);

            // Byt plats på a[low] och a[high] om low < high
            if(low < high)
                swap(a[low], a[high]);
        // Fortsätt tills low > high
        }while(low <= high);


        // Placera a[first] i sorterad position
        swap(a[first], a[high]);

        // Sortera vänster dellista
        quickSort(a, first, high-1);
        // Sortera höger dellista
        quickSort(a, high+1, last);
    }
}

// Wrapperfunktion för quicksort
void IntArray::qsortWrapper(IntArray &a, int max)
{
    quickSort(a, 0, max-1);
}

// Sortera array med insertionsort
void IntArray::insertionSort(IntArray &a, int max)
{
    if(max > 1)
    {
        int save, j;
        for(int k = max - 1; k >= 0; k--)
        {
            j = k+1;
            save = a[k];
            while(j < max && save > a[j])
            {
                a[j-1] = a[j];
                j++;
            }
            a[j-1] = save;
        }
    }
}

// Sortera array med selectionsort
void IntArray::selectionSort(IntArray &a, int max)
{
    for(int i = 0; i < max-1; i++)
    {
        int smallIdx = i;               //Index för det minsta elementet till höger om pos i
        for(int j = i+1; j < max; j++) // Leta rätt på det minsta "osorterade" elementet
            if(a[j] < a[smallIdx])
                smallIdx = j;           // Spara index för det minsta elementet
        if(smallIdx != i)               // Byt plats om det fanns något mindre än a[i]
            swap(a[i], a[smallIdx]);
    }
}

// Sortera array med bubblesort
void IntArray::bubbleSort(IntArray &a, int max)
{
    for(int pass = 0; pass < max-1; pass++)
        for(int i = 0; i < max-1; i++)
        {
            if(a[i] > a[i+1])           // Jämför elementen i och i+1
                swap(a[i], a[i+1]);        // Byt plats om element i > element i+1
        }
}

// Byt plats på två heltal
void IntArray::swap(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

// Skriv resultat till fil
void IntArray::writeToFile(string algo, IntArray &a, double sum)
{
    // ASCII-tab
    char tab = 9;

    // Öppna filen för skrivning
    fstream outFile("sort_result.txt", ios::out | ios::app);

    // Om det gick bra att öppna filen
    if(outFile.is_open())
    {
        // Skriv resultatets medelvärde (sum/10) till fil med 6 decimaler
        outFile << fixed << setprecision(6);
        outFile << algo << tab << a.getMaxSize() << tab << sum/10 << endl;
    }
    else
        // I/O error, om filen inte kunde öppnas
        cout << "Kunde inte öppna filen." << endl;

    // Stäng utfilen
    outFile.close();
}
