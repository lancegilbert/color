#ifndef color_gray_uint8
#define color_gray_uint8

#include "../_internal/utility/type/index.hpp"
#include "../_internal/utility/component/unsigned.hpp"
#include "../_internal/utility/container/unsigned.hpp"

namespace color
 {
  namespace _internal
   {

    template< >
     struct index< ::color::category::gray_uint8 >
      : public color::_internal::utility::type::index< unsigned >
      {
      };

    template< >
     struct component< ::color::category::gray_uint8 >
      : public ::color::_internal::utility::component::Unsigned< std::uint8_t, 8, unsigned>
      {
      };

    template< >
     struct container< ::color::category::gray_uint8 >
      : public  ::color::_internal::utility::container::Unsigned< std::uint8_t, std::uint8_t, unsigned,  1, 8  >
      {
      };

   }
 }

#endif