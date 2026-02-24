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
};
int main (){
return 0;
}
