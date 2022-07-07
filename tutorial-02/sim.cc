#include <iostream>

#include "G4RunManager.hh"
#include "G4UIManager.hh"
#include "G4VisManager.hh"
#include "G4VisExecutive.hh"
#include "G4UIExecutive.hh"

int main(int argc, char** argv)
{
    G4RunManager *runManager = new G4RunManager();
    // Uncommenting this command will give runtime error (a lot of stuff is still to be defined)
    //runManager->Initialize();
    
    G4UIExecutive *ui = new G4UIExecutive(argc, argv);

    G4VisManager *visManager = new G4VisExecutive();
    visManager->Initialize();

    G4UImanager *UImanager = G4UImanager::GetUIpointer();

    ui->SessionStart();

    return 0;
}