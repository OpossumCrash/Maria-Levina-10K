#include <iostream>

using namespace std;
int GCD (int a, int b){
   if (b == 0) return a;
   return GCD(b, a % b); }

struct rational  {;
 int n;
 int m;

 rational (){}
 ~rational() {
 cout << "Destructor is working";
 }

 rational(int a, int b){
  int d = GCD(a,b);
  m = a / d;
  n = b / d;
  cout << "Normal constructor is working.";
  }

 rational(const rational &A){
  m = A.m;
  n = A.n;
  cout <<"Copying constructor is working";
  }



 rational &operator = (rational &A){
    m = A.m;
    n = A.n;
    return *this;
    cout << "Prisvoenie";}

 rational &operator *= (rational &A){
      m *= A.m;
      n *= A.n;

      m /= GCD(m, n);
      n /= GCD(m, n);
      return *this;
      cout << "Making bigger1";
    }
 rational &operator /= (rational &A){
      m /= A.m;
      n /= A.n;

      m /= GCD(m, n);
      n /= GCD(m, n);
      return *this;
      cout << "Making smaller1";
    }

 rational &operator += (rational &A){
      m += A.m;
      n += A.n;

      m /= GCD(m, n);
      n /= GCD(m, n);
      return *this;
      cout << "Plus1";
    }

  rational &operator -= (rational &A){
      m -= A.m;
      n -= A.n;

      m = m / GCD(m, n);
      n = n /GCD(m, n);
      return *this;
      cout << "Minus1";
    }

  };
  bool operator == (rational &A, rational &B){
   return ((A.m == B.m) && (A.n == B.n));
   cout << "Equal";
   }

  bool operator != (rational &A, rational &B){
   return !(A == B);
   cout << "Not Equal";
  }

   bool operator < (rational &A, rational &B){
   return (A < B);
   cout << "Smaller";
  }

  bool operator > (rational &A, rational &B){
   return (A > B);
   cout << "Bigger";
  }

  bool operator <= (rational &A, rational &B){
   return !(A > B);
   cout << "Smaller or Equal";
  }

  bool operator >= (rational &A, rational &B){
   return !(A < B);
   cout << "Bigger or Equal";
  }

  rational &operator *(rational A, rational &B){

    return A *= B;
    cout << "Making bigger2";}

  rational &operator /(rational A, rational &B){

    return A /= B;
    cout << "Making smaller2";
      }

  rational &operator +(rational A, rational &B){

    return A += B;
    cout << "Plus2";

      }
  rational &operator -(rational A, rational &B){

    return A -= B;
    cout << "Minus2";

  }
 instream &operator >>(istream &ins, rational &A){
      ins >> A.m >> A.n;
      int d = GCD(A.m, A.n);
      A.m /= d;
      A.n /= d;
      return ins;
  }

  ostream &operator << (ostream &outs, rational &A){
      outs << A.m << "/" << A.n;
      return outs;
     }

int main(){
  rational X;
  rational Z;
  rational *y = &X;
  rational *o = &Z;
  cin >> (*y).m >> (*y).n;
  cin >> (*o).m >> (*o).n;
  cout << X + Z;
  cout << X * Z;
  cout << X / Z;
  cout << X - Z;
  cout << X += Z;
  cout << X *= Z;
  cout << X /= Z;
  cout << X -= Z;
  cout << X == Z;
  cout << X != Z;
  cout << X > Z;
  cout << X >= Z;
  cout << X <= Z;
  cout << X < Z;


    return 0;
}
