#include <iostream>
#include <cmath>

using namespace std;

int main() {
  const double pi = 3.1415926535;
  double a        = 6.35;
  double A_deg    = 16;
  double B_deg    = 44;
  
  double A = A_deg * pi / 180.0;
  double B = B_deg * pi / 180.0;
  double C = pi - A - B;
  
  double sina = sin(A);
  double sinB = sin(B);
  double sinc = sin(C);
  
  double b = (a * sinB / sina);
  double c = (a * sinc / sina);
  
  double Beta_a = (2 * b * c * cos(A / 2)) / (b + c);
  double m_a    = 0.5 * sqrt(2 * b * b + 2 * c * c - a * a);
  double h_a    = b * sin(C);
  
  cout << "b      = " << b / 100 << endl;
  cout << "c      = " << c / 100 << endl;
  cout << "Beta_a = " << Beta_a / 100 << endl;
  cout << "m_a    = " << m_a / 100 << endl;
  cout << "h_a    = " << h_a / 100 << endl;

  return 0; 
}
