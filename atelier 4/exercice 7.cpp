#include<iostream>
#include<string>

using namespace std ;

class personne {

 private:
     string nom;
     string prenom ;
     int date;

 public:
    personne (string n, string p , int d ): nom(n), prenom(p ), date(d){}

     virtual void affichage (){
         cout<<"le nom est "<<nom <<endl;
         cout<<"le prenom est "<<prenom <<endl;
        cout<<"la date est "<<date <<endl;

     }
};

class employe : public personne {
  private :
      double salaire ;
  public :
      employe(string n, string p , int d , double s): personne(n,p,d), salaire(s) {}

       void setValue(int s){
            salaire = s ;
        }
        int getValue(){ return salaire ;}

    void afficher (){
      personne::affichage ();
        cout<<"le salaire est :"<<salaire<<endl;
    }


};

class chef : public employe{
   private:
       string service ;
   public :
     chef(string n , string p , int d , double s , string se): employe(n,p,d,s), service(se){}
             void setValue(int se){
            service = se ;
        }
        string getValue(){ return service ;}
   void afficher(){
          employe::affichage();
        cout<<"mon service est : "<<service<<endl;
    }

};

class directeur :public chef {
  private :
      string societe ;
  public :
    directeur(string n, string p , int d , double s , string se , string so): chef(n,p,d,s,se), societe(so){}

     void setValue(string so){
            societe = so ;
        }
        string getValue(){ return societe ;}
    void afficher(){
      chef::affichage();
        cout<<"mon societe est :"<<societe<<endl;
    }
};

int main(){
   personne per("aziat","saber",2003);
   per.affichage();
    cout<<endl;
   employe emp("el ghadbani","aymane",2004,3000);
   emp.affichage();


return 0;
}



