
#include <iostream>
using namespace std;
double f(double x);
int main(){
  double sum = 0, deltax, x{50};
  constexpr unsigned n{100000};
  deltax = (x-1)/n;
  for(auto i = 0; i < n; i++){
    sum += deltax*(f(1+i*deltax));
  }
  cout << sum << endl;
  return 0;
}
double f(double x){
  return 1/x;
}
