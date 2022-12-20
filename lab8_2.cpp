#include <iostream>
#include <string>
using namespace std;

int main(){
    
    string name,mov,day,a;
    int gear;
    string y = "Fahsai: ";
    string z = "\n";
    
    cout << y << "Sawadee ka...Can you tell me your name?" << z;
    cout << "?????: ";
    getline(cin,name);
    cout << y << "Wow!!! " << name << " is a really cool name." << z;
    cout << y << "I think you are an Engineering student. What is your student ID?" << z;
    cout << name << ": ";
    cin >> gear;
    cin.ignore();
    cout << y << "I think you may be GEAR "<< gear/10000000-12 << ". I have a free movie ticket for you." << z;
    cout << y << "Let's go to the cinema together!!!" << z;
    cout << y << "What movie do you want to watch?" << z;
    cout << name << ": ";
    getline(cin,mov);
    cout << y << "So....which day are you free to go with me?" << z;
    cout << name << ": ";
    getline(cin,day);
    cout << y << day <<"....that is OK!!! I'm looking forward to watching " << mov <<" with you." << z;
    cout << name << ": ";
    cin >> a;
    cout << y << "555+ see you "<< day << ". Bye Bye "<<'\\'<<"(^ ^)/";
return 0;
}