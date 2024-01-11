# Rapport de Projet Logiciel Transversal "CLUEDO CONSPIRATON"

![Boitedejeu](ImagesRapport/Boitedejeu.png)

[TESTU Tristan](https://github.com/TestuTristan), [CHAIEB Ilias](https://github.com/Ilias1313), [BOUZIANE Imade](https://github.com/ImadeBouziane)

# Sommaire

## [1. Présentation Générale](#1)

### [1.1 Archétype](#1.1)
### [1.2 Règles du jeu](#1.2)
### [1.3 Ressources](#1.3)

## [2. Description et conception des états](#2)

### [2.1 Description des états](#2.1)

#### [2.1.1 Élément Places](#2.1.1)
#### [2.1.2 Élément Players](#2.1.2)
#### [2.1.3 Élément Cards](#2.1.3)
#### [2.1.4 Élément Passives](#2.1.4)
#### [2.1.5 Élément Conspiracy](#2.1.5)

### [2.2 Conception logiciel : extension pour le rendu](#2.2)

## [3. Rendu: Stratégie et Conception](#3)

### [3.1 Stratégie de rendu d'un état](#3.1)
### [3.2 Conception logiciel](#3.2)

## [4. Règles de changement d'états et moteur de jeu](#4)

### [4.1 Changements extérieurs](#4.1)
### [4.2 Changements autonomes](#4.2)
### [4.3 Conception logiciel](#4.3)

## [5. Intelligence Artificielle](#5)

### [5.1 Stratégies](#5.1)
### [5.2 Conception logiciel](#5.2)

## [6. Modularisation](#6)

### [6.1 Organisation des modules](#6.1)
### [6.2 Conception logiciel](#6.2)

## 1. Présentation Générale <a id="1"></a>

### 1.1 Archétype <a id="1.1"></a>

L’objectif du projet est la réalisation du jeu « Cluedo : Conspiration» Il s’agit d’un jeu de rôle  qui mêle supercherie et déduction. C’est un jeu conçu pour 4 à 10 joueurs. Les joueurs incarnent des personnages du Cluedo classique et jouent des rôles secrets dans des équipes adverses. L’équipe des Amis cherchent à sauver M. Corail et à révéler le complot des conspirateurs. L’équipe des Conspirateurs tentent secrètement de saboter les plans des Amis et de mettre à exécution le complot de meurtre.

### 1.2 Règles du jeu <a id="1.2"></a>

Les joueurs ont été invités à l’Hôtel Resort la Vipère Noire dirigé par Carl Corail. Alors qu’une tempête se lève, les joueurs découvrent une série de pièges mortels dans l’hôtel. L’un des joueurs veut tuer Mr. Corail. Les joueurs doivent résoudre ce mystère sans savoir à qui faire confiance.
	
Une fois le jeu installé, chaque joueur choisit un personnage et se voit assigner un rôle secret. Les joueurs peuvent alors être un membre conspirateur qui veut tuer Mr. Corail ou un ami qui veut le maintenir en vie. Pendant la révélation du complot, tous les joueurs ferment les yeux sauf  les membres conspirateurs qui peuvent alors s’identifier secrètement les uns les autres et le conspirateur en chef montre les cartes lieux et armes à ses complices :  la conspiration est activé et la partie peut commencer. 

L’objectif principal des conspirateurs est d’exécuter le complot. Seul le conspirateur en chef peut tuer Mr. Corail si elle est la bonne personne , Garde du Corps de Mr . Corail , au bon endroit , lieu du complot , et au bon moment , après que Mr. Corail ait été blessé. Ils peuvent aussi tenter de tuer Mr. Corail en activant des pièges dans l’hôtel jusqu’à ce qu’il perde tous ses points de vie.

L’objectif principal des amis est de maintenir Mr. Corail en vie en désamorçant les pièges et en empêchant le complot. Mais même si Mr. Corail est tué par les pièges, les amis peuvent encore gagner en identifiant les éléments du complot : Qui est le conspirateur en chef ? Où voulait-il tuer Mr. Corail ? Et avec quelle arme ?

Le jeu se joue en rounds. A chaque round une équipe est choisie pour explorer un lieu pour désamorcer ou activer secrètement un piège. Le rôle de l'Éclaireur change à chaque round. Chaque tour, l’éclaireur choisi trois éléments : un Lieu où se rendre , un Garde du Corps ( il a la responsabilité d’escorter Mr. Corail vers le lieu et de récupérer les indices.) et les autres membres de l'équipe  qui l'accompagnent. Choisir ses accompagnants est important. Une fois le choix de l’éclaireur effectué, tous les joueurs votent pour savoir si l’équipe choisie doit se déplacer dans le lieu. La majorité l’emporte et en cas d’égalité le vote est rejeté. S’il est rejeté le traqueur de tempête avance de un (Si le traqueur de tempête vaut 3, Mr. Corail perd un Point de Vie) et le joueur de gauche devient le nouvel éclaireur. Si le vote est approuvé tous les joueurs choisi et Mr. Corail se déplace vers le lieu choisi. Une fois dans le lieu, les joueurs demandent si le complot est activé.

Une fois sur le lieu, l’équipe choisie essaye de désamorcer le piège. Chaque lieu comprend trois cartes : 1 carte piège face visible et deux cartes Indices face cachée. Pour désamorcer les pièges ont doit utiliser les cartes équipement présent dans notre main. Toutes les cartes d'équipement valent 1 ou 2. Si la valeur est deux, la carte aura aussi une couleur : soit un triangle bleu ou un cercle rose. Les pièges ont également une valeur et une couleur. La valeur sur le piège est le seuil que l’équipe choisit doit atteindre si elle veut désamorcer le piège. Les cartes équipement de même couleur que le piège s'additionnent, le désamorce et les cartes de couleurs  contraires sont soustraites.  Les joueurs ne peuvent jamais avoir plus de trois cartes d’équipements en main. Chaque joueur sur le lieu doit soumettre au moins une carte équipée face cachée à l’Eclaireur. L’Eclaireur récupère et mélange les cartes reçues puis les retourne une à une pour additionner la valeur totale des équipements. Si elle est égale ou supérieur au nombre dans le coin bas gauche du piège  Mr. Corail est sauvé pour ce round. Mais si la valeur totale est inférieur à celle du piège, Mr. Corail est blessé et devient ainsi vulnérable à la conspiration. Dans les deux cas le piège est retiré et le Garde Du Corps  récupère les cartes indices présentés sous le piège (il peut mentir au sujet des indices). Il y a quatre types d’indices : Armes , Lieux, Aucun indice et Désamorçage Instantané (peut désamorcer un piège instantanément sans que les joueurs ait à poser des cartes équipements. Ensuite après avoir annoncé (ou menti) les cartes Indices , le Garde du Corps repose face cachée les indices devant lui et prend un jeton (si il a annoncé une Arme ou un Lieu) qu’il place devant lui comme repère pour savoir qui a vu quoi.
 
La dernière étape du Round est de distribuer les cartes Équipements. L’Eclaireur pioche le nombre de cartes Equipement équivalent au nombre de pions (dont celui de Mr. Corail) puis, sans les regarder , il les distribue comme il le veut aux joueurs sur ce Lieu. Les joueurs non présents piochent également une carte Équipement (à condition qu’ils aient moins de 3 cartes). Enfin, le joueur à la gauche de l’Eclaireur devient le nouvel Éclaireur pour le tour suivant et un nouveau round commence. 

Tous les rounds se déroulent de la même façon jusqu’à ce que la partie se termine d’une des trois façon suivantes :  
Les Amis se rendent dans tous les lieux et retirent tous les pièges avant que Mr. Corail ne soit tué. => Les Amis gagnent 
Le complot est activé et Mr. Corail est assassiné => La conspiration gagne 
Mr. Corail est tué par les pièges , le jeu passe alors à l’accusation finale. Pour les Amis ,c’est la dernière chance de découvrir la conspiration. Pour les conspirateurs c’est leur dernière chance d’échapper à la justice. Le nouvel Éclaireur choisit une équipe sans Garde du Corps ni Lieu et les joueurs passent au vote pour cette dernière. Si le vote n’est pas approuvé, on vote pour la prochaine équipe créée par l’Eclaireur suivant. Une fois le vote approuvé, l’ Eclaireur récupère toutes les cartes Indices restantes, les mélange et les distribue une à une aux joueurs choisis dans l’équipe. Les joueurs retournent ensuite sur le plateau et ils ont 5 minutes pour discuter et débattre de chaque élément du complot. Qui est le conspirateur en chef ? Où avait-il prévu de tuer Mr. Corail ? Quelle arme avait-il l’intention d’utiliser ? Une fois le temps écoulé, tous les joueurs votent et la majorité l’emporte. En cas d’égalité, l’Eclaireur tranche. Une fois l’accusation faite, le conspirateur en chef se dévoile et il dévoile le lieu et l’arme. Si tout était juste les Amis gagnent sinon c’est la conspiration qui gagne !

### 1.3 Ressources <a id="1.3"></a>

**Le plateau de jeu:**

![Plateau](ImagesRapport/Plateau.png)

**Role Secret:**

![RoleSecret](ImagesRapport/Rolesecret.png)

**Les cartes Joueurs/Identités:**

![Identités](ImagesRapport/Identités.png)

**Les cartes indices:**

![Indices](ImagesRapport/Indices.png)

**Les cartes équipements:**

![Equipement](ImagesRapport/Equipement.png)

**Les cartes pièges:**

![Pieges](ImagesRapport/Pieges.png)


