#include <iostream>

using namespace std;

int main()
{
    int val[] = { 5,3,4,1,7,8,4,6,2,10};
    for (int i = 0; i < size(val); i++) {
        for (int j = 0; j < (size(val) - i - 1); j++) {
            int temp = 0;
            if (val[j] > val[j + 1]) {
                temp = val[j];
                val[j] = val[j + 1];
                val[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < size(val); i++) {
        cout << val[i] << endl;
    }
}

