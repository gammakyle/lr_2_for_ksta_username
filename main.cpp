#include <iostream>

using namespace std;

int main() {
   int N;
   cout << "Введите количество итераций N: ";
   cin >> N;
   int ticker = 0;
   int a = 0, b = 1, nextTerm;
   cout << "Ряд чисел Фибоначчи до " << N << " итераций: ";

   for (int i = 1; i <= N; i++) {
        if(ticker == 2)
        {
            cout << a << " ";
            ticker = 0;
        }
      nextTerm = a + b;
      a = b;
      b = nextTerm;
      ticker++;
   }
   return 0;
}
