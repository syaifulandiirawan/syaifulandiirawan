/* Underweight: berat < tinggi/2.5
Normal: tinggi/2.5 <= berat <= tinggi/2.3
Overweight: tinggi/2.3 <berat
*/
#include <iostream>

using namespace std;

int main() 
{
	cout<<"||----PROGRAM MENENTUKAN underweight, normal, atau overweight----||"<<endl;
    float bb;
    int tb;
    
    cout << "Silahkan masukkan tinggi badan(cm) : "; cin >>tb;
    cout << "Silahkan masukkan berat badan(kg) : " ;
    cin >> bb;
    
    if (bb<tb/2.5)
       cout << "  Anda Mengalami : Underweight(kekurangan berat badan)" << endl;
            else if (tb/2.3 < bb)
                 cout << "  Anda Mengalami : Overweight(kelebihan berat badan)" << endl;
            else if (tb/2.5 <= bb <= tb/2.3)
           		 cout << "  congratulation!!! : Normal" << endl;
                 
                 
                 return 0;
    }
