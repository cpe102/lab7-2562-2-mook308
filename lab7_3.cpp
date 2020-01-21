//status = "ONE-NIGHT-STAND";
#include <iostream>
#include <cmath>
using namespace std;





int main()
{
  float age,height,asset;
  string status;
  cout << "Enter age: ";
  cin >> age;
  if(age<=20){
      cout << "Enter height: ";
      cin >> height;
      if(height<160)
      status = "UNFRIEND";
      else if(height<175)
      status = "FRIEND";
      else{
          cout << "Enter asset: ";
          cin >> asset;
          if(asset>69000000){
            status = "MARRIED";
          }else{
            status = "ONE-NIGHT-STAND";
            }
        }

        }else if(age<30){
            cout << "Enter asset: ";
            cin >> asset;
            if(asset>10000000){
            status = "BEST FRIEND";
          }else{
            status = "UNFRIEND";
            }
        }else status = "UNFRIEND";
    
  cout << "status = " << status; 
  return 0;
}
