#include <iostream>

using namespace std;

struct Array_{
    int* stroka;
    int stroka_size;

    Array_ (){}

    Array(int a, int b){
    stroka_size = a;
    stroka = new int [stroka_size];
    for (int i = 0; i < stroka_size; i++){
        cin >> stroka [i];}
        cout << "Normal constructor is working.";

    }

    ~Array_(){
     delete [] stroka;
     cout << "Destructor is working";}

     Array(const Array_ &X){
       delete[] stroka;
       stroka_size = X.stroka_size;
       stroka = new int [stroka_size];
       for (int i = 0; i < stroka_size; i++){
            stroka [i] = X.stroka[i];}
       return *;
     }







 };

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
