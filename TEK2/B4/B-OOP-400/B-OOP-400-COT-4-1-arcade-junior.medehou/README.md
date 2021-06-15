# ARCADE Project (Oriented Object Programming)

## DESCRIPTION

> Create your own clone of famous games. The project should comply with a structure that separates the heart of your game launcher and its graphic dependencies.
You should dynamically load them with the help of the dl library.

## PREREQUISITES

What do you need to install ?
```
Ncurses
SFML
SDL2
make
g++
```

## HOW TO BUILD

```bash
$ make (to build all the projects)

$ make core (to build the main program)

$ make graphicals (to build all the graphicals library available in ./lib)

$ make games (to build all the games available in ./lib)
```

## USAGE

After build the projects,

```bash
$ ./arcade ./lib/graphical_lib.so (in first arg, you need to load the graphical library you want to use)
Example: ./arcade ./lib/arcade_sfml.so
```

## GROUPE MEMBERS

Project realised by:

- `Basilia TOMEHO` `basilia.tomeho@epitech.eu` [Linkedin](https://www.linkedin.com/in/basilia-tomeho-aaa8a1171/)

- `Hamidou TESSILIMI` `hamidou.tessilimi@epitech.eu` [Linkedin](https://www.linkedin.com/in/hamidou-tessilimi-03820a170/)

- `Junior MEDEHOU` `junior.medehou@epitech.eu` [Linkedin](https://www.linkedin.com/in/junior-medehou/)

We must share our graphical and game library interfaces with at least one other project group

- `Mohamed Mazu` `mohamed.mazu@epitech.eu` [Linkedin](https://www.linkedin.com/in/mohamed-mazu-004659199/)

- `Géodine AKOGBETO` `geodine.akogbeto@epitech.eu` [Linkedin](https://www.linkedin.com/in/g%C3%A9odine-akogbeto-a064801a2/)

- `Kendall GBAGUIDI` `kendall.gbaguidi@epitech.eu`

---

<div align="center">

<a href="https://github.com/blacky-yg" target="_blank"><img src="https://cdn.jsdelivr.net/npm/simple-icons@3.0.1/icons/github.svg" alt="github.com" width="30"></a>

</div>