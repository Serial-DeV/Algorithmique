/*******************************************************************************//* Fichier listes.h                                                            *//* cree le 27/11/2018 par Alix Munier Kordon                                    *//* Ce fichier contient la declaration des fonctions des gestion d'une liste    *//*******************************************************************************/struct liste {	int				val; 	/* champs contenant la cles */	struct 	liste*	suiv;	/* Adresse du suivant */};typedef 	struct liste	CELLULE;	/* type d'une  element */typedef		CELLULE*	    PTRCELLULE;  	/* Adresse d'une cellule *//*******************************************************************************//* PTRCELLULE creation(int valeur)                                             *//* Creation d'une CELLULE                                                      *//* Renvoie l'adresse de CALLULE cree, NULL sinon                               *//*******************************************************************************/PTRCELLULE creation(int);	/*******************************************************************************//* PTRCELLULE insertionTete(PTRCELLULE tete, PTRCELLULE element)               *//* insere la cellule element non vide en tete de la liste d'aresse tete        *//* Renvoie l'adresse de la nouvelle liste                                      *//*******************************************************************************/PTRCELLULE insertionTete(PTRCELLULE, PTRCELLULE);  	/*******************************************************************************//* PTRCELLULE suppressionTete(PTRCELLULE* adrtete)                             *//* enleve la cellule de tete de la liste pointee par *adrtete                  *//* Retourne l'adresse de la cellule retiree si la liste est non vide,          *//* NULL sinon.                                                                 *//*******************************************************************************/PTRCELLULE suppressionTete(PTRCELLULE*);/*******************************************************************************//* PTRCELLULE insertionTriee(PTRCELLULE tete, PTRCELLULE element)              *//* insere la cellule pointee par element a sa place dans la liste              *//* pointee par tete                                                            *//* Retourne l'adresse de la nouvelle liste                                     *//*******************************************************************************/PTRCELLULE insertionTriee(PTRCELLULE, PTRCELLULE);/*******************************************************************************//* int suppression(PTRCELLULE* adrtete, PTRCELLULE element)                    *//* supprime la cellule pointee par element de la liste pointee par (*adrtete)  *//* Retourne 0 si element n'est pas dans la liste, 1 sinon.                     *//* La cellule pointee par element nest pas detruite.                           *//*******************************************************************************/int suppression(PTRCELLULE*, PTRCELLULE);/*******************************************************************************//* PTRCELLULE rechercheMax(PTRCELLULE tete)                                    *//* retourne l'adresse du plus grand element de la liste tete si tete est non   *//* nulle, NULL sinon.                                                          *//*******************************************************************************/PTRCELLULE rechercheMax(PTRCELLULE);/*******************************************************************************//* PTRCELLULE supprimeListe(PTRCELLULE tete)                                   *//* Detruit la liste pointee par tete et retourne NULL                          *//*******************************************************************************/PTRCELLULE supprimeListe(PTRCELLULE);/*******************************************************************************//* Pvoid affiche (PTRCELLULE tete)                                             *//* Affiche les valeurs stockées dans tete dans l'ordre de la liste             *//*******************************************************************************/void affiche (PTRCELLULE);/*******************************************************************************//* PTRCELLULE insertionTrieeRec(PTRCELLULE tete, PTRCELLULE element)           *//* insere la cellule pointee par element a sa place dans la liste              *//* pointee par tete                                                            *//* Retourne l'adresse de la nouvelle liste                                     *//*******************************************************************************/PTRCELLULE insertionTrieeRec(PTRCELLULE, PTRCELLULE);/*******************************************************************************//* PTRCELLULE insertionQueue(PTRCELLULE tete, PTRCELLULE element)              *//* insere la cellule pointee par element en queu dans la liste                 *//* pointee par tete                                                            *//* Retourne l'adresse de la nouvelle liste                                     *//*******************************************************************************/PTRCELLULE insertionQueue(PTRCELLULE, PTRCELLULE);/*******************************************************************************//* PTRCELLULE inverserListe(PTRCELLULE tete)                                   *//* inverse l'ordre des element de la liste pointee par tete                    *//* Retourne l'adresse de la nouvelle liste                                     *//*******************************************************************************/PTRCELLULE inverserListe(PTRCELLULE);/*******************************************************************************//* PTRCELLULE dernierElement(PTRCELLULE tete)                                  *//* retourne l'adresse du dernier element de la liste tete si tete est non      *//* nulle, NULL sinon.                                                          *//*******************************************************************************/PTRCELLULE dernierElement(PTRCELLULE);/*******************************************************************************//* int estPalindrome(PTRCELLULE tete, PTRCELLULE queue)                        *//* vri si la liste cemprise entre tete et queue est un palindrome              *//*******************************************************************************/int estPalindrome(PTRCELLULE, PTRCELLULE);       PTRCELLULE rechercheMin(PTRCELLULE);