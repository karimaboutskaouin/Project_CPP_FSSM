<h1 align="center">🚴‍♀️ Jeu de Course à Vélo en C++</h1>

<p align="center">
  <strong>Mini-projet de Programmation Orientée Objet en C++</strong><br>
  <em>Faculté des Sciences Semlalia - Université Cadi Ayyad</em><br>
  <em>Année Universitaire 2024-2025</em>
</p>

---

## 👥 Membres du Projet

- 🎓 Hanane AIT BAH — [@ItsHaname](https://github.com/ItsHaname)
- 🎓karima boutskaouin GitHub : [@karimaboutskaouin](https://github.com/karimaboutskaouin)


---

## 🎮 Description du Projet

Ce mini-projet consiste à développer un **jeu de course à vélo en C++**, en mode console avec une interface graphique enrichie grâce à la bibliothèque **SDL2**.

L’objectif est de créer une **application ludique** et **mono-utilisateur**, qui met en œuvre les principes de la **programmation orientée objet**, tout en intégrant des notions de **graphisme**, de **gestion d’événements**, de **collision**, et de **gestion de temps**.

---

## 🧩 Fonctionnalités Principales

- 📜 **Menu principal** avec les options : `À propos`, `Jouer`, `Quitter`
- ⏱️ **Course chronométrée** : terminer la course avant la fin du temps imparti
- 🧱 **Détection de collision** avec les murs (perte immédiate ou partielle)
- 🎮 **Contrôle du vélo** à l’aide du clavier
- 🖼️ **Graphismes 2D** à l'aide de **SDL2**
- ⚙️ **Architecture modulaire** avec plusieurs fichiers source et d'en-tête

---

## 🛠️ Technologies et Outils

| Outil / Bibliothèque | Description |
|----------------------|-------------|
| `C++`                | Langage principal du projet |
| `SDL2`               | Bibliothèque graphique 2D pour l'affichage et la gestion des entrées |
| `VS Code` / `g++`    | Environnement de développement |
| `Git & GitHub`       | Versioning et collaboration |

---

## 🧱 Structure du Projet

```bash
/JeuCourseVelo/
│
├── include/                      # Fichiers d'en-tête (.h)
│   ├── Menu.h                    # Interface du menu principal
│   ├── Jeu.h                     # Contrôle global du jeu
│   ├── Velo.h                    # Déclaration de la classe Vélo
│   ├── Carte.h                   # Gestion de la carte / niveau
│   ├── Collision.h               # Fonctions de détection de collisions
│   ├── Timer.h                   # Gestion du chronomètre
│   ├── Constantes.h              # Constantes globales (dimensions, couleurs…)
│   └── Utils.h                   # Fonctions utilitaires (random, affichage texte…)
│
├── src/                          # Implémentations (.cpp)
│   ├── main.cpp                  # Point d'entrée du jeu
│   ├── Menu.cpp                  # Implémentation du menu
│   ├── Jeu.cpp                   # Boucle principale, logique globale
│   ├── Velo.cpp                  # Mouvements, états du vélo
│   ├── Carte.cpp                 # Chargement et affichage de la carte
│   ├── Collision.cpp             # Gestion des collisions
│   ├── Timer.cpp                 # Gestion du temps
│   └── Utils.cpp                 # Fonctions diverses
│
├── assets/                       # Ressources utilisées
│   ├── images/                   # Images, textures du jeu
│   │   ├── velo.png
│   │   ├── carte.png
│   │   └── ...
│   ├── sons/                     # Effets sonores, musique
│   │   └── victoire.wav
│   └── polices/                 # Polices d’écriture (.ttf)
│       └── arcade.ttf
│
├── build/                        # Fichiers objets et exécutable
│   └── JeuCourseVelo            # Fichier exécutable final
│
├── doc/                          # Rapport et documentation
│   ├── Rapport_Jeu_Course_Velo.pdf
│   └── diagrammes/              # Diagrammes UML, croquis, architecture
│       ├── classes.png
│       └── usecase.png
│
├── Makefile                      # Compilation automatisée
├── .gitignore                    # Fichiers à ignorer par Git
└── README.md                     # Présentation du projet

```
## 🧑‍🤝‍🧑 Répartition des Tâches

| Tâche principale | Description | Assigné à |
|------------------|-------------|------------|
| 🔧 Setup initial | Création des dossiers, Makefile, `.gitignore` | **Hanane AIT BAH** |
| 🎨 Menu principal | Création du menu avec SDL / console | **Karima BOUTSKAOUIN** |
| 🚴 Classe Vélo | Mouvement, vitesse, animation | **Hanane AIT BAH** |
| 🗺️ Classe Carte | Création / lecture / affichage de la carte | **Karima BOUTSKAOUIN** |
| 💥 Collisions | Détection entre vélo et murs/obstacles | **Hanane AIT BAH** |
| ⏱️ Chronomètre | Compte à rebours, timer | **Karima BOUTSKAOUIN** |
| 🧠 Classe Jeu | Boucle de jeu principale, états (gagner/perdre) | **Hanane AIT BAH** |
| 🎼 Sons & Polices | Ajout de sons et personnalisation du texte | À discuter 😊 |

