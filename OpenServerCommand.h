//
// Created by nikol on 11/12/2019.
//

#ifndef EX3_OPENSERVERCOMMAND_H
#define EX3_OPENSERVERCOMMAND_H

#include <map>
#include "Command.h"
#include "Var.h"

class OpenServerCommand: public Command {
private:
    std::map<string, Var *> *varTable;
public:
    OpenServerCommand(std::map<string, Var *> *pMap);

    virtual int execute(string*);

    void updateMap(char buffer[1024]);
};

#endif //EX3_OPENSERVERCOMMAND_H
