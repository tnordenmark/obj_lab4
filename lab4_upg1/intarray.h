#ifndef INTARRAY_H
#define INTARRAY_H
#include <cstddef>
#include <string>

class IntArray
{
    private:
        int *arr; // Pekare till arrayen
        std::size_t maxSize; // Arrayens maximala storlek
        std::size_t size; // IntArrayens aktuella storlek

    public:
        // Standardkonstruktor
        IntArray();
        // Överlagrad konstruktor
        IntArray(int pNum);
        // Kopieringskonstruktor
        IntArray(const IntArray &a);

        // Destruktor
        ~IntArray();

        // Getters
        std::size_t getMaxSize() const {return maxSize;}
        std::size_t getSize() const {return size;}
        int getValue(int idx) const;

        // Setters
        bool addValue(int value);

        // Överlagrade operatorer
        const IntArray &operator =(const IntArray &a);
        int &operator [](int idx);
        int operator [](int idx) const;
        int operator <(const IntArray &a) const;
        int operator >(const IntArray &a) const;

        // Medlemsfunktioner
        void fillArray(IntArray &a, int &max, int &rand);
        double whichSort(IntArray &a, char sort, int max);
        void quickSort(IntArray &a, int first, int last);
        void qsortWrapper(IntArray &a, int max);
        void insertionSort(IntArray &a, int max);
        void selectionSort(IntArray &a, int max);
        void bubbleSort(IntArray &a, int max);
        void swap(int &a, int&b);
        void writeToFile(std::string algo, IntArray &a, double sum);
};

#endif // INTARRAY_H
