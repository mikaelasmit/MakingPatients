//
//  person.h
//  Mikaela
//
//  Created by Timothy Hallett on 29/09/2014.
//  Copyright (c) 2014 Timothy Hallett. All rights reserved.
//

#ifndef Mikaela_person_h
#define Mikaela_person_h

class patient{
    public:
    
    patient();
    
    void TellMyDob();
	void TellMySex();
    
    int DoB;
    int Sex;
    int CD4CellCountCat;

	void GenderDistribution();
    
};


#endif
