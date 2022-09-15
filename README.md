# GEANT4 quick start

This repo contains the some example code taken from the great GEANT4 tutorial produced by Mustafa Schmidt. 

Videos: https://www.youtube.com/playlist?list=PLLybgCU6QCGWgzNYOV0SKen9vqg4KXeVL
Official repo: https://github.com/MustafaSchmidt/geant4-tutorial

How to compile and run (change my path with yours)
1. Sourcing
```
> cd sw/geant4/geant4.10.07.p03-install/share/Geant4-10.7.3/geant4make
> source geant4make.sh
```
2. Compiling example
```
> cd Documents/Works/lab/geant4-tutorial/tutorial-02
> mkdir build
> cd build
> cmake ..
> make
```

Index
* Tutorial 1: installation test
* Tutorial 2: first project
* Tutorial 3: Adding detector construction
* Tutorial 4: Inplementing Physics list
* Tutorial 5: Generating particles
* Tutorial 6: Adding detector Volume
* Tutorial 7: Inserting sensitive detectors
* Tutorial 8: Storing hits in ROOT file
* Tutorial 9: Creating macro files for automation
* Tutorial 10: User-defined messengers
* Tutorial 11: Multithreading mode
* Tutorial 12: Adding detector efficiency
* Tutorial 13: Creating user defined stepping and event action
* Tutorial 14: Simulation Radioactive decay and energy deposition
* Tutorial 15: Creating PET (Positron Emission Tomography) setup including scintillation light
