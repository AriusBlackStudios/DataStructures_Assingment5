#include "Set.h"
using namespace std;
#include <iostream>

//constructor
Set::Set()
{
    linked_list= new node();
    Length=0;

}

//deconstuctor
Set::~Set()
{
	  for (int i =0; i < Length;i++){
            list_remove(linked_list);
    }
}

//union
Set Set::Union(Set set_one, Set set_two){
   
	Set returnSet=Set();
    set_one.linked_list = set_one.Head_ptr;
    set_two.linked_list = set_two.Head_ptr;
for (int j =0; j < set_two.Length;j++){

    returnSet.Insertion(set_two.linked_list->data());
    set_two.linked_list=set_two.linked_list->link();
    }

for (int i =0; i <set_one.Length;i++){
    returnSet.Insertion(set_one.linked_list->data());
    set_one.linked_list=set_one.linked_list->link();
    }
             int dog;
    cin>>dog;
 return returnSet;
}
//intersection
Set Intersection(Set set_one, Set set_two){
    Set returnSet=Set();
	for (int j =0; j <set_two.Length;j++){
        for (int i =0; i < set_one.Length;i++){
            if (set_one.linked_list->data() == set_two.linked_list->data()){
                    returnSet.Insertion(set_two.linked_list->data());
            }
            set_one.linked_list=set_one.linked_list->link();
            }
        set_two.linked_list=set_two.linked_list->link();
    }
    return returnSet;
}
//relative complement
Set Relative_Complement(Set set_one, Set set_two){
    Set returnSet=Set();
    bool targetFound = false;
	for (int j =0; set_two.Length;j++){
        for (int i =0; set_one.Length;i++){
            if (set_one.linked_list->data() == set_two.linked_list->data()){
                targetFound=true;
                }
            set_one.linked_list=set_one.linked_list->link(); //advances inner loop
            }
            // if there is no duplicates of b in a
            if(!targetFound){
                returnSet.Insertion(set_two.linked_list->data());
            }
            set_two.linked_list=set_two.linked_list->link(); //advance outter loop
            targetFound= false;
    }
    return returnSet;
}
//insertion - if element is already in the set nothing happens
void Set::Insertion(node::value_type insert){
	bool targetFound = false;
   //cout<<"The value of target "<< targetFound<<endl;
    if(Length==0){
       // cout<<"Before Head pointer"<< targetFound<<endl;
       Head_ptr = new node(insert);
       Length++;

    }
  
    else{
        node *this_ptr=Head_ptr;
        //linked_list=Head_ptr;
        for (int i =0; i < Length;i++){
             cout<<"The value of i "<<i <<endl;
            if(linked_list->data() ==insert){
                  cout<<"a"<<endl;
                targetFound = true;
                }
                cout<<"b"<<endl;
                prev_pointer = this_ptr;
                this_ptr=this_ptr->link();
            }
            cout<<"c"<<endl;
            if (!targetFound){
                cout<<"d"<<endl;
                list_insert(prev_pointer,insert);
               //cout<<"a"<<endl;
                Length++;
                }
              //  cout<<"e"<<endl;
            }
}
//deletion- if its not in the set, nothing happens
void Set::Deletion(node::value_type insert){
     cout<<"a"<<endl;
    this->linked_list = this->Head_ptr;
     cout<<"b"<<endl;
    for (int i =0; i < Length;i++){
      //   cout<<"c"<<endl;
        if(linked_list->data() ==insert){
             cout<<"d"<<endl;
            list_remove(prev_pointer);
             cout<<"e"<<endl;
            Length--;
            cout<<"f"<<endl;
            break;
        }
      //  cout<<"g"<<endl;
        prev_pointer = linked_list;
          linked_list = linked_list->link();
         
    }
   // cout<<"C"<<endl;
    char lol;
        cin>>lol;


}
//querty to check wheather an element is in a set
//querty to find the number of elements in a set
void Set::Querty(node::value_type insert){
	bool targetFound = false;
     this->linked_list = this->Head_ptr;
     for (int i =0; i < Length;i++){
        if(linked_list->data() ==insert){
            targetFound=true;
            cout<<"The value"<<insert<< "is found in the list of "<<Length<<" elements." <<endl;
        }
         linked_list = linked_list->link();
     }
     if (!targetFound){
            cout<<"The value"<<insert<< "is NOT found in the list of "<<Length<<" elements." <<endl;
     }
    
}
//display the set
void Set::Display(){
    cout<<"Display: "<<endl;
    this->linked_list = this->Head_ptr;
    for (int i =0; i < Length;i++){
        cout<<""<<linked_list->data()<<" "<<endl;
        linked_list = linked_list->link();
      //  cout<<"in dispaly "<<endl;
     }
           //  cout<<"in dispaly 3333 "<<endl;
}
	
//copy constructor
//Set(){}

