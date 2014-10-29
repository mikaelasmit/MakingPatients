//
//  main.cpp
//  Mikaela
//
//  Created by Timothy Hallett on 29/09/2014.
//  Copyright (c) 2014 Timothy Hallett. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "person.h"



int main(int argc, const char * argv[]) {

	srand(time(NULL));

	patient* MyArrayOfPointersToPatients[4];
    
    for(int i=0; i<4; i++){
        MyArrayOfPointersToPatients[i]=new patient;
		std::cout<<"Tell me I am a new patient " << i << std::endl;
    }

	//computer giving me output as desired Before
    std::cout<<"Now... tell me your dates of birth...."<<std::endl;
		
    for(int i=0; i<4; i++){
        (MyArrayOfPointersToPatients[i])->TellMyDob(); // Is better because it can only tell me my date of birth, whereas above oit oculd accidenelty change it ...or something like that
		}


	std::cout<<"Now... tell me your sex...."<<std::endl;

	for(int i=0; i<4; i++){
        (MyArrayOfPointersToPatients[i])->TellMySex(); // Is better because it can only tell me my date of birth, whereas above oit oculd accidenelty change it ...or something like that
		}
  

	// Assign patient characteristics
    for(int i=0; i<4; i++){
        (MyArrayOfPointersToPatients[i])->DoB=rand();
    }

	for(int i=0; i<4; i++){
		(MyArrayOfPointersToPatients[i])->GenderDistribution();
	}


	//computer giving me output as desired AFTER
    std::cout<<"Now... tell me your dates of birth...."<<std::endl;
	   
    
    for(int i=0; i<4; i++){
        (MyArrayOfPointersToPatients[i])->TellMyDob(); // Is better because it can only tell me my date of birth, whereas above oit oculd accidenelty change it ...or something like that
    }

	std::cout<<"Now... tell me your sex...."<<std::endl;

	for(int i=0; i<4; i++){
        (MyArrayOfPointersToPatients[i])->TellMySex(); // Is better because it can only tell me my date of birth, whereas above oit oculd accidenelty change it ...or something like that
    }
	                                                                                                                                           

	
	// insert code here
    std::cout << "Hi Jack, so sorry\n";
	system("pause");
    return 0;
    
    
    
    
    
    
}
