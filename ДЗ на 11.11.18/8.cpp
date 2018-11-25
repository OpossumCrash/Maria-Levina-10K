/*8) Напишите две функции, находящие приближенное значение квадратного и кубического корня.
 В программе не должны использоваться математические библиотеки.*/
#include <iostream>

using namespace std;

/*float square( float N) {
 float i;
 if (N == 0){return 0;};
 for (i = 0.00001; i < N; i += 0.00001){
    if (((N / i) >= i - 0.0001) && ((N / i) <= i + 0.001)) {
       return i;
    }
 }
 return i;
};

float cube(float M){
  float i;
  float a;
  if (M == 0){return 0;};
  for (i = 0.00001; i < M;i += 0.00001){
    a = M / i;
    if (((a / i) >= i + 0.0001) && ((a / i) <= i + 0.001)) {
        return i;
    }
  }
  return i;
};

int main(){

    float A;
    cin >> A;

    cout << "The square root = " << square (A) + 0.0001<< endl;
    cout << "The cube root = " << cube (A)+ 0.0001 << endl;
    return 0;
}*/
