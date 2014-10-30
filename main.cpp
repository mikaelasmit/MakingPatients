//
//  Mikaela Epidemiology Model
//
//  Created by Mikaela Smit on 15/10/2014.
//  Copyright (c) 2014 Mikael Smit. All rights reserved.
//


#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "person.h"
using namespace std;   



//// --- RUN THE MAIN MODEL ---
int main(){

	srand(time(NULL));												// Random Number generator using PC time
		

	//// --- MAKING POINTER TO ARRAY OF PATIENTS ---
	patient** MyArrayOfPointersToPatients = new patient*[4];		// first 'patient*' is a pointer (address) and 'new patient' and space for 4 patients which will point to actual patienbt below
    
    for(int i=0; i<4; i++){
        MyArrayOfPointersToPatients[i]=new patient();				// 'new patient' the actual new patient
		cout<<"Tell me I am a new patient " << i << endl;}			// Output that new patient was made
	

	//// --- OUTPUT BEFORE - CHECK ---
	cout<<"My PatientID is...."<< endl;
	for(int i=0; i<4; i++){
		(MyArrayOfPointersToPatients[i])->TellMyPatientID();}		// Is better because it can only tell me my date of birth, whereas above it oculd accidenelty change it ...or something like that
	
	cout<<"My sex is...."<< endl;
	for(int i=0; i<4; i++){
		(MyArrayOfPointersToPatients[i])->TellMySex();}				
		
	cout<<"My Age is..."<< endl;									// Convert to date of birth later??
	for(int i=0; i<4; i++){
		(MyArrayOfPointersToPatients[i])->TellMyDob();}				

	
  	//// --- ASSIGN PATIENT CHARACTERISTICS ---
	for(int i=0; i<4; i++){											// --- Assign PatientID ---
		int a=i;
		(MyArrayOfPointersToPatients[i])->PatientIDAssign(a);}

	for(int i=0; i<4; i++){											// --- Assign Sex- ---
		(MyArrayOfPointersToPatients[i])->GenderDistribution();}
	
	for(int i=0; i<4; i++){											// --- Assign DoB/Age --- // Convert to date of birth later??
		(MyArrayOfPointersToPatients[i])->GetMyDateOfBirth(18,80);}
		

		//// --- GIVE OUTBPUT AFTER ---
	cout<<"Now... tell me your Patient ID...."<< endl;
	for(int i=0; i<4; i++){
        (MyArrayOfPointersToPatients[i])->TellMyPatientID(); }

	cout<<"Now... tell me your sex...."<< endl;
	for(int i=0; i<4; i++){
        (MyArrayOfPointersToPatients[i])->TellMySex(); }

    cout<<"Now, tell me your dates of birth" << endl;
	for(int i=0; i<4; i++){
		(MyArrayOfPointersToPatients[i])->TellMyDob(); }			// Convert to date of birth later??

	
	// insert code here...
    cout << "Hi Jack, so sorry\n";
	system("pause");
    return 0;
    
}
