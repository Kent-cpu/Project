#include <iostream>
using namespace std;

int main()
{
   int result;    
   int n,x;
   cin >> n;
   cin >> x;
   result = x;
   for(int i = 1; i < n ; i++){
           result*=x;
   }
    cout << result;
}
