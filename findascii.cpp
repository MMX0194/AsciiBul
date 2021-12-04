#include <iostream>
using namespace std;

int main(){
  char ascii;
  int numeric;
  cout << "karakter ver: ";
  cin >> ascii;
  cout << "Ascii değeri: " << (int) ascii << endl;
  cout << "ascii'ye dönüştürmek için bir sayı verin: ";
  cin >> numeric;
  cout << "ascii değeri " << numeric << " >> " << (char) numeric;
  return 0;
}