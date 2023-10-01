#include<iostream>
using namespace std;
void possible(int a,int b);
int main(){
	int a,b;
	cout<<"Enter your position: ";
	cin>>a;
	cout<<"Enter your friend's position: ";
	cin>>b;	
	possible(a,b);
	
}
void possible(int a,int b){
	if(b-a<=6){
	cout<<"true";

}
else
cout<<"false";


}
