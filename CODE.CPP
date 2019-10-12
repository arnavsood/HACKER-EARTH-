#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;


  
bool isPrime(long long int n) 
{ 
    if (n <= 0) 
        return false; 
    
    if (n <= 3) 
        return true; 
  
 
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
  
    for (long long int i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
  
    return true; 
} 
  
  

void print(vector<long long int> v){
	for(long long int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
}



long long int* splitt(string s,long long int arr[]){
	long long int i=0l;
	long long int j=0l;
	string k="";
	while(s[j]!='\0'){
		
		
		if(s[j]==' ' ){
			arr[i]=(long long int)atoi(k.c_str());
			k="";
			i++;
			j++;
			continue;
		}
		k+=s[j];
		j++;
	}
	arr[i]=(long long int)atoi(k.c_str());
	

	return arr;
}

main(){
	long long int n;
	string s;
	cin>>n;
	cin>>ws;
	long long int list[n];
	getline(cin,s);
	splitt(s,list);
	vector<long long int> v2;
	vector<long long int> v3;
	vector<long long int> v4;	
	for(long long int i=0;i<n;i++){
		if(isPrime(list[i])){
			v2.push_back(i);
			v3.push_back(list[i]);
			
		}
		else{
			v4.push_back(list[i]);
		}
	}
	sort(v3.begin(), v3.end()); 
	sort(v4.begin(), v4.end(),greater<long long int>()); 
	long long int t=0;
	for(long long int p=0;p<v2.size();p++){
		v4.insert(v4.begin()+v2[t],v3[t]);
		t++;
	}
	print(v4);
	
	
		



	
	
	
}
