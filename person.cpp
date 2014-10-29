//
//  Created by Mikaela Smit on 22/10/2014.
//  Copyright (c) 2014 Mikael Smit. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "person.h"


//// --- CLASS (PATIENT) CONSTRUCTOR ---

patient::patient()											// First 'patient' class second constructor/variable and no return type means its a constructor
	{
    PatientID=0;
	Sex=-999;
	DoB=-999;
	CD4CellCountCat=-999;
	}


//// --- FUNCTIONS TO CREATE OUTPUT ---
void patient::TellMyPatientID(){							// --- Tell PatientID ---
	cout <<" My Patient ID is..." << PatientID << endl;}

void patient::TellMySex(){									// --- Tell Sex ---
	cout <<" My Sex is..." << Sex << endl;}	

void patient::TellMyDob(){									// --- Tell Date of Birth ---
	cout <<" My Date of birth is..." << DoB << endl;}

	
//// --- FUNCTIONS TO ASSIGN CHARACTERISTICS ---	
void patient::PatientIDAssign(int x){						// --- Assign Patient ID ---
	PatientID=x;}

void patient::GenderDistribution(){							// --- Assign Gender Distribution ---
double	r = ((double) rand() / (RAND_MAX)) ;
	if (r<=0.7){  
		Sex=1;}												// No need to define in patient as first line of this chunk already states this is taking place in 'patient'
	else {Sex=2;}}