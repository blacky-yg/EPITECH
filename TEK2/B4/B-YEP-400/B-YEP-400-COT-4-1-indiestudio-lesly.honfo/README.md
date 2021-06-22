# Indie Studio (BOMBERMAN) Year End Project

The goal of the project is to implement a cross-platform 3D video game with real-world tools.
The project is composed with raylib

## TRAILER

[BOMBERMAN INDIE STUDIO](https://youtu.be/8EO7iBTes0I)

## PREREQUISITES

What do you need to install ?
```
raylib
make
cmake
g++
```

## HOW TO BUILD

#### On Linux
```bash
$ mkdir build && cd build/

$ cmake .. -G "Unix Makefiles"

$ cmake --build .
```

You can also build and run using this command:

```bash
$ mkdir build && ./build.sh
```

#### On Windows

```
# You need to use Visual Studio 2019
# Make a new cmake project
# Then, build
# It will generate a .exe
# Just follow the instructions 
```

## HOW TO RUN ON LINUX

```bash
$ ./build/bomberman (At the root of the repository)

$ ./bomberman (In the build directory)
```

## HOW TO CLEAN THE REPO

```bash
$ ./clean.sh (It will remove all generated files for compilation)
```

## HOW TO GENERATE THE DOCUMENTATION

```bash
$ doxygen Doxyfile (It will create a folder in the `doc` directory)
```
You can use Google Chrome or Firefox to open the `index.html` file

# HOW TO PLAY

#### Game
|**Keys**|**Effect**|
|---:|:---|
|***S***|To skip the first scene.|
|***ESCAPE***|To pause the game.|
|***ENTER***|To click on a gui button if it is selected.|

#### Player
|**Number**|**Keys**|**Actions**|
|---:|---:|:---|
|First |***Arrow keys***<br/>***Space***|Move your character.<br/>Place a bomb.|
|Second|***Z Q S D***<br/>***B***|Move your character.<br/>Place a bomb.|

## PRESENTATION

[PRESENTATION](https://prezi.com/p/aqjchekthdzi/?present=1)

## GROUP MEMBERS

Project realised by:

- `AGODJI Florian` `florian.agbodji@epitech.eu` [Linkedin](https://www.linkedin.com/in/florian-agbodji-3b9365162/)

- `HONFO Lesly` `lesly.honfo@epitech.eu` [Linkedin](https://www.linkedin.com/in/lesly-honfo-17a92b1a2/)

- `ODELOUI Boladji` `boladji.odeloui@epitech.eu` [Linkedin](https://www.linkedin.com/in/uriel-odeloui-a59331200/)

- `Hamidou TESSILIMI` `hamidou.tessilimi@epitech.eu` [Linkedin](https://www.linkedin.com/in/hamidou-tessilimi-03820a170/)

- `TOMEHO Basilia` `basilia.tomeho@epitech.eu` [Linkedin](https://www.linkedin.com/in/basilia-tomeho-aaa8a1171/)

- `TOM-OVOLO Clark` `clark.tom-ovolo@epitech.eu` [Linkedin](https://www.linkedin.com/in/clark-randall-tom-ovolo-mba-mve-7b02261a1/)