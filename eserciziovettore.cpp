#include <iostream>
using namespace std;

#define N 10

int main(){
	int a[N];
	int i, max, min, media;
	
	for(i=0; i<N; i++){		
		cout<<"inserisci numeri ";
		cin>>a[i];
	}
	
	
	media=a[0];
	for(i=0; i<N; i++)		
		media+=a[i];
	media=media/N;
	

	cout<<"la media e': "<<media;
		

}
