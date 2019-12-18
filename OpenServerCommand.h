//
// Created by nikol on 11/12/2019.
//

#ifndef EX3_OPENSERVERCOMMAND_H
#define EX3_OPENSERVERCOMMAND_H

#include <unordered_map>
#include <bits/unordered_map.h>
#include <map>
#include "Command.h"
#include "Var.h"
#include <deque>

class OpenServerCommand: public Command {
private:
    std::unordered_map<string, Var *> *varTable;
public:
    OpenServerCommand(std::unordered_map<string, Var *> *pMap);

    virtual int execute(string*);

    void updateMap(char buffer[1024], bool firstTime);

    deque<string> createDeque(string buffer);

    void firstRead(string sub, int i);

    //ssize_t read(string s, int i);

    void notFirstRead(string s, int i);
};

#endif //EX3_OPENSERVERCOMMAND_H
