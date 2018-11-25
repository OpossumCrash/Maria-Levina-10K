/*Ќапишите процедуру, провод€щую УразжатиеФ символьного динамически выделенного массива, сделанное в прошлой задаче. Ќапример строка У3a1b5c2d У
должна перейти в УaaabcccccddФ. ћожно считать, что не бывает более дев€ти
одинаковых букв, идущих подр€д.*/
#include <iostream>

using namespace std;

void pere(char* &a, int n){

 int sum = 0;

  for(int i = 0; i < n - 1; i += 2){
    int y = *(a + i);
    sum += y;
  }
  char* nov = new char[sum];

  for(int i = 1; i < n; i++){
    for (int x = 0; x < (*(a + i - 1)); x++){
            *(nov + x) = *(a + i);
    }
  }
  a = nov;
}

/*int main(){

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
 return 0;
 }*/

