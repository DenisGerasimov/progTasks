#include <iostream>
using namespace std;
 
int main(){
    
    int a[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
    int n = sizeof(a)/sizeof(a[0]);
    
    int massa;
    do{
        cout << "massa = ";
        cin >> massa;
    }while (massa < 1);
    
    for (int i = 0; i < (1 << n); ++i){
        int temp = i;
        int sum = 0;
        for (int j = 0; j < n; ++j){
            if (temp % 2 == 0)
                sum += a[j];            
            if (sum > massa)
                break;
            temp /= 2;
        }
                    
        if (sum == massa){
            int temp = i;
            for (int j = 0; j < n; ++j){
                if (temp % 2 == 0)
                    cout << a[j] << ' ';
                temp /= 2;
            }               
            cout << std::endl;
        }       
    }
}