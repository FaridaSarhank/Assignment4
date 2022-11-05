#include <iostream>
#include "Employee.h"
using namespace std ;

class lp
{
    public :
Employee *arr{ new Employee [26]};
int c=0; 
int hash2 (Employee e)
    {
        return e.name [0]-65;    
    }

    void insert (Employee a)
    {

    int index ; 
    index= hash2 (a) ;
    int move = index+1 ;
     
    if (arr[index].age ==-1)
    {
        
        arr[index] = a; 
        
    }
    else 
    {
    c++;
while (move%26!=index)
{
    if (arr[move].age ==-1)
    {
        
        arr[move] = a;
        break; 
    }
    else
    {
        
        move++;
        c++;
    }
   
}



    }


}
int collide ()
{ cout << "collison:" ; 
    return c ; 
}

    int findelement ( Employee fi)
{
    
    int index = -1 ; 
    int i = hash2 (fi) ;
    int move=i+1 ;
    if ((arr[i].name==fi.name)&&(arr[i].age==fi.age)&&(arr[i].experience==fi.experience))
    {
        index=i ; 
    }
    else 
    {
          

while (move%26!=index)
{
    if ((arr[move].name==fi.name)&&(arr[move].age==fi.age)&&(arr[move].experience==fi.experience))
    {
        index=move ; 
    }
}
}
return index ; 
}

void remove (Employee er)
    {
int index = findelement (er) ;
if (index == -1 )
{
    return ; 
}
else 
{
    Employee bob; 
    arr[index]=bob ; 
}
    }


void print ()
{
for (int i = 0 ; i< 26 ; i++)
{
if (arr[i].age!=-1)
{

    cout<< i<< endl ; 
    cout<< arr[i].name <<endl ; 
    cout<< arr[i].age <<endl ;
    cout<< arr[i].experience <<endl ;
    cout<< arr[i].salary <<endl ;
}
         
}
}
}; 