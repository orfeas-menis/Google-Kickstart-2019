#include <iostream>
using namespace std;
int main() 
{
    long long int A,B,low,high,guess;
    int T,i,N;
    string answer;
    cin >> T;
    for (i=0; i<T; i++){
        if (answer == "WRONG_ANSWER"){
            break;
        }
        answer = "";
        cin >> A >> B;
        cin >> N;
        low = A;
        high = B;
        //while(answer.compare("CORRECT") != 0){
        while((answer != "CORRECT") && (answer != "WRONG_ANSWER")){
            guess = (low + high) / 2;
            cout << guess << endl;
            cout.flush();
            cin >> answer;
            //if (answer.compare("TOO_BIG") == 0){
            if (answer == "TOO_BIG"){
                high = guess - 1;
            }
            //else if(answer.compare("TOO_SMALL") == 0){
            else if(answer == "TOO_SMALL"){
                low = guess + 1;
            }
        }
    }
    return 0;
}
