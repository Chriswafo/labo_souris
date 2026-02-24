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
};
int main (){
return 0;
}
