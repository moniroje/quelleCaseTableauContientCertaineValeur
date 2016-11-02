/* quelleCaseTableauContientCertaineValeur
 * Écrire une fonction f ayant en paramètres un tableau t de taille quelconque
 * et un entier n indiquant la taille du tableau. f doit renvoyer par un return
 * un entier égal à l'indice de la première case du tableau (parmi les n)
 * contenant une valeur comprise entre min et MAX. S'il n'existe pas de telle
 * valeur, la fonction renvoie -1. Tester cette fonction.
 * En plus, j'essaye de rajouter par un autre return de f() la valeur contenue
 * dans  case gagnante.*/
 
 20161102: le code fonctionne mais mal; j'ai la console, je pose mes valeurs,
 7,8,9,4,5,6,11,2,3,95, je définis min=10 et MAX=15; il devrait donc me dire:
   cout<<"Il existe une valeur dans la fourchette que tu as fixée. "<<endl;
   cout<<"la case contenant cette valeur dans la fourchette fixée est la "<<6 ou 7<<"ième"
   et il me répond bêtement:
   else cout<<"Pas de valeurs dans la fourchette que tu as fixée. "<<endl;
   Du coup, je garde en commentaire mon rajout (avec un return en plus) pour 
   plus tard...
