//
// Created by squal on 11/12/2021.
//
#include "lib.h"
#include <string.h>
bool res (char list [10][20],char name [20],int &){
    for(int i=0;i<10;i++){
        if((strcmp(list[i],name))==0){
            return true;
        }
    }
    return false;
}
