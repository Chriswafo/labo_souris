#include <iostream>
#include <string>

using namespace std;

class Souris {
private:
    double poids;
    string couleur;
    unsigned int age;
    unsigned int esperance_vie;
    bool clonee;
public:
    Souris(double p,string c, unsigned int a=0,unsigned int e=36):
        poids(p),couleur(c),age(a),esperance_vie(e),clonee(false)
        {cout<<"Une nouvelle souris"<<endl;}
    Souris(Souris const& autre):
        poids(autre.poids),couleur(autre.couleur),age(autre.age),esperance_vie(autre.esperance_vie*4/5),clonee(true)
        {cout<<"clonage d'une souris"<<endl;}
    ~Souris(){cout<<"Fin d'une souris"<<endl;}
     void viellir(){
      age++;
      if((clonee==true)&&(age>=esperance_vie*1/2))
        couleur="verte";
   }
   void evolue(){
      while(age<esperance_vie)
        viellir();
   }
   void afficher()const {
         cout<<"une Souris <"<<couleur<<"> ";
         if(clonee==true)
            cout<<",clonee,";
         cout<<" de <"<<age<<"> mois et pesant <"<<poids<<"> grammes"<<endl;
   }
};
int main (){

  Souris s1(50.0,"blanche", 2);
  Souris s2(45.0,"grise",5);
  Souris s3(s2);
  // ... un tableau peut-être...
  s1.afficher();
  s2.afficher();
  s3.afficher();
  s1.evolue();
  s2.evolue();
  s3.evolue();
  s1.afficher();
  s2.afficher();
  s3.afficher();
return 0;
}
