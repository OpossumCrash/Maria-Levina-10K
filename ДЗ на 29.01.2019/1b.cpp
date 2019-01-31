/*b.	40 ������
i.����������� ��������� ������ �� double-������� � ��� �������
ii.	��������� ����������� ������� (resize)
iii.	���������� � ������ (push_front)
iv.	�������� �� ������(pop_front)
v.	���������� �� �������� ������� (insert)
vi.	�������� �� �������� ������� pos: void erase(pos)
vii.	�������� ��������� �� �������� ������ �������: erase(a,b)
viii.	������������(�������) �������� operator+
ix.	�������� ����� �� ������� ������� find
x.	�������� ���������� ���� is_sort, ������� ����������, � �������� �����(���������� � ������, ���� ������ ������������)
*/

#include <iostream>

using namespace std;

class double_vector {

private :

 int sz;
 int cap;
 double* Data;

public :

 double_vector(unsigned int N, const double_vector &A){            //1)����������� �� double-�������
  cap = N;                                                         //� ��� �������
  for(unsigned int i = 0; i < N; i++){
    Data[i] = A[i] ;
    sz++;
  };
  cout << "The constructor is working" << endl;

 };

~double_vector(){                  //����������
   delete [] Data;
   cout << "Destructor is working" << endl;
 };

 double_vector(const double_vector& A){         //����������� �����

  sz = A.sz;
  cap = A.cap;
  double* temp = new double [cap];

  for(int i = 0; i < sz; i++){
   temp[i] = A.Data[i];
  };
  Data = temp;
  delete [] temp;

  cout << "Copying constructor is working." << endl;
 };

 const double_vector& operator=(const double_vector& A){   //�������� ������������ ,�� ������ ������
  sz = A.sz;
  double* temp = A.Data;

  for(int i = 0; i < sz; i++){
    temp[i] = A.Data[i];
  };

    return *this;
    cout << "Prisvoenie" << endl;
 };

 double operator[] (unsigned int n){          //��������� �� �������

  int r = Data[n];
  return r;
  cout << "Operator [ ]" << endl;
 };

 void push__front(double y){         //3)push_front
  if(sz >= cap){
    cap *= 2;
  };

  double* temp = new double [cap];

  for(int i = 0; i < sz; i++){
    temp[i + 1] = Data[i];
    };

  delete [] Data;
  Data = temp;

  Data[0] = y;
  sz++;
  delete [] temp;
  cout << "Method push_front is working." << endl;
};

 double pop__front(){                   //4)pop_front

  double* temp = new double [sz - 1];

  for(int i = 0; i < (sz - 1); i++){
    temp[i] = Data[i + 1];
  };

  double y = Data[0];

  Data = temp;
  sz--;

  delete [] temp;

  cout << "Method pop_back is working." << endl;
  return y;
 };

 /*
 void push__back(double x){
  if(sz >= cap){
    cap *= 2;
    double* temp = new double [cap];
    for (int i = 0; i < sz; i++){
        temp[i] = Data[i];
           }
    delete [] Data;
    Data = temp;
  };
  Data[sz] = x;
  sz++;
  cout << "Method push_back is working." << endl;
};
*/
/*
 double pop__back(){         //pop_back

  double* temp = new double [sz - 1];

  for(int i = 0; i < (sz - 1); i++){
      temp[i] = Data[i];
  };

  double x = Data[sz];

  Data = temp;
  sz--;

  delete [] temp;

  cout << "Method pop_back is working." << endl;
  return x;
};*/

 unsigned int size_(){       //size()
 cout << "Size" << endl;
 return sz;
 };

 unsigned int cap_(){         //capacity()
 cout << "Capacity" << endl;
 return cap;
 };

 void resize_(int y){                 //2)resize
   if((cap - sz) + y) >= 0){

    double* temp = new double [cap + y];

    for(int i = 0; i < sz; i++){
        temp[i] = Data[i];
    };

    for(int i = sz; i < (sz + y); i++){
        temp[i] = 0;
        };
    Data = temp;
    delete [] temp;
    };
  return;
  };

 void insert_(unsigned int a; double y){

  double* temp  = new double[a];
 }

};

int main(){

unsigned int N; cin >> N;

double_vector V();

double a;

for(unsigned int i = 0; i < N; i++){
    cin >> a;
    V.push__back(a);
};

cout << "The last element of vector is " << V.pop__back();

unsigned int B = V.sz_();
unsigned int W = V.cap_();

cout << "Capacity = " << W << endl;
cout << "Size = " << B << endl;

return 0;
};
*/
