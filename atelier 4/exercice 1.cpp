#include<iostream>
using namespace std ;

class nbrComplexe{
public:      double reel ;
             double imaginaire ;

public:     nbrComplexe( double r, double i ):reel(r),imaginaire(i){}
    // FCT ADDITION
    nbrComplexe addition(const nbrComplexe &autre){
      return nbrComplexe( reel+autre.reel , imaginaire+autre.imaginaire );
       }
                   // fct soustraction

    nbrComplexe soustraction(const nbrComplexe &autre){
         return nbrComplexe(reel-autre.reel , imaginaire-autre.imaginaire);
    }
                  //fct multiplication
    nbrComplexe multiplication (const nbrComplexe &autre ){
      return nbrComplexe(reel*autre.reel-imaginaire*autre.imaginaire , reel*autre.imaginaire+imaginaire*autre.reel);
    }
                  //fct divition
    nbrComplexe divition (const nbrComplexe &autre){
      return nbrComplexe (1/autre.reel*autre.reel + autre.imaginaire*autre.imaginaire , imaginaire*autre.reel - reel*autre.imaginaire );
    }
      void display (){
       cout<<reel<<" + ("<<imaginaire<<")i" ;
      }
};

void menu(){
  cout<<"chaoisisez l'operation "<<endl;
  cout<<"1 : addition "<<endl;
  cout<<"2 : soustration"<<endl;
  cout<<"3 : multiplication"<<endl;
  cout<<"4 : divition"<<endl;
  cout<<"5 : egalite"<<endl;
}



int main(){
    double reel_1 , imaginaire_1 , reel_2 , imaginaire_2;
    cout<<"veullez saisie la valeur du reel n 1"<<endl;
    cin>>reel_1;
    cout<<"veullez saisie la valeur d'imaginaire n 1"<<endl;
    cin>>imaginaire_1;
      cout<<"veullez saisie la valeur du reel n 2"<<endl;
      cin>>reel_2;
      cout<<"veullez saisie la valeur d'imaginaire n 2"<<endl;
      cin>>imaginaire_2;

      //appe du constructeur
      nbrComplexe n1(reel_1,imaginaire_1);
      nbrComplexe n2(reel_2 , imaginaire_2);
          menu();
          int choix ;
          cin>>choix;

      if (choix == 1 ) {
        nbrComplexe resultat = n1.addition(n2);
        cout<<"addition est : ";
        resultat.display();
      }else if( choix==2 ){
        nbrComplexe resultat = n1.soustraction(n2);
        cout<<"soustration est : ";
        resultat.display();
      }else if ( choix ==3){
       nbrComplexe resultat = n1.multiplication(n2);
        cout<<"multiplication est : ";
        resultat.display();
      }else if (choix==4){
       nbrComplexe resultat = n1.divition(n2);
        cout<<"divition est : ";
        resultat.display();
      }else if (choix==5){
           if( reel_1 ==reel_2 && imaginaire_1==imaginaire_2){
            cout<<"il y a une egaliter";
            }else cout<<" il y a pas une egalite";
      }







return 0 ;
}
