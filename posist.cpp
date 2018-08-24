#Dynamic list
#include<bits/stdc++.h>    //headerfiles
using namespace std;  //namespace
int refernceid ;   // a veriable to store the  refernece id 
static int  nodenumber ; /// a variable to count the nodenumber after creation node 
char* timestamp()      // userdefined function  for finding the timestamp
 	{
 		 time_t now = time(0);
     char* dt = ctime(&now);
return dt;
	 
}

tuple data(int id ,int value ,string ownername)    //for the generate the key 

{
	unoredered_map<tuple<int,int,string>>m,k; //unordered map
	k=m[make_tuple(id,value,ownername)]
	
	return k;
}


 
struct node      //a structure  to create a node 
{ 
int nodeid;
int time=timestamp();
 bitset<32> nodeid;
 nodenumber++; //increment the value to check the how much node i have 
 int id;
 cin>>id;
 float value ;
 string ownername ;
 cin>>value>>ownername; 
 tuple t=data(id,value,ownername);
  unordered_map<int ,list<int>,list<string>>m;  //  map to generate the key  
  int key;                                        
  cin>>key;
  
  m[key].push_back(time);  //push_back predefined function 
  m[key].push_back(t);
  m[key].push_back(nodenumber);
  m[key].push_back(nodeid);
  m[key].push_back(referenceid);
  m[key].push_back(genesisReference);
  
  //int referencebnodeid;



}
node newnode()   userdefiend function to create a node dynamically 
{
	node *p;
	p=new node();
	return node;
}


 	
 int main()//mainfunction 
 {
 	int ref=-1;
 	int count;
 	int num;
 	cin>>num;
 	for(int i=0;i<num;i++)  //to creation a the nodes 
 	{	
 	node *t;
 	
 	t=newnode();  //creation a node 
 }
 	if(referenceid==nodenumber) //check the refernce id if the refernce id  
 	{
 		return ref;
	 }
	 
 	
 }