#include <iostream>
using namespace std;


class array1
{
    int* Arr_Ptr;
    int size;
public:
    array1(int sz) 
    {
        Arr_Ptr = new int[sz];
        if (!Arr_Ptr) exit(1);
        size = sz;
        cout << "Ordinary constructor" << endl;
    }

    array1(const array1& a) 
    {
        int i;
        Arr_Ptr = new int[a.size]; 
        if (!Arr_Ptr) exit(1);
        for (i = 0; i < a.size; i++)
            Arr_Ptr[i] = a.Arr_Ptr[i]; 
        cout << "Copy constructor" << endl;
    }

    ~array1() { delete[] Arr_Ptr; }
    void put(int i, int j)
    {
        if (i >= 0 && i < size)
            Arr_Ptr[i] = j;
        cout << "i= " << i << " Work put" << endl;
    }
    int get(int i)
    {
        return Arr_Ptr[i];
    }
};



int main()
{
    array1 arr(10);
    int i;
    for (i = 0; i < 10; i++)
        arr.put(i, i);

    for (i = 0; i < 10; i++)
        cout << arr.get(i);

    cout << endl;
    array1 new_arr = arr; 

    for (i = 0; i < 10; i++)
        cout << new_arr.get(i);
    cout << endl;
}

