#include <iostream>
using namespace std;

int main (){
  
  cout<<"Hasil Nilai UTS dan UAS"<<endl;
  
  cout<<"Nilai UTS = ";
  int uts;
  cin>> uts;
  
  cout<<"Nilai UAS = ";
  int uas;
  cin>> uas;
  
  int hasil;
  hasil = (uts + uas) / 2;
  cout<<"Hasil Nilai = "<<hasil<<endl;
}