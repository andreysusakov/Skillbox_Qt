#include <iostream>
#include <vector>

using namespace std;

void swapvec(vector<int> &vec, int *array, int n)
{

    for (int i = 0; i < n; i++)
    {
        swap(vec[i], *(array + i));
    }
}

int main()
{
    int n = 5;
    vector<int> a = {1, 2, 3, 4, 5};
    int b[n] = {6, 7, 8, 9, 0};

    int *array = b;

    swapvec(a, b, n); // можно обойтись без n и явно указывать размер массива в циклах

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;

    for (int j = 0; j < n; j++)
    {
        cout << *(array + j) << " ";
    }

    return 0;
}