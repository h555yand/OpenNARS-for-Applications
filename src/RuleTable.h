#ifndef RULETABLE_H
#define RULETABLE_H

/////////////////
//  RuleTable  //
/////////////////
//The rule table which .c is generated at compile time
//by NAL_GenerateRuleTable

//References//
//----------//
//#include "Term.h"
//#include "Truth.h"
#include "Memory.h"
#include "NAL.h"

//Methods//
//-------//
extern void RuleTable_Apply(Term term1, Term term2, Truth truth1, Truth truth2, long conclusionOccurrence, Stamp conclusionStamp, long currentTime);

#endif
