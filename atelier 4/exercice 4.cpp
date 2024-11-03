
#include<iostream>
#include<math.h>
using namespace std ;

class vecteur3d {
  private :
      double x ;
      double y ;
      double z ;

  public :
    vecteur3d(double a = 0, double b = 0, double c = 0):x(a),y(b),z(c){}
               // fct d afichage
        void affichage (){
            cout << "("<<x<<", "<<y<<" ,"<<z<<")"<<endl;
        }
            // la somme de deux vect
      vecteur3d somme(const vecteur3d& autre){
           return vecteur3d(x+autre.x , y+ autre.y , z+ autre.z) ;
      }

            // le prduit scalaire
       double proScalaire(const vecteur3d& autre) {
           return (x *autre.x)+(y *autre.y)+(z *autre.z);
       }

            // test des coincide
        bool coincide (const vecteur3d& autre ) {
           return ( x==autre.x) && (y==autre.y) && (z= autre.z);
        }
           // la norme du vecteur
         double norme (){
            return sqrt( x*x + y*y + z*z );
         }
           // fct normax en passage par adress
        static vecteur3d* normaxADD (vecteur3d* v1 , vecteur3d* v2 ){
       return ( v1->norme() >= v2->norme() ) ? v1 : v2 ;
      }

       // fct normax en passage par reference
       static vecteur3d& normaxREF (vecteur3d& v1 , vecteur3d& v2 ){
       return ( v1.norme() >= v2.norme() ) ? v1 : v2 ;
      }

       // fct normax en passage par valeur
       static vecteur3d normaxVAL (vecteur3d v1 , vecteur3d v2 ){
       return ( v1.norme() >= v2.norme() ) ? v1 : v2 ;
      }


};
int main(){

    cout<<"par valeur :"<<endl;
   vecteur3d v1(1,2,3) ;
   vecteur3d v2(4,5,6) ;
   cout<<"le 1er vecteur est : ";
   v1.affichage();
   cout<<endl<<"la 2eme vecteur est : ";
   v2.affichage();

   vecteur3d v3 = v1.somme(v2);
   cout<<"------->  la somme est ";
   v3.affichage();

   double produit = v1.proScalaire(v2);
   cout<<"------->le produit scalaire est : "<<produit<<endl;

   cout<< (v1.coincide(v2)? "-----------> meme composent " : "---------->n'est pas du meme composent" )<<endl;


  cout<<"la norme du v1 est : "<<v1.norme()<<endl;
  cout<<"la norme du v2 est : "<<v2.norme()<<endl;

    vecteur3d* v4 = vecteur3d::normaxADD(&v1 , &v2 );
    cout<<"a la plus grande norme est (adress): ";
    v4->affichage();

    vecteur3d& v5 = vecteur3d::normaxREF(v1 , v2 );
   cout<<"a la plus grande norme est (reference): ";
   v5.affichage();

   vecteur3d v6 = vecteur3d::normaxVAL(v1 , v2 );
   cout<<"a la plus grande norme est (valeur): ";
   v6.affichage();

return 0 ;
}
