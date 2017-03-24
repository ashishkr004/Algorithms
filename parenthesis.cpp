#include <iostream>
#include <sstream>
#include <string>
#include <stack>
using namespace std;

bool parenthesis(string str){
	stack<char> stk;
	for(int i=0; i<str.length(); i++){
		if(str[i]==40 || str[i]==41){
			if(str[i]==40){
				stk.push('(');
			}
			else{
				stk.pop();
			}
		}
	}
	if(stk.size()==0){
		return 1;
	}
	else{
		return 0;
	}
}

int fun(int n){		//recursive function fun
	if(n==1){
		return 1;
	}
	else if(n==2){
		return 2;

	}
	else if(n==3){
		return 3;
	}
	else{
		return (fun(n-1))+(2*fun(n-2))+(3*fun(n-3));
	}
}

int main(){
	cout<<fun(1)<<endl;
	cout<<fun(2)<<endl;
	cout<<fun(3)<<endl;
	cout<<fun(9)<<endl;

	string str="((x+1)*y)";
	cout<<parenthesis(str)<<endl;

	str="((x+1)*y";
	cout<<parenthesis(str)<<endl;
}