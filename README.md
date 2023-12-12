# PLT

[![Actions Status](https://github.com/cbares/plt/workflows/PLT%20build/badge.svg)](https://github.com/cbares/plt/actions)

This project is a school project lead by a group of 3 students at the [ENSEA]([https://www.ensea.fr/en) :
- [TESTU Tristan](https://github.com/TestuTristan)
- [CHAIEB Ilias](https://github.com/Ilias1313)
- [BOUZIANE Imade](https://github.com/ImadeBouziane)

The goal is to reproduce a board game using Cpp. We chose "Cluedo Conspiration" and set up the game for 4 to 10 players.
AI is implemented to fill the party if needed with different strategies.
We also use [SFML](https://www.sfml-dev.org/index-fr.php) for the graphic part.
The application is a client base application and the players use their client.
This repository holds both the server and the client.

School report can be found in [Rapport](https://github.com/GuillaumeChamp/PLT/tree/master/rapport) as Markdown files.

This project came with a CMake which generate the headers from dia2code.
Code coverage is ensure with BOOTS.
A Github action is setup to validate builds.
