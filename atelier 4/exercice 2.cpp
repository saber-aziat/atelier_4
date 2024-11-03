#include<iostream>
#include<string>
using namespace std ;

class animal {
  private:
      string nom ;
      int age ;

  public:
      void setValue(string n , int a ){
        nom = n ;
        age = a ;
      }

      string getName(){
      return nom ;
      }


      int getAge(){
      return age ;
      }
};

class zebra : public animal{


  public :
      void affichage (){
        cout<<"le nom : "<<getName()<<endl;
        cout<<"l'age est : "<<getAge()<<endl;
        cout<<"continent est afrique :";
     }
};

class delphine : public animal{
  public:
      void affichage (){
        cout<<"le nom : "<<getName()<<endl;
        cout<<"l'age est : "<<getAge()<<endl;
        cout<<"le lieu est afrique de sud :";
      }
};
int main(){

    zebra z ;
    z.setValue("lion",25);
    z.affichage();
    delphine d ;
    d.setValue("gazelle", 20);
    d.affichage();
return 0 ;
}

