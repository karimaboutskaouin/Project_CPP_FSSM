# Nom de l'exécutable final
TARGET = build/JeuCourseVelo

# Compilateur et options de compilation
CXX = g++
CXXFLAGS = -Wall -g -Iinclude  # -Wall pour afficher les warnings, -g pour le débogage, -Iinclude pour les headers

# Fichiers source et objets
SRC = src/main.cpp src/Menu.cpp src/Jeu.cpp src/Velo.cpp src/Carte.cpp src/Collision.cpp src/Timer.cpp src/Utils.cpp
OBJ = $(SRC:.cpp=.o)

# Règle par défaut : tout construire
all: $(TARGET)

# Créer l'exécutable en liant les fichiers objets
$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $(TARGET)

# Compilation des fichiers source en fichiers objets (.o)
src/%.o: src/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Nettoyage des fichiers objets et de l'exécutable
clean:
	rm -f src/*.o $(TARGET)

# Règle pour les fichiers d'assets (ne changent pas durant la compilation, mais peuvent être utiles pour la gestion)
assets:
	@echo "Assurez-vous que les ressources sont bien présentes dans le dossier 'assets'"

# Phonies : règles qui ne correspondent pas à des fichiers
.PHONY: all clean assets
