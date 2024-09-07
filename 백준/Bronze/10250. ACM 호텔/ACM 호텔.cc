#include <iostream>

using namespace std;

int main(){
    int n;
    int H, W, N;
    int floor, ho;
    int result = 0;

    cin >> n;
    for(int i=0; i<n; i++){
        result = 0;
        cin >> H >> W >> N;
        if(N%H==0) {
            floor = H;
            ho = N/H;
        }
        else {
            floor = N%H;
            ho = N/H + 1;
        }
        result += floor*100+ho;
        cout << result << "\n";
    }
}