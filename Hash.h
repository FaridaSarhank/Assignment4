#include <iostream>
#include "Linkedlist.h"
 
using namespace std ; 
 
class Chaining 
{
   public : 
    
        Linkedlist arr [26] ;
        int c = 0; 
    

    int hash (Employee e)
    {
        return e.name [0]-65;    
    }
    
 void insert (Employee f)
    {
        
        int index ; 
        index= hash (f) ;
        if (arr [index].first!=NULL) 
       {
        c++ ;
       }
         
        arr[index].addEmployee(f) ;
         
       
    }
int collide ()
{
    cout<< " Collision:" ; 
    return c ; 
}
    void print ()
    {
for (int i =0 ; i<26 ; i++ )
{
    arr [i].print(); 
}
    }
 void remove (Employee a )
    {
       int index;
      index = hash (a) ;
    arr[index].RemoveEmployee (&a) ;
    }

   
    
}; 
