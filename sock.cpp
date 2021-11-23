#include<iostream>
#include<string>
using namespace std;
int main(){
	int n;
	cin>>n;
	int v[n];
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	int c=0;
	int b=n;
printf("done everythng");
	for(int i=0;i<n;i++){
		cout<<"iterations:"<<i<<endl;
		for(int j=i+1;j<n;j++){
			    
			  if(v[i]==v[j]){
			  	  cout<<"pair seen...."<<endl;
			  	   cout<<"paired number is"<<v[j]<<endl;
			  	   c++;
			  	   cout<<"count has increased...."<<endl;
			  	   for(int k=j;k<n;k++){
			  	   	     v[k]=v[k+1];
					 }
					 cout<<"first pattern has chanaged...."<<endl;
				    
					 
					n--;
					cout<<"size of an array is:"<<n<<endl;
				cout<<"print the values fo an array:"<<endl;
					for(int i=0;i<n;i++){
					cout<<"value is"<<v[i]<<endl;
					}
			  	    break;
			  }

		}
	}
//cout<<"total number of pair is:"<<c<<endl;
cout<<c<<endl;
}
