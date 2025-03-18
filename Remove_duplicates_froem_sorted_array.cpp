//============================================================================
// Name        : STL_Vector.cpp
// Author      : Machine Minds /Mohamed Gasser
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <assert.h>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int flag=0;
int main() {


	vector<int> v{1,4,3,3,3,900,3,3,3,3,4};
	vector<int>::iterator i_dup=v.begin();
	int value_end=*(v.end()-1);
	//sort(v.begin(),v.end());
	//vector<int>
	int i_com=0;
	//cout<<"V.size()="<<v.size();
	//	for(int i=0;i<v.size();i++)
	//	{
	//
	//		for(i_com=i+1;i_com<v.size();++i_com)
	//		{
	//
	//			int temp1=*(i_dup+i);
	//			int temp1_back_step=*(i_dup+i-1);
	//			int temp2=*(i_dup+i_com);
	//
	//			if((temp1_back_step==temp1))
	//			{
	//				v.erase(i_dup+i-1);
	//			}
	//			if(temp1==temp2)
	//			{
	//				v.erase(i_dup+i_com);
	//			//	cout<<v[i_com];
	//
	//			}
	//
	//
	//
	//		}
	//
	//		cout<<endl;
	//
	//	}
	//
	//	if(2==count(v.begin(),v.end(),value_end))
	//	{
	//
	//		v.erase(v.begin()+v.size()-1);
	//
	//		//  break;
	//	}
	//	for(int i=0;i<v.size();i++)
	//	{
	//		cout<<v[i];
	//	}

	vector<int> temp ;
	int temp_val=0;
	sort(v.begin(),v.end());
	for(int i: v)
	{

		cout<<i;
	}
	cout<<endl;
	for(auto i: v)
	{
		if(1<count(v.begin(),v.end(),i))
		{
			temp.push_back(i);
		    temp_val=i;
			v.erase(std::remove(v.begin(),v.end(),i),v.end());
            v.push_back(temp_val);
		}
	}
	sort(v.begin(),v.end());
	cout<<"v//////\n";
	for(auto o: v)
	{
		temp.push_back(o);
		cout<<o;
	}
	sort(temp.begin(),temp.end());
	cout<<"temp\n";
	for(auto o:temp)
	{
		cout<<o;
	}

	//	cout<<endl;
	//	for(auto o: temp)
	//	{
	//		cout<<o;
	//	}
	return 0;
}


