/*****************************
 * Автор: Щербакова Кристина *
 * Вариант: 14               *
 *****************************/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  const double pi = 3.1415926535;
  double a, A_deg, B_deg, A, B, C;
  double b, c, Beta_a, m_a, h_a;
  
  cout << "a = ";
  cin  >> a;
    
  cout << "A_deg = ";
  cin  >> A_deg;
    
  cout << "B_deg = ";
  cin  >> B_deg;
 
  A = A_deg * pi / 180.0;
  B = B_deg * pi / 180.0;
  C = pi - A - B;

  b = a * (sin(B) / sin(A));
  c = a * (sin(C) / sin(A));

  Beta_a = (2.0 * b * c * cos(A / 2.0)) / (b + c);
  m_a    = 0.5 * sqrt(2.0 * b * b + 2.0 * c * c - a * a);
  h_a    = c * sin(B);

  cout << "b      = " << b / 100.0      << endl;
  cout << "c      = " << c / 100.0      << endl;
  cout << "Beta_a = " << Beta_a / 100.0 << endl;
  cout << "m_a    = " << m_a / 100.0    << endl;
  cout << "h_a    = " << h_a / 100.0    << endl;

  return 0; 
}
