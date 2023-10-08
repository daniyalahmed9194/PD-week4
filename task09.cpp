#include<iostream>
using namespace std;
void tpChecker(int People,float tissuePaper);
main()
{
	int people;
	float TissuePaper;
	cout<<"Number of people in the household: ";
	cin>>people;
	cout<<"Number of rolls of TP: ";
	cin>>TissuePaper;
	tpChecker(people,TissuePaper);
}

void tpChecker(int People, float tissuePaper)
{
	int days;
	float papersPerDay,tissuePerDay;
	papersPerDay = 57 * People;
	tissuePerDay = 500 / papersPerDay;
	days =  tissuePaper * tissuePerDay;
	if (days >= 14){
		cout<<"Your TP will last "<<days<<" days, no need to panic!";
	}
	if (days < 14){
		cout<<"Your TP will only last "<<days<<" days, buy more!";
	}

}
