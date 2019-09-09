#include <iostream>
using namespace std;
int main() 
{
    long long int N,sum,count,max,limit,j;
    int T,i;
    cin >> T;
    for (i=1; i<=T; i++){
        sum = 0;
        count = 0;
        max = 0;
        cin >> N;
        if(N%2 == 0){
            limit = N/2;
        }
        else{
            limit = N/2 + 1;
        }
        int Arr[N];
        char a;
        /*
           There is one input with N = 5000000
           so it is impossible to read the number
           that consists of N digits. 
           Solution: read the input digit by digit.
        */
        
        for (j=0; j<N; j++){
            cin >> a;
            Arr[j] = int(a) - 48; //Convert ASCII to int
            if (count<limit){
                count++;
                sum = sum + Arr[j];
            }
            else{
                sum = sum + Arr[j] - Arr[j-limit];
            }
            if (max < sum){
                max = sum;
            }
        }
        
        cout << "Case #" + to_string(i) + ": " + to_string(max) << endl;
        cout.flush();
    }
    return 0;
}
