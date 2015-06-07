# ifndef YAUL_TML_VARIADIC_AUX_FIND_IF_HPP
# define YAUL_TML_VARIADIC_AUX_FIND_IF_HPP

#include <yaul/tml/long.hpp>
#include <yaul/tml/if.hpp>
#include <yaul/tml/apply.hpp>

namespace yaul { namespace tml { namespace variadic { namespace detail {
template<class Pred>
  struct find_if_impl
  {
    template<long N, class... Args>
      struct apply;
    template<long N, class Head, class... Tail>
      struct apply<N, Head, Tail...>
        : if_<  typename yaul::tml::apply<Pred, Head>::type
              , long_<N>
              , typename find_if_impl<Pred>::template apply<N+1,Tail...> >::type
      { };
    template<long N>
      struct apply<N>
        : long_<N>
      { };
  };
} } } } // end namespace yaul::tml::variadic::detail

# endif // YAUL_TML_VARIADIC_AUX_FIND_IF_HPP
