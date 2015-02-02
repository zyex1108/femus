#ifndef __mgsolvermhd0_h__
#define __mgsolvermhd0_h__


#include "SystemTwo.hpp"

namespace femus {

//Forward declarations
class MultiLevelProblemTwo;


class EqnMHD : public SystemTwo {

  public:
  
  EqnMHD( MultiLevelProblemTwo& mg_equations_map_in,
          const std::string & eqname_in,const unsigned int number, const MgSmoother & smoother_type);
	   
  ~EqnMHD();

  void elem_bc_read(const double el_xm[],int& surf_id, double value[],int el_flag[]) const {};
  
  void GenMatRhs(const uint Level);
  
   
  
};



} //end namespace femus



#endif
