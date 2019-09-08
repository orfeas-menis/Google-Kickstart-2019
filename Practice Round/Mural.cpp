#include <iostream>
using namespace std;
int main() 
{
    long long int N,sum,count,max,limit,temp,j;
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
        cin >> temp;

        for (j=0; j<N; j++){
            Arr[j] = temp % 10;
            temp = temp / 10;
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
