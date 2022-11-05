#include <iostream>
// #include "Hash2.h"
#include "Hash.h" 
#include "vector"
using namespace std ;


int main ()
{
vector <Employee> v1 ; 
Employee e1; 
Employee e2;
Employee e3; 
Employee e4; 
Employee e5;
Employee e6;
Employee e7;
Employee e8;
Employee e9;
e1.name="Mina" ;
e1.age= 30 ;
e1.salary= 10000; 
e1.experience=4 ;

e2.name="Fawzy" ;
e2.age= 45 ;
e2.salary= 5000; 
e2.experience=8 ;

e3.name="Yara" ;
 e3.age= 19 ;
 e3.salary= 2000; 
 e3.experience=0 ;

e4.name="Mariam" ;
e4.age= 32 ;
e4.salary= 8000; 
e4.experience=2 ;

e5.name="Ayman" ;
e5.age= 33 ;
e5.salary= 4000; 
e5.experience=8 ;

 e6.name="Roshdy" ;
 e6.age= 28 ;
 e6.salary= 9000; 
e6.experience=3 ;

e7.name="Aya" ;
 e7.age= 26 ;
e7.salary= 6000; 
e7.experience=3 ;

e8.name="Abdullah" ;
e8.age= 29 ;
e8.salary= 7000; 
e8.experience=4 ;

e9.name="Fatma" ;
e9.age= 21 ;
e9.salary= 3000; 
e9.experience=1 ;

v1.push_back(e1);
v1.push_back(e2);
v1.push_back(e3);
v1.push_back(e4);
v1.push_back(e5);
v1.push_back(e6);
v1.push_back(e7);
v1.push_back(e8);
v1.push_back(e9);

Chaining hm ;  
// lp l ; 

for (int i= 0 ; i<9 ; i++)
{
    
    // l.insert(v1[i]) ;
    hm.insert(v1[i]) ;
    
}
 
hm.print() ; 
cout << endl ; 
hm.remove(e7) ; 
cout<<" after remove"<< endl; 
hm.print () ; 
cout<< hm.collide()<< endl  ;














    return 0 ; 
}