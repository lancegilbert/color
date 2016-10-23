#ifndef color_xyz_convert_hsi
#define color_xyz_convert_hsi

#include "../../_internal/convert.hpp"

#include "../category.hpp"


#include "../../hsi/hsi.hpp"
#include "../../rgb/rgb.hpp"

namespace color
 {
  namespace _internal
   {

    template< typename xyz_tag_name, typename hsi_tag_name >
     struct convert
      <
        ::color::category::xyz<   xyz_tag_name >
       ,::color::category::hsi<   hsi_tag_name >
      >
      {
       public:
         typedef ::color::category::xyz< xyz_tag_name >    xyz_category_type, category_left_type;
         typedef ::color::category::hsi< hsi_tag_name >    hsi_category_type, category_right_type;

         typedef typename ::color::akin::rgb< hsi_category_type >::akin_type  rgb_category_type;

         typedef ::color::model< xyz_category_type > xyz_model_type;
         typedef ::color::model< hsi_category_type >  hsi_model_type;

         typedef ::color::model< rgb_category_type >  rgb_model_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::input_const_type  container_right_const_input_type;

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           left = xyz_model_type( rgb_model_type( hsi_model_type( right ) ) ).container();
          }
      };

   }
 }

#endif