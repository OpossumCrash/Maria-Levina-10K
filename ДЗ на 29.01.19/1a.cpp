/*
1.	���������� ����� double_vector -  ������ ������������ ����� ����������� �������.
a.	30 ������
i.	����������� ��� ���������� (������� ������ ������� 1, � ����� ��������� ������ ����):
 double_vector()
ii.	����������� � ����� ���������� - ������� �������(������� ������ ������� �������,
����������� ������): double_vector(unsigned int N)
iii.	����������: ~double_vector()
iv.	����������� �����: double_vector(const double_vector& A)
v.	�������� ����������: const double_vector& operator=(const double_vector& A)
vi.	�������� ��������� �� �������: double operator[] (unsigned int n)
vii.	���������� � �����: void push_back(double x)
viii.	���������� �� �����: double pop_back()
��� ���������� - ������� ��������� �� �������, � �������� �����
�������� ������������, ��� ��������� ������ ������
ix.	��������� ������� �������:
unsigned int size()
x.	��������� ����������� �������:
unsigned int capacity()
*/

#include <iostream>

using namespace std;

class double_vector {

private :

 int sz;
 int cap;
 double* Data;

public :
 double_vector(): sz(1), cap(1), Data(new double [1]){   //1)
  cout << "Constructor is working" << endl;};

 double_vector(unsigned int N){            //2)
  cap = N;
  for(unsigned int i = 0; i < N; i++){
    Data[i] = 0;
    sz++;
  };
  cout << "The second constuctor is working" << endl;

 };

~double_vector(){                  //3)
   delete [] Data;
   cout << "Destructor is working" << endl;
 };

 double_vector(const double_vector& A){         //4)

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

 const double_vector& operator=(const double_vector& A){   //5)
  sz = A.sz;
  double* temp = A.Data;

  for(int i = 0; i < sz; i++){
    temp[i] = A.Data[i];
  };

    return *this;
    cout << "Prisvoenie" << endl;
 };

 double operator[] (unsigned int n){          //6)

  int r = Data[n];
  return r;
  cout << "Operator [ ]" << endl;
 };

 void push__back(double x){
                                            //7)
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

 double pop__back(){         //8)

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
};

 unsigned int size_(){       //9)
 cout << "Size" << endl;
 return sz;
 };

 unsigned int cap_(){         //10)
 cout << "Capacity" << endl;
 return cap;
 };

};

int main(){

unsigned int N; cin >> N;

double_vector V;

double a;

for(unsigned int i = 0; i < N; i++){
    cin >> a;
    V.push__back(a);
};

cout << "The last element of vector is " << V.pop__back();

cout << "Capacity = " << V.size_() << endl;
cout << "Size = " << V.cap_() << endl;

return 0;
};
