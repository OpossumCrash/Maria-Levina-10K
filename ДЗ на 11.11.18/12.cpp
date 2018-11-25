/*Напишите процедуру, дописывающую к каждому элементу динамически выделенного массива справа его квадрат.
({1,2,3,4}->{1,1,2,4,3,9,4,16}). По окончании работы процедуры количество выделенной памяти должно увеличиться.*/

#include <iostream>

using namespace std;

/*int sqr(int b){
    return b * b;}


void pere(int* &a, int n){

 int* nov = new int[2 * n];
 int k = 0;
  for(int i = 0; i < 2 * n; i++){
    *(nov + k) = *(a + i);
    k++;
    *(nov + k) = sqr(*(a + i));
  }
  a = nov;
}

int main(){
int N; cin >> N;

int* A = new int[N];
for (int i = 0; i < N; i++){
    cin >> *(A + i);
};

pere(A, N);

for (int i = 0; i < (2 * N); i++){
    cout << *(A + i) << " ";
};

delete []A;
return 0;}*/
