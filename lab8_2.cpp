#include<iostream>
#include<string>
#include<cmath>
using namespace std;


int main(){
string name, movie, date , trash;
int stuId ;
cout << "Fahsai: Sawadee ka...Can you tell me your name?" << "\n";
cout << "?????: " ;
getline(cin,name) ;
cout << "Fahsai: Wow!!! " << name << " is a really cool name." << "\n";
cout << "Fahsai: I think you are an Engineering student. What is your student ID? "<< "\n" << name << ": " ;
cin >> stuId;
cin.ignore();
cout << "Fahsai: I think you may be GEAR "<< (stuId/10000000) -12 << ". I have a free movie ticket for you." <<"\n";
cout << "Fahsai: Let's go to the cinema together!!! " << "\n";
cout << "Fahsai: What movie do you want to watch?" << "\n" << name << ":";
getline(cin,movie);
cout << " Fahsai: So....which day are you free to go with me? " << "\n" << name << ": " ;
getline(cin,date);
cout <<"Fahsai: " << date << "....that is OK!!! I'm looking forward to watching " << movie << " with you." << "\n" << name << ": ";
getline(cin,trash);
cout << "Fahsai: 555+ see you " << date << ". Bye Bye \\(^ ^)/";





return 0;
}
