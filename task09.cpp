#include<iostream>
using namespace std;
void tpChecker(int,float);
main(){

	int people;
	float tp;
	cout<<"Number of people in the household: ";
	cin>>people;
	cout<<"Number of rolls of TP: ";
	cin>>tp;
	tpChecker(people,tp);

}

void tpChecker(int people, float tp){

	int days;
	float sheetsPerDay,tpPerDay;
	// tpPerPerson = 500/57.0;
	sheetsPerDay = 57 * people;
	tpPerDay = 500 / sheetsPerDay;
	days = tp * tpPerDay;
	if (days >= 14){
		cout<<"Your TP will last "<<days<<" days, no need to panic!";
	}
	if (days < 14){
		cout<<"Your TP will only last "<<days<<" days, buy more!";
	}

}