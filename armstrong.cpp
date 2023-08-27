#include<iostream>
#include<cmath>
using namespace std;

int main()
{  
   int n, sum = 0, last, s, digits = 0;
   cin >> n;
   s = n;
   
   while (n != 0) {
      last = n % 10;
      sum += pow(last, 3);
      n /= 10;
   }
    cout<< sum;
   if (sum == s) {
      cout << "Armstrong";
   }
   else {
      cout << "Not Armstrong";
   }

   return 0;
}

