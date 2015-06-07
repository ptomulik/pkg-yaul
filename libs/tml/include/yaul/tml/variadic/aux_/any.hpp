#if !BOOST_PP_IS_ITERATING

# ifndef YAUL_TML_VARIADIC_AUX_ANY_HPP
# define YAUL_TML_VARIADIC_AUX_ANY_HPP

#   include <yaul/tml/limits/variadic.hpp>
#   include <yaul/tml/ref.hpp>
#   include <boost/preprocessor/iteration/iterate.hpp>
#   include <boost/preprocessor/repetition/enum.hpp>

#   define AUX186518_TEXT(z, n, text) text
#   define BOOST_PP_ITERATION_LIMITS (1,TML_LIMIT_VARIADIC_SIZE)
#   define BOOST_PP_FILENAME_1 <yaul/tml/variadic/aux_/any.hpp>
#   include BOOST_PP_ITERATE()
#   undef AUX186518_TEXT

# endif // YAUL_TML_VARIADIC_AUX_ANY_HPP

#else // BOOST_PP_IS_ITERATING

namespace yaul { namespace tml { namespace variadic { namespace detail {
template<>
  struct any_impl<BOOST_PP_ENUM(BOOST_PP_ITERATION(), AUX186518_TEXT, false)>
    : false_
  { };
} } } } // end namespace yaul::tml::variadic::detail

#endif // BOOST_PP_IS_ITERATING
