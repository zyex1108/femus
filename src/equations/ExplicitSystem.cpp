/*=========================================================================

 Program: FEMUS
 Module: ExplicitSystem
 Authors: Simone Bnà
 
 Copyright (c) FEMTTU
 All rights reserved. 

 This software is distributed WITHOUT ANY WARRANTY; without even
 the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 PURPOSE.  See the above copyright notice for more information.

=========================================================================*/

#include "ExplicitSystem.hpp"

// ------------------------------------------------------------
// ExplicitSystem implementation
ExplicitSystem::ExplicitSystem (MultiLevelProblem& ml_probl,
				const std::string& name_in,
				const unsigned int number_in) :
  System (ml_probl, name_in, number_in)
{
}

ExplicitSystem::~ExplicitSystem() {
  this->clear(); 
}
  
void ExplicitSystem::clear() {
  
}

void ExplicitSystem::init() {
  
}