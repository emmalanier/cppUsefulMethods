#######################################################################################
# CONFIGURATION
#######################################################################################

# Par ex ici, definition d'une variable pour le choix du compilateur + option
# Wall (all warning)
GPP=g++ -Wall
GSL_LIBS=-lgsl -lgslcblas -lm

# La liste des executables a compiler est mise dans une variable EXE.
# les executables sont en .exe pour pouvoir beneficier de la regle generique de conversion de .o en .exe
EXE=main.exe


#LIB=-lgsl

#######################################################################################

# la premiere instruction du makefile est celle par defaut, nomme usuellement
# all, quand on tape make sans donner d'argument apres

# Ici make (ou make all) va creer tous les executables (noter l'utilisation de
# la variable EXE avec la syntaxe ${EXE}).

all: ${EXE} 

#######################################################################################	

# Compilation

# Des classes
%.o:%.cpp %.h
	${GPP} -c -o $@ $<

# Des programmes principaux
%.o:%.cpp
	${GPP} -c -o $@ $<

#######################################################################################

# Edition des liens

# Regle de conversion de chaque .o en .exe
%.exe: %.o 
	${GPP} -o $@ $^${GSL_LIBS}

# Edition de lien du programme ne se limitant pas a un programme principal
main.exe:main.o stringMethods.o 
	${GPP} -o main.exe main.o stringMethods.o ${GSL_LIBS}

#######################################################################################

# nettoyage des objets machines et executables produits par ce Makefile.


clean:
	rm -rf *.o ${EXE} auto_*.dat
