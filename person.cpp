//
//  person.cpp
//  Mikaela
//
//  Created by Timothy Hallett on 29/09/2014.
//  Copyright (c) 2014 Timothy Hallett. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "person.h"


patient::patient()
{
    std::cout << "I am a new person being made\n";
    Sex=-999;
	DoB=-999;
	CD4CellCountCat=-999;
}


void patient::TellMyDob(){
    std::cout <<" My Date of birth is..." <<DoB<<std::endl;

}

void patient::TellMySex(){
    std::cout <<" My Sex is..." <<Sex<<std::endl;

}

	
void patient::GenderDistribution(){
double	r = ((double) rand() / (RAND_MAX)) ;
	if (r<=0.7) {  
		Sex=1;	//no need to define in patient as first line of this chunk already states this is taking place in 'patient'
		}
	else {Sex=2;}
	}