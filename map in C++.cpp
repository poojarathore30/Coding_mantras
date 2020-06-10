#include<iostream>
#include<map>
using namespace std;
int main(){
	map<int,string> my_map;
	my_map[1]="pooja";
	my_map[2]="neha";
    my_map[3]="tom";
	my_map[4]="john";
	my_map[5]="casenrda";
	my_map[6]="ram";	
	//to insert into the map
	my_map.insert(pair<int,string>(7,"anuu"));
	//to iterate over the map
	
	map<int,string>::iterator it=my_map.begin();
	//to know size of map
	
	cout<<"size of map is "<<my_map.size()<<endl;
		//to find an element in map
	map<int,string>::iterator it1=my_map.find(6);
	cout<<it1->first<<" = "<<it1->second<<endl;
	//to delete  a keuy avlue pair
	my_map.erase(it1);
	//to iterateover values of map

	for(;it!=my_map.end();it++)
	cout<<it->first<<" = "<<it->second<<endl;
	//to check if map is empty
	cout<<"is empty "<<my_map.empty()<<endl;
	//to clear the map
	my_map.clear();
	
		//to check if map is empty
	cout<<"is empty "<<my_map.empty()<<endl;
	return 0;
}
