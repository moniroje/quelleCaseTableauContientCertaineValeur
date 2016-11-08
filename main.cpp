#include<iostream>
using namespace std;

void saisir(int t[],int n)
   {
    int i; 
    for(i=0;i<n;i++)
      {  
       cout<<"Tapez la valeur de la case numero "<<i<<" : ";
       cin>> t[i];
      }
   }

int f(int t[], int n)  
     {
      int min=0, MAX=0; 
      int ind=-1; 
      int valInFork=0; /* cette variable contiendra la valeur dans la fourchette
                        * pour qu'on puisse la connaître */
      int i=0; 
      cout<<"Tape la valeur minimale de ta recherche: "<<min<<" : ";
      cin>> min;
      cout<<"Maintenant donne la valeur maxi de ta fourchette: "<<MAX<<" : ";
      cin>>MAX;
       while (ind==-1 && i<n) 
        {
         if(t[i]>=min && t[i]<=MAX)
         { 
          ind=i; // comme ind n'est pas -1, boucle while s'arrête
          valInFork= t[i]; 
         }
        else i++; 
          
        return ind;  
        return valInFork; /* 20161102: plusieurs instructions return peuvent figurer dans 
                            * la définition d'une fonction: note c+ec012 */
        }
    }  //  => ! control reaches  end of non-void function Pourquoi il me dit ça?

int main()
{
 int tableau[10];  
 int w;  // on déclare la variable w qui sera le résultat ind de la fonction f()
 int y;  // on déclare y qui sera le return valInFork de la fonction f()

 saisir(tableau,10);  
 w=f(tableau,10); 
 y=f(tableau,10);
 if(w!=-1)
  {cout<<"Il existe une valeur dans la fourchette que tu as fixée. "<<endl;
   cout<<"la case contenant cette valeur dans la fourchette fixée est la "<<w<<"ième"<<endl;
   cout<<" et cette valeur est  "<<y<<endl;
  }
 else cout<<"Pas de valeurs dans la fourchette que tu as fixée. "<<endl;
 return 0;
}




