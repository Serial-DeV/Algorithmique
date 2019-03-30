projet: tri_listes.o aleatoire.o listes.o principal.o
	gcc tri_listes.o aleatoire.o listes.o principal.o -o projet
	
principal.o: principal.c tri_listes.h aleatoire.h listes.h
	gcc -c principal.c
	
tri_listes.o: tri_listes.c tri_listes.h listes.h
	gcc -c tri_listes.c
	
listes.o:	listes.h listes.c
	gcc -c listes.c

aleatoire.o: aleatoire.h aleatoire.c
	gcc -c aleatoire.c
	
clean:
	rm *.o
	