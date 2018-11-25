/*Напишите процедуру, проводящую сжатие символьного динамически выделенного массива.
 Несколько подряд идущих одинаковых букв должны заменяться на их количество и саму букву.
  Например, строка “aaabcccccdd” должна перейти в “3a1b5c2d”.
 Можно считать, что не бывает более девяти одинаковых букв, идущих подряд.*/
 #include <iostream>

using namespace std;
/*
int differ(char* &v, int n){
 int h = 0;
 int l = *v;
 for(int i = 0; i < n; i++){
    if((*(v + i)) != l){
        h++;
        l = *(v + i);
    }
 } return h;

}

int letter(char* &v, int n){
 int k = 0;
 int l = *v;
 for(int i = 0; i < n; i++){
    while((*(v + i)) == l){
        k++;
    }
 } return k;
}


void pere(char* &a, int n){
 int n_nov = differ(a, n);
 char* nov = new char[2 * n_nov];
 int d = 0;
 *(nov + d) = *(letter(*a, n));
 *(nov + d + 1)= *a;
  for(int i = 1; i < 2 * n_nov; i++){
    *(nov + d) = letter(*(a + i), n);
    d++;
    int e = letter(*(a + i), n);
    *(nov + d) = *(a + (e - 1));
  }
  a = nov;
}

int main(){

 int N; cin >> N;

 char* A = new char[N];

  for (int i = 0; i < N; i++){
    cin >> *(A + i);
  };

 pere(A, N);

  for (int i = 0; i < (2 * N); i++){
    cout << *(A + i) << " ";
  };

 delete []A;
 return 0;}*/

