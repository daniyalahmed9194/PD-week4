#include<iostream>
using namespace std;
void pet(int);
main(){

	int holidays;
	cout<<"Holidays: ";
	cin>>holidays;
	pet(holidays);

}

void pet(int holidays){

	int wDays,tGames,norm = 30000,diff,hourDiff,minuteDiff;
	wDays = 365 - holidays;
	tGames = wDays * 63 + holidays * 127;
	diff = norm - tGames;
	hourDiff = diff/60;
	minuteDiff = diff % 60;
	if (tGames > norm){
		cout<<"Tom will run away"<<endl;
		hourDiff *= -1;
		minuteDiff *= -1;
		cout<<hourDiff<<" hours and "<<minuteDiff<<" minutes for play";
	}
	if (tGames <= norm){
		cout<<"Tom sleeps well"<<endl;
		cout<<hourDiff<<" hours and "<<minuteDiff<<" minutes less for play";
	}

}