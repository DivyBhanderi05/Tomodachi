#include<iostream>

using namespace std;

class abhi;
class divy{
	private:
		int hr;
		int min;
		int sec;
	
	friend void dhruv(divy,abhi);
};

class abhi{
	private:
		int hr;
		int min;
		int sec;
	
	friend void dhruv(divy,abhi);
};

void dhruv(divy o1, abhi o2){
	
	int sum_hr,sum_min,sum_sec;
	
	cout<<"Enter Hour 1 : ";
	cin>>o1.hr;
	cout<<"Enter Min 1 : ";
	cin>>o1.min;
	cout<<"Enter Sec 1 : ";
	cin>>o1.sec;
	
	cout<<endl<<endl<<"Enter Hour 2 : ";
	cin>>o2.hr;
	cout<<"Enter Min 2 : ";
	cin>>o2.min;
	cout<<"Enter Sec 2 : ";
	cin>>o2.sec;
	
	cout<<endl<<"Time 1 :- "<<o1.hr<<":"<<o1.min<<":"<<o1.sec<<endl<<endl;
	cout<<"Time 2 :- "<<o2.hr<<":"<<o2.min<<":"<<o2.sec<<endl<<endl;
	
	sum_hr = o1.hr + o2.hr;
	sum_min = o1.min + o2.min;
	sum_sec = o1.sec + o2.sec;
	
	while(sum_min>=60){
		sum_hr = sum_hr+1;
		sum_min = sum_min - 60;
		
	}
	while(sum_sec>=60){
		sum_min = sum_min+1;
		sum_sec = sum_sec - 60;
		
	}
	
	cout<<"Added Time :- "<<sum_hr<<"hr : "<<sum_min<<"min : "<<sum_sec<<"sec"<<endl;
}

int main(){
	divy o1;
	abhi o2;
	
	dhruv(o1,o2);
	
	return 0;
}
