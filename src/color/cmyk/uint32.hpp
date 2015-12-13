#ifndef color_cmyk_uint32
#define color_cmyk_uint32

#include "../_internal/utility/type/index.hpp"
#include "../_internal/utility/component/unsigned.hpp"
#include "../_internal/utility/container/unsigned.hpp"

namespace color
 {
  namespace _internal
   {

    template< >
     struct index< ::color::category::cmyk_uint32 >
      : public color::_internal::utility::type::index< unsigned >
      {
      };

    template< >
     struct component< ::color::category::cmyk_uint32 >
      : public ::color::_internal::utility::component::Unsigned< std::uint8_t,   8, unsigned>
      {
      };

    template< >
     struct container< ::color::category::cmyk_uint32 >
      : public  ::color::_internal::utility::container::Unsigned< std::uint32_t, std::uint8_t,  unsigned, 3,  8 >
      {
      };

   }
 }

#endif