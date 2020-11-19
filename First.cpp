#include <iostream>
using namespace std;

int main()
{
   int result = 0;    
   int n = 0;
   int x = 0;
   cin >> n >> x;
   result = x;
   for(int i = 1; i < n ; ++i){
           result*=x;
   }
    cout << result;
    return 0;
}
