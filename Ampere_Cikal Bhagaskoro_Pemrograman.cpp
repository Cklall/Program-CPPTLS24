/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
 int x;
 cout<<"terdapat pertidaksamaan y = -2*x + sqrt (x) + 100 > 0" << endl;
 cout<<"tentukan apakah suatu bilangan merupakan daerah penyelesaian dari pertidaksamaan tersebut" << endl;
 
 cout<<"masukkan bilangan x=..." << endl;
 cin >> x;

int y = -2*x + sqrt(x) + 100; 
 
 if (y>0) {
     cout << "merupakan daerah penyelesaian" << endl;
     cout << " karena hasil y = -2*x + sqrt (x) + 100: " << -2*x + sqrt(x) + 100 << endl;
     cout << -2*x + sqrt(x) + 100 << ">0" << endl;
 }
 else {
     if (y<0) 
         cout <<"bukan daerah penyelesaian" << endl;
         cout << " karena hasil y = -2*x + sqrt (x) + 100: " << -2*x + sqrt(x) + 100 << endl;
         cout << -2*x + sqrt(x) + 100 << "<0" << endl;
 }
     



    return 0;
}
