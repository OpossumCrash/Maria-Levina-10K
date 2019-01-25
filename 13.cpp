/*13) Напишите переборную программу, находящую для заданной последовательности
длины N целых чисел необходимо: максимальное произведение двух её
элементов, номера которых различаются не менее чем на 5. Программа может
быть неэффективной*/

#include <iostream>

using namespace std;
/*
int main (){

int N; cin >> N;
int min_proisv = 0;
int* arr = new int [N];
for (int i = 0; i < N; i++){
    cin >> arr[i];
};
min_proisv = arr[0] * arr[5];
for (int i = 0; i < (N - 5); i++){
    for(int j = 5; j < (N - i); j++){
        if( (arr[i] * arr[i + j]) < min_proisv)
          min_proisv = arr[i] + arr[i + j] ;
    };
};
cout << "Minimal increase " << min_proisv << endl;

return 0;
} */
