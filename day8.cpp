#include <iostream>
#include <stdio.h>
#include <map>
using namespace std;
int main(){
	long long int  i,n,number; char name[1000002],fnd[1000004];
	map<string,int>mymap;
	map<string,int>::iterator it;
	
	scanf("%lld", &n);
	
	for(i=0; i<n; i++){
		scanf("%s",name);
		scanf("%lld", &number);
		mymap.insert(pair<string,int>(name,number));
	}
	
	for(i=0; i<n; i++){
		scanf("%s", fnd);
		it=mymap.find(fnd);
		if(it!=mymap.end()){
		//for(it=mymap.begin(); it!=mymap.end(); it++)
			cout<<it->first<<"="<<it->second<<endl;
		}else{
			printf("Not found\n");
			}
	}
	return 0;
}
