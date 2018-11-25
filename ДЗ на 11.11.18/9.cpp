/*9) Напишите программу, находящую корень функции f, если известно, что f – монотонна.
   Функцию f считаем не известной (т.е. она просто возвращает значение по аргументу).
   Для отладки разумно использовать кубическую функцию.*/
#include <iostream>

using namespace std;


float square( float N) {
 float i;
 if (N == 0){return 0;};
 for (i = 0.00001; i < N; i += 0.00001){
    if (((N / i) >= i - 0.0001) && ((N / i) <= i + 0.001)) {
       return i;
    }
 }
 return i + 0.0001;
};

float f (float a, float b, float c, float y, float x){
    float x2 = x * b;

    if (y > 0) {
        for (float i = 0; i < y; i += 1){
                x = x * x;};
    };
    if (y < 0) {
        y = -y;
        for (float z = 0; z < y; z++){
                x /= x;};
    };

    float x1 = x * a;

    return x1 + x2 + c;
    }

/*int main(){
    float a;
    float b;
    float c;
    float x;
    float y;

    cout << "a*x^(y) + bx + c" << endl;

    cout << "a = ";
    cin >> a;
    cout << endl;
    cout << "b = ";
    cin >> b;
    cout << endl;
    cout << "c = ";
    cin >> c;
    cout << endl;
    cout << "y = ";
    cin >> y;
    cout << endl;
    cout << "x = ";
    cin >> x;
    cout << endl;

  float N = f(a, b, c, y, x);
  cout << N;

  cout << "Square root of function = " << square(N);
}
*/
