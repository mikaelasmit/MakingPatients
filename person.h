//
//  Created by Mikaela Smit on 22/10/2014.
//  Copyright (c) 2014 Mikael Smit. All rights reserved.
//

#ifndef person_h				// If not defined then defines it  # are pre-compiler definitions
#define person_h				// If not defined then defines it  # are pre-compiler definitions

using namespace std;

//// --- CREATING PATIENTS ---

class patient{							// Classes are considered private unless stated otherwise 
public:
    
    patient();							// Class constructor or calling function for patient
    

	//// --- PATIENT CHARACTERISTICS ---
	int PatientID;
	int DoB;
    int Sex;

    int CD4CellCountCatT0;				//HIV related characteristics
	int CD4CellCountCat;
	int DateHIVInfection;
	//int HIVStatus;					// Include when model includes HIV-


	//// --- EVENTS---
	// TO BE INSERTED


	//// --- FUNCTIONS ----
	// ---- Functions to produce output ---
    void TellMyDob();
	void TellMySex();
	void TellMyPatientID();
    
   
	// ---- Functions to assign characteristics ---
	void GenderDistribution();
	void PatientIDAssign(int x);
    
};

#endif
