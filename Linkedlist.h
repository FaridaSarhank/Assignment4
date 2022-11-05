#include <iostream>
using namespace std; 


class Employee
{
  public : 
    int age ; 
    int salary ;
    string name ; 
    int experience ; 
     
   Employee*next=NULL ; 
};
 
class Linkedlist 
{
  public:
  Employee*first ; 
 
  
  Linkedlist()
  {
      first=NULL;
 
  }
 
   void addEmployee( Employee n)
   {
     Employee*temp ; 
     temp=first ; 
 
     if (first== NULL) //check if it is an empty ll 
     {
        first = new Employee();
         (*first)=n ; 
 
     }
 
     else 
     {
         while (temp->next!=NULL)
         {
 temp = temp->next ; 
 
         }
         temp -> next = new Employee;
         *(temp-> next)=n ;
     }
   }
 
  void RemoveEmployee(Employee *tbd)
  {
 Employee*leading ; 
 leading=first ;
 Employee*lagging ; 
  
  if(first==tbd)
  {
      first=first->next ; 
      return ; 
  }
  while (leading!=NULL)
{
 if (leading==tbd)
 {
     
     lagging->next=leading->next ;
     
     return ; 
 }
 lagging=leading ; 
 leading=leading->next ; 
 

 
 
}
 
  }
 
  void print()
  {

 Employee*temp ; 
 temp=first ; 
 
     
while (temp!=NULL)
{
   
 cout<< temp->name<< endl; 
 cout<< temp->age<< endl;
 cout<< temp->salary<< endl;
 cout<< temp->experience<< endl;
 temp = temp->next ; 
 
 
}
       
     
  }

 


 
};
 