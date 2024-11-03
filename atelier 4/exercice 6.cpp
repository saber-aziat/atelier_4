#include <iostream>
using namespace std ;
class point {
  private : double x ;
            double y ;

  public :
    point( double a , double b ):x(a),y(b){}

    // fct de translation
   void translation ( double a , double b ){
       x = x + a ;
       y = y + b;
   }


  // fct d'affichage
  void affichage (){
   cout<<"la valeur de x est :" <<x<<endl;
   cout<<" la valeur de y est : "<<y<<endl;
  }
};

int main(){
   point pt(1,2);
   pt.affichage();
   pt.translation(2,2);
   pt.affichage();
return 0 ;
}



