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
📁 projet-course-velo/
├── include/
│   ├── menu.h
│   ├── jeu.h
│   ├── velo.h
│   ├── collision.h
│   └── constantes.h
├── src/
│   ├── main.cpp
│   ├── menu.cpp
│   ├── jeu.cpp
│   ├── velo.cpp
│   ├── collision.cpp
│   └── ...
├── assets/
│   ├── images/
│   └── sons/
├── rapport.pdf
└── README.md
