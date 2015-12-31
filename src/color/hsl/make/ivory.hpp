#ifndef color_hsl_make_ivory
#define color_hsl_make_ivory

// ::color::make::ivory( c )

 namespace color
  {
   namespace make
    { //RGB equivalent std::array<double,3>( { 1, 1, 0.941176 } ) 

      inline
      void ivory( ::color::_internal::model< color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xb9;
       }

      inline
      void ivory( ::color::_internal::model< color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xf7e5;
       }

      inline
      void ivory( ::color::_internal::model< color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xfff7ff2au;
       }

      inline
      void ivory( ::color::_internal::model< color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xfffff877ffff2aaaul;
       }

      inline
      void ivory( ::color::_internal::model< color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0.166667, 1, 0.970588 } );
       }

      inline
      void ivory( ::color::_internal::model< color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0.166667, 1, 0.970588 } );
       }

      inline
      void ivory( ::color::_internal::model< color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0.166667, 1, 0.970588 } );
       }

    }
  }

#endif