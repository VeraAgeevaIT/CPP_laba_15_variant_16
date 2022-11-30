#include <iostream>
#include <math.h>
#include <windows.h>

using namespace std;


int main() {
    SetConsoleOutputCP(CP_UTF8);
    int lookingIndex = 0;
    bool first_minus = true;
    double summa = 0;
    const int dlinaMassiva = 7;
    double myMassiv[dlinaMassiva] = {3.5, -2.5, 5.8, -4.7, 8.9, 9.9, -1.1};
    double minZn = abs(myMassiv[0]);

    for (int i = 0; i <dlinaMassiva; i++) {
        if (minZn > abs(myMassiv[i])) {
            minZn = abs(myMassiv[i]);
        }
        if (minZn == abs(myMassiv[i])) {
            lookingIndex = i + 1;
        }
        if (myMassiv[i] < 0 && first_minus == true) {
            for ( int j=i; j <=(dlinaMassiva - 1); j++) {
                summa += abs(myMassiv[j + 1]);
            }
            first_minus = !first_minus;
        }



    }

    cout << "сумма модулей элементов массива, расположенных после первого отрицательного элемента " << summa << endl;
    cout << minZn << " минимальное  значение по модулю\n";
    cout << lookingIndex << " порядковый номер минимального по модулю элемента массива ";

}
