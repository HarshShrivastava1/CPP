// Que:- Conversion of negative num from Decimal to Binary. 
#include <iostream> 
#include <math.h> 
using namespace std;
int main(void)
{
    long long int n;// if our num is neg. then uska binary bht bda hoga aur ho skta hai int ki range cross kr jye isliye long long int liya jyda space mile aur bin. fit ho jye .

    cout << "enter n" << endl;
    cin >> n;// ex n= -6  then
    unsigned long long int i = 0, ans = 0;//ans kfi bda aa skta hai isliye long long aur vo always +ve rhe aur range bde isliye unsigned liya.
    if(n<0){
        n = pow(2, 16) + n; // 2^32-6 = 4294967290 = 1111..24_Times_one..1010 aur ye binary kisi bi data type me store nhi hota isliye 2^32-n ke form me likha.
        // end me two's comp. lete waqt zeros aayge 28 times aur main changes last four bit me hote hai isliye hamne space bachane ke liye assume ki hai 2 byte mean 16bit , ese ye 2^16 + (-6) ka formula bna 
    }
    cout << n << endl;
    while (n)
    {
        int lastBit = n & 1;
        ans = (pow(10, i) * lastBit) + ans;
        n = n >> 1;
        i++;
        cout << ans << endl;
    }
    cout << ans << endl;
    return 0;
}


