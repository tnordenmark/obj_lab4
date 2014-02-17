// arraysort.cpp
// Ett program för att mäta tid för ett antal sorteringsalgoritmer
// Thomas Nordenmark 2014-02-17
//------------------------------------------------------------------------------
#include <iostream>
#include <functional>
#include <random>
#include <iomanip>
#include "intarray.h"
#include "timer.h"
using namespace std;

// De olika arraystorlekarna
const size_t K5 = 5000;
const size_t K10 = 10000;
const size_t K15 = 15000;
const size_t K20 = 20000;
const size_t K25 = 25000;
const size_t K30 = 30000;
const size_t K35 = 35000;
const size_t K40 = 40000;

//---------------------------------------------------------------------------
// Huvudprogram
//---------------------------------------------------------------------------
int main()
{
    // Utskrift med 6 decimalers precision gäller tills vidare
    cout << fixed << setprecision(6);

    // ------------------------------------------------------------------------------
    // Array 5000
    // ------------------------------------------------------------------------------

    int max = K5;
    double time = 0.0;
    IntArray arr(max);

    // Quicksort 'Q'
    cout << endl;
    cout << "===================" << endl;
    cout << "Algoritm: Quicksort" << endl;
    cout << "Arraystorlek: " << arr.getMaxSize() << endl << endl;

    time = arr.whichSort(arr, 'Q', max);
    cout << endl;
    cout << "Genomsnittstid: " << time << endl << endl;

    // Insertionsort 'I'
    time = 0.0;
    cout << endl;
    cout << "=======================" << endl;
    cout << "Algoritm: Insertionsort" << endl;
    cout << "Arraystorlek: " << arr.getMaxSize() << endl << endl;

    time = arr.whichSort(arr, 'I', max);
    cout << endl;
    cout << "Genomsnittstid: " << time << endl << endl;

    // Selectionsort 'S'
    time = 0.0;
    cout << endl;
    cout << "=======================" << endl;
    cout << "Algoritm: Selectionsort" << endl;
    cout << "Arraystorlek: " << arr.getMaxSize() << endl << endl;

    time = arr.whichSort(arr, 'S', max);
    cout << endl;
    cout << "Genomsnittstid: " << time << endl << endl;

    // Bubblesort 'B'
    time = 0.0;
    cout << endl;
    cout << "====================" << endl;
    cout << "Algoritm: Bubblesort" << endl;
    cout << "Arraystorlek: " << arr.getMaxSize() << endl << endl;

    time = arr.whichSort(arr, 'B', max);
    cout << endl;
    cout << "Genomsnittstid: " << time << endl << endl;


    // ------------------------------------------------------------------------------
    // Array 10 000
    // ------------------------------------------------------------------------------

    max = K10;
    time = 0.0;
    arr = IntArray(max);

    // Quicksort 'Q'
    cout << endl;
    cout << "===================" << endl;
    cout << "Algoritm: Quicksort" << endl;
    cout << "Arraystorlek: " << arr.getMaxSize() << endl << endl;

    time = arr.whichSort(arr, 'Q', max);
    cout << endl;
    cout << "Genomsnittstid: " << time << endl << endl;

    // Insertionsort 'I'
    time = 0.0;
    cout << endl;
    cout << "=======================" << endl;
    cout << "Algoritm: Insertionsort" << endl;
    cout << "Arraystorlek: " << arr.getMaxSize() << endl << endl;

    time = arr.whichSort(arr, 'I', max);
    cout << endl;
    cout << "Genomsnittstid: " << time << endl << endl;

    // Selectionsort 'S'
    time = 0.0;
    cout << endl;
    cout << "=======================" << endl;
    cout << "Algoritm: Selectionsort" << endl;
    cout << "Arraystorlek: " << arr.getMaxSize() << endl << endl;

    time = arr.whichSort(arr, 'S', max);
    cout << endl;
    cout << "Genomsnittstid: " << time << endl << endl;

    // Bubblesort 'B'
    time = 0.0;
    cout << endl;
    cout << "====================" << endl;
    cout << "Algoritm: Bubblesort" << endl;
    cout << "Arraystorlek: " << arr.getMaxSize() << endl << endl;

    time = arr.whichSort(arr, 'B', max);
    cout << endl;
    cout << "Genomsnittstid: " << time << endl << endl;


    // ------------------------------------------------------------------------------
    // Array 15 000
    // ------------------------------------------------------------------------------

    max = K15;
    time = 0.0;
    arr = IntArray(max);

    // Quicksort 'Q'
    cout << endl;
    cout << "===================" << endl;
    cout << "Algoritm: Quicksort" << endl;
    cout << "Arraystorlek: " << arr.getMaxSize() << endl << endl;

    time = arr.whichSort(arr, 'Q', max);
    cout << endl;
    cout << "Genomsnittstid: " << time << endl << endl;

    // Insertionsort 'I'
    time = 0.0;
    cout << endl;
    cout << "=======================" << endl;
    cout << "Algoritm: Insertionsort" << endl;
    cout << "Arraystorlek: " << arr.getMaxSize() << endl << endl;

    time = arr.whichSort(arr, 'I', max);
    cout << endl;
    cout << "Genomsnittstid: " << time << endl << endl;

    // Selectionsort 'S'
    time = 0.0;
    cout << endl;
    cout << "=======================" << endl;
    cout << "Algoritm: Selectionsort" << endl;
    cout << "Arraystorlek: " << arr.getMaxSize() << endl << endl;

    time = arr.whichSort(arr, 'S', max);
    cout << endl;
    cout << "Genomsnittstid: " << time << endl << endl;

    // Bubblesort 'B'
    time = 0.0;
    cout << endl;
    cout << "====================" << endl;
    cout << "Algoritm: Bubblesort" << endl;
    cout << "Arraystorlek: " << arr.getMaxSize() << endl << endl;

    time = arr.whichSort(arr, 'B', max);
    cout << endl;
    cout << "Genomsnittstid: " << time << endl << endl;


    // ------------------------------------------------------------------------------
    // Array 20 000
    // ------------------------------------------------------------------------------

    max = K20;
    time = 0.0;
    arr = IntArray(max);

    // Quicksort 'Q'
    cout << endl;
    cout << "===================" << endl;
    cout << "Algoritm: Quicksort" << endl;
    cout << "Arraystorlek: " << arr.getMaxSize() << endl << endl;

    time = arr.whichSort(arr, 'Q', max);
    cout << endl;
    cout << "Genomsnittstid: " << time << endl << endl;

    // Insertionsort 'I'
    time = 0.0;
    cout << endl;
    cout << "=======================" << endl;
    cout << "Algoritm: Insertionsort" << endl;
    cout << "Arraystorlek: " << arr.getMaxSize() << endl << endl;

    time = arr.whichSort(arr, 'I', max);
    cout << endl;
    cout << "Genomsnittstid: " << time << endl << endl;

    // Selectionsort 'S'
    time = 0.0;
    cout << endl;
    cout << "=======================" << endl;
    cout << "Algoritm: Selectionsort" << endl;
    cout << "Arraystorlek: " << arr.getMaxSize() << endl << endl;

    time = arr.whichSort(arr, 'S', max);
    cout << endl;
    cout << "Genomsnittstid: " << time << endl << endl;

    // Bubblesort 'B'
    time = 0.0;
    cout << endl;
    cout << "====================" << endl;
    cout << "Algoritm: Bubblesort" << endl;
    cout << "Arraystorlek: " << arr.getMaxSize() << endl << endl;

    time = arr.whichSort(arr, 'B', max);
    cout << endl;
    cout << "Genomsnittstid: " << time << endl << endl;


    // ------------------------------------------------------------------------------
    // Array 25 000
    // ------------------------------------------------------------------------------

    max = K25;
    time = 0.0;
    arr = IntArray(max);

    // Quicksort 'Q'
    cout << endl;
    cout << "===================" << endl;
    cout << "Algoritm: Quicksort" << endl;
    cout << "Arraystorlek: " << arr.getMaxSize() << endl << endl;

    time = arr.whichSort(arr, 'Q', max);
    cout << endl;
    cout << "Genomsnittstid: " << time << endl << endl;

    // Insertionsort 'I'
    time = 0.0;
    cout << endl;
    cout << "=======================" << endl;
    cout << "Algoritm: Insertionsort" << endl;
    cout << "Arraystorlek: " << arr.getMaxSize() << endl << endl;

    time = arr.whichSort(arr, 'I', max);
    cout << endl;
    cout << "Genomsnittstid: " << time << endl << endl;

    // Selectionsort 'S'
    time = 0.0;
    cout << endl;
    cout << "=======================" << endl;
    cout << "Algoritm: Selectionsort" << endl;
    cout << "Arraystorlek: " << arr.getMaxSize() << endl << endl;

    time = arr.whichSort(arr, 'S', max);
    cout << endl;
    cout << "Genomsnittstid: " << time << endl << endl;

    // Bubblesort 'B'
    time = 0.0;
    cout << endl;
    cout << "====================" << endl;
    cout << "Algoritm: Bubblesort" << endl;
    cout << "Arraystorlek: " << arr.getMaxSize() << endl << endl;

    time = arr.whichSort(arr, 'B', max);
    cout << endl;
    cout << "Genomsnittstid: " << time << endl << endl;


    // ------------------------------------------------------------------------------
    // Array 30 000
    // ------------------------------------------------------------------------------

    max = K30;
    time = 0.0;
    arr = IntArray(max);

    // Quicksort 'Q'
    cout << endl;
    cout << "===================" << endl;
    cout << "Algoritm: Quicksort" << endl;
    cout << "Arraystorlek: " << arr.getMaxSize() << endl << endl;

    time = arr.whichSort(arr, 'Q', max);
    cout << endl;
    cout << "Genomsnittstid: " << time << endl << endl;

    // Insertionsort 'I'
    time = 0.0;
    cout << endl;
    cout << "=======================" << endl;
    cout << "Algoritm: Insertionsort" << endl;
    cout << "Arraystorlek: " << arr.getMaxSize() << endl << endl;

    time = arr.whichSort(arr, 'I', max);
    cout << endl;
    cout << "Genomsnittstid: " << time << endl << endl;

    // Selectionsort 'S'
    time = 0.0;
    cout << endl;
    cout << "=======================" << endl;
    cout << "Algoritm: Selectionsort" << endl;
    cout << "Arraystorlek: " << arr.getMaxSize() << endl << endl;

    time = arr.whichSort(arr, 'S', max);
    cout << endl;
    cout << "Genomsnittstid: " << time << endl << endl;

    // Bubblesort 'B'
    time = 0.0;
    cout << endl;
    cout << "====================" << endl;
    cout << "Algoritm: Bubblesort" << endl;
    cout << "Arraystorlek: " << arr.getMaxSize() << endl << endl;

    time = arr.whichSort(arr, 'B', max);
    cout << endl;
    cout << "Genomsnittstid: " << time << endl << endl;


    // ------------------------------------------------------------------------------
    // Array 35 000
    // ------------------------------------------------------------------------------

    max = K35;
    time = 0.0;
    arr = IntArray(max);

    // Quicksort 'Q'
    cout << endl;
    cout << "===================" << endl;
    cout << "Algoritm: Quicksort" << endl;
    cout << "Arraystorlek: " << arr.getMaxSize() << endl << endl;

    time = arr.whichSort(arr, 'Q', max);
    cout << endl;
    cout << "Genomsnittstid: " << time << endl << endl;

    // Insertionsort 'I'
    time = 0.0;
    cout << endl;
    cout << "=======================" << endl;
    cout << "Algoritm: Insertionsort" << endl;
    cout << "Arraystorlek: " << arr.getMaxSize() << endl << endl;

    time = arr.whichSort(arr, 'I', max);
    cout << endl;
    cout << "Genomsnittstid: " << time << endl << endl;

    // Selectionsort 'S'
    time = 0.0;
    cout << endl;
    cout << "=======================" << endl;
    cout << "Algoritm: Selectionsort" << endl;
    cout << "Arraystorlek: " << arr.getMaxSize() << endl << endl;

    time = arr.whichSort(arr, 'S', max);
    cout << endl;
    cout << "Genomsnittstid: " << time << endl << endl;

    // Bubblesort 'B'
    time = 0.0;
    cout << endl;
    cout << "====================" << endl;
    cout << "Algoritm: Bubblesort" << endl;
    cout << "Arraystorlek: " << arr.getMaxSize() << endl << endl;

    time = arr.whichSort(arr, 'B', max);
    cout << endl;
    cout << "Genomsnittstid: " << time << endl << endl;


    // ------------------------------------------------------------------------------
    // Array 40 000
    // ------------------------------------------------------------------------------

    max = K40;
    time = 0.0;
    arr = IntArray(max);

    // Quicksort 'Q'
    cout << endl;
    cout << "===================" << endl;
    cout << "Algoritm: Quicksort" << endl;
    cout << "Arraystorlek: " << arr.getMaxSize() << endl << endl;

    time = arr.whichSort(arr, 'Q', max);
    cout << endl;
    cout << "Genomsnittstid: " << time << endl << endl;

    // Insertionsort 'I'
    time = 0.0;
    cout << endl;
    cout << "=======================" << endl;
    cout << "Algoritm: Insertionsort" << endl;
    cout << "Arraystorlek: " << arr.getMaxSize() << endl << endl;

    time = arr.whichSort(arr, 'I', max);
    cout << endl;
    cout << "Genomsnittstid: " << time << endl << endl;

    // Selectionsort 'S'
    time = 0.0;
    cout << endl;
    cout << "=======================" << endl;
    cout << "Algoritm: Selectionsort" << endl;
    cout << "Arraystorlek: " << arr.getMaxSize() << endl << endl;

    time = arr.whichSort(arr, 'S', max);
    cout << endl;
    cout << "Genomsnittstid: " << time << endl << endl;

    // Bubblesort 'B'
    time = 0.0;
    cout << endl;
    cout << "====================" << endl;
    cout << "Algoritm: Bubblesort" << endl;
    cout << "Arraystorlek: " << arr.getMaxSize() << endl << endl;

    time = arr.whichSort(arr, 'B', max);
    cout << endl;
    cout << "Genomsnittstid: " << time << endl << endl;

    return 0;
}
