#include<iostream>
using namespace std;

// je crée la fonction saisir() qui servira à remplir un tableau:
void saisir(int t[],int n)
/*  Dans une fonction, le tableau est toujours passé par référence: pas besoin
 * de mettre le &, c'est compris automatiquement:
 * void fonction(double tableau[], int tailleTableau) : il ne faut rien mettre
 * entre les crochets. */
   {
    int i; // je déclare la variable d'itération i (variable locale)
    for(i=0;i<n;i++)
      {  // accolades pour la boucle for
       cout<<"Tapez la valeur de la case numero "<<i<<" : ";
       cin>> t[i];
      }
   }

// je crée la fonction valueInFork() :
int valueInFork(int t[], int n)
     {
      int min=0, MAX=0; /*je déclare les variables minimale et maximale de la
                         * fourchette et je les initialise = 0 sinon il me
                         * balance ce message aux cout: "Problème: min is used
                         * uninitialized in this function"   */
      int ind=-1; /* je déclare et initialise ind qui contiendra le numéro de
                   * la case gagnante; ou bien -1 pour les cases hors de la
                   * fourchette gagnante. */
      int i=0; /* la première case se nomme 0 (variable locale): on déclare et
                * initialise la variable d'itération i dans le cadre de cette
                * fonction */
      cout<<"Tape la valeur minimale de ta recherche: "<<min<<" : ";
      cin>> min;
      cout<<"Maintenant donne la valeur maxi de ta fourchette: "<<MAX<<" : ";
      cin>>MAX;
      /* Pour que la fonction cherche dans chacune des cases du tableau:
       * il faut une boucle... essayons while qui se construit ainsi :
       * while (condition) {// instructions à répéter }
       * Ce qui est entre les accolades est répété tant que la condition est
       * vérifiée. Dans mon cas, la condition pour que ça se répète est ind=-1 */
       while (ind==-1 && i<n) /* entre parenthèses: la condition: si i est < à n
                            * et si ind = -1: auquel cas ce qui est entre les
                            * accolades ci-dessous est répété:*/
        {
         if(t[i]>=min && t[i]<=MAX)
            /* si t[i] dans la fourchette gagnante, tu mets la valeur i dans ind;
             * si t[i] n'est pas dans cette fourchette, on ne fait rien que le 
             * else ci-dessous, aller à la case suivante, ind ayant par défaut 
             * la valeur -1  */
           {
            ind=i; // comme ind n'est pas -1, la boucle while s'arrête
           }
         else  // si ce n'est pas le cas, ind =-1 par défaut,  tu fais:
          {
           i++; // tu vas à la case suivante
          }
         return ind;  // quand la boucle while s'arrête, ça retourne ind
        }
    }  // fin de la fonction f() => ! control reaches  end of non-void function

int main()
{
 int tableau[10];  // soit tableau de taille 10
 int w;  // on déclare la variable w qui sera le return ind de la fonction f()

 saisir(tableau,10);  // on utilise saisir() pour tableau de taille 10
 w=valueInFork(tableau,10);  // dans w on met la valeur retournée par la fonction
 // ci-dessous est dit: si (w n'est pas -1): soit le numéro de la case gagnante:
 if(w!=-1)
  {cout<<"Il existe une valeur dans la fourchette que tu as fixée. "<<endl;
   cout<<"la case contenant cette valeur dans la fourchette fixée est la "<<w<<"ième"<<endl;
  }
 else cout<<"Pas de valeurs dans la fourchette que tu as fixée. "<<endl;
 return 0;
}
/* 20161111: code sans erreur mais si je mets une valeur dans la fourchette, il
 * me répond tout de même: "Pas de valeurs dans la fourchette que tu as fixée."



