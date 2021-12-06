#include <iostream>
using namespace std;

int main(){
    //receive data
    int A,H,P ;
    cout << "Enter your age: ";
    cin >> A ;
    if( A <= 20 ){
        cout << "Enter your height: ";
        cin >> H ;
        if( H < 160 ){
            cout << "Your status = UNFRIEND";
        }else{
            if( H < 175 ){
                cout << "Your status = FRIEND";
            }else{
                cout << "Enter your property: ";
                cin >> P ;
                if( P > 69000000 ){
                    cout << "Your status = MARRIED";
                }else{
                    cout << "Your status = ONE-NIGHT-STAND";
                }
            }
        }
    }else{
        if( A < 30 ){
            cout << "Enter your property: ";
            cin >> P ;
            if( P > 10000000 ){
                cout << "Your status = BEST FRIEND";
            }else{
                cout << "Your status = UNFRIEND";
            }
        }else{
            cout << "Your status = UNFRIEND";
        }
    } 
    return 0;
}
/*
"Enter your age: "
"Enter your height: "
"Enter your property: "
"Your status = "
"UNFRIEND"
"FRIEND"
"BEST FRIEND"
"ONE-NIGHT-STAND"
"MARRIED"
*/
