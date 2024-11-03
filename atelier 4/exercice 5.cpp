#include<iostream>
 using namespace std ;

 int Test::cmp = 0;

 class Test{
   private :
       static int cmp  ;

   public :
       void call (){
         cout<<"nbr du call est "<<cmp<<endl;
       }
 };

 int main(){
    Test t ;
    t.call();
    t.call();
    t.call();
    t.call();
    t.call();
    t.call();
 return 0 ;
 }
