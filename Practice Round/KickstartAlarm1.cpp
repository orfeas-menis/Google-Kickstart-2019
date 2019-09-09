#include <iostream>
#include<cmath>
using namespace std;
#define myMod 1000000007
int main() 
{
    unsigned long long int N,K,x1,y1,C,D,E1,E2,F,result;
    int T,i;
    cin >> T;
    for (i=1; i<=T; i++){
        cin >> N >> K >> x1 >> y1 >> C >> D >> E1 >> E2 >> F;
        long long int A[N],j,temp1,temp2,w,z,q,counter;
        temp1 = x1;
        temp2 = y1;
        A[0] = (x1 + y1) % F;
        for (j=1; j<N; j++){
            temp1 = ( (C * x1) % F + (D * y1) % F + E1) % F;
            temp2 = ( (D * x1) % F + (C * y1) % F + E2) % F;
            x1 = temp1;
            y1 = temp2;
            A[j] = (temp1 + temp2) % F;
        }
        result = 0;
        for (j=1; j<=K; j++){
            for (w=0; w<N; w++){
                for (z=w; z<N; z++){
                    counter = 1;
                    for (q=w; q<=z; q++){
                        result = result +  A[q] * pow(counter,j) ;
                        result = result % myMod;
                        counter++;
                    }
                }
            }
        }
        result = result % myMod;
        cout << "Case #" + to_string(i) + ": " + to_string(result) << endl;
        cout.flush();
    }
    return 0;
}
