#ifndef color_hcg_hcg_
#define color_hcg_hcg_


#include "./category.hpp"

#include "./akin/akin.hpp"
#include "./trait/trait.hpp"

#include "../generic/model.hpp"


namespace color
 {

  template< typename type_name>
   using hcg = ::color::model< typename ::color::category::hcg< type_name > >;

 }


#include "./place/place.hpp"

#include "./get/get.hpp"
#include "./set/set.hpp"

#include "./convert/convert.hpp"
#include "./make/make.hpp"


#endif