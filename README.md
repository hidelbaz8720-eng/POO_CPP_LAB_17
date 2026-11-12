# TP 17 – Organisation modulaire en C++

##  Informations générales

- **Module :** Programmation Orientée Objet (C++)
- **Plateforme :** MLIAEdu
- **TP :** 17 – Organisation modulaire
- **Étudiant :** Hamza ID EL BAZ
- **Année universitaire :** 2025–2026

##  Objectif du TP

Ce TP a pour objectif de maîtriser l'organisation modulaire d'un projet C++ en séparant les déclarations et les implémentations, en créant des bibliothèques et en utilisant les templates.

Les quatre exercices permettent de comprendre comment organiser, compiler et réutiliser du code C++.

---

## Exercice 1 – Séparer proprement une classe unique

### Objectif
Séparer une classe `Point3D` en deux fichiers distincts.

### Fichiers
- `Point3D.h` : déclaration de la classe, constructeur et accesseurs.
- `Point3D.cpp` : implémentation des méthodes.
- `main.cpp` : création et affichage de deux points 3D.

### Notions étudiées
- Fichiers d'en-tête `.h`.
- Fichiers sources `.cpp`.
- Include Guards (`#ifndef`, `#define`, `#endif`).
- Compilation séparée.
- Liaison des fichiers objets.
<img width="1366" height="768" alt="ex1" src="https://github.com/user-attachments/assets/8783b0e3-883b-4d3b-9094-6e59d53ed8d2" />

### Compilation

```bash
g++ -c Point3D.cpp
g++ -c main.cpp
g++ Point3D.o main.o -o testPoint
```

---

##  Exercice 2 – Mini-bibliothèque géométrique

### Objectif
Créer une mini-bibliothèque géométrique composée de plusieurs classes.

### Classes utilisées
- `Point` : représente un point dans un plan.
- `Segment` : représente un segment défini par deux points.
- `Triangle` : représente un triangle défini par trois points.

### Fonctionnalités
- Création et manipulation de points.
- Construction de segments.
- Calcul de la longueur d'un segment.
- Construction d'un triangle.
- Calcul du périmètre d'un triangle.

### Notions étudiées
- Organisation en plusieurs fichiers.
- Séparation des interfaces et des implémentations.
- Relations entre les classes.
- Réutilisation du code.
- Compilation de plusieurs fichiers sources.

### Compilation

```bash
g++ main.cpp Point.cpp Segment.cpp Triangle.cpp -o main
```



##  Exercice 3 – Création d'une bibliothèque statique ou partagée

### Objectif
Créer une bibliothèque C++ réutilisable à partir de fichiers sources.

### Notions étudiées
- Bibliothèque statique (`.a`).
- Bibliothèque partagée (`.so`).
- Compilation avec `g++`.
- Création et utilisation de bibliothèques.
- Édition de liens.

### Exemple de création d'une bibliothèque statique

```bash
g++ -c Point.cpp
ar rcs libgeometrie.a Point.o
```

### Utilisation de la bibliothèque

```bash
g++ main.cpp -L. -lgeometrie -o main
```

*Remarque : les extensions et commandes peuvent varier selon le système d'exploitation. Sous Windows avec MinGW, on utilise généralement `.a` pour les bibliothèques statiques et `.dll` pour les bibliothèques dynamiques.*

---

##  Exercice 4 – Classe template et fichier d'en-tête uniquement

### Objectif
Créer une classe générique `Matrix<T, N, M>` permettant de manipuler des matrices de différentes dimensions et de différents types.

### Fichiers
- `Matrix.h` : déclaration et définition complète de la classe template.
- `main.cpp` : tests des matrices.

### Fonctionnalités
- Création de matrices de taille fixe.
- Accès aux éléments avec `at(i, j)`.
- Addition de deux matrices avec `operator+`.
- Multiplication de matrices avec `operator*`.
- Affichage avec `operator<<`.



### Notion importante

Les templates doivent généralement être définis dans les fichiers d'en-tête pour que le compilateur puisse générer les différentes instanciations utilisées dans le programme.

---

## Environnement de développement

- **Langage :** C++
- **Compilateur :** GCC / G++
- **Éditeur :** Visual Studio Code
- **Standard :** C++17
- **Système :** Windows

##  Compétences acquises

À la fin de ce TP, les compétences suivantes sont maîtrisées :

- Organiser un projet C++ en plusieurs fichiers.
- Séparer les déclarations des implémentations.
- Utiliser les fichiers `.h` et `.cpp`.
- Comprendre la compilation séparée.
- Résoudre les erreurs de liaison (*undefined reference*).
- Créer et utiliser des bibliothèques.
- Manipuler les templates C++.
- Développer un code modulaire, réutilisable et maintenable.

---

##  Auteur

**Hamza ID EL BAZ**

Étudiant en informatique – ENS Marrakech  
Université Cadi Ayyad

**TP 17 – Programmation Orientée Objet en C++**
