// reverse the integer and if num cross the range of int then give output as zero.
// ex - 123 = 321, -12 = -21 , 1234567899999 = 0 
#include <iostream> 
#include <math.h> 
using namespace std;
int main()
{
   int x;
   cout << "enter x" << endl;
   cin >> x;
      int ans = 0;
        while(x!=0){
            if(ans>INT32_MAX/10 || ans<INT32_MIN/10){
                cout<<"0"; 
                return 0;
            }
            int digit = x%10;
            ans = (ans*10)+digit;
            x=x/10;
        }
        cout << "ans " << ans;
        
}