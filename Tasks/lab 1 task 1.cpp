#include <iostream>
using namespace std;

int main()
{
    float arr[20] = {1.2, 4.5, 2.5, 6.2, 5.2, 6.5, 7.4, 8.0, 120.56, 98.7, 
                     45.6, 32.1, 10.5, 15.8, 66.4, 77.3, 88.2, 99.9, 100.1, 55.5};

    int n = sizeof(arr) / sizeof(arr[0]);  

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (*(arr + j) < *(arr + j + 1))  
            {
                float temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }

    cout << "The second highest number is " << *(arr + 1) << endl;

    return 0;
}
