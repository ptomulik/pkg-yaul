// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/ref.hpp

/** // doc: yaul/tml/ref.hpp {{{
 * \file yaul/tml/ref.hpp
 * \brief Provides \ref yaul::tml::ref
 */ // }}}
#ifndef YAUL_TML_REF_HPP
#define YAUL_TML_REF_HPP

#include <yaul/tml/ref_fwd.hpp>
#include <yaul/tml/if.hpp>
#include <yaul/tml/identity.hpp>
#include <type_traits>

namespace yaul { namespace tml {
/** // doc: ref {{{
 * \ingroup TypesMiscGroup
 * \struct ref
 * \brief Reference to a type
 *
 * \tparam T a type to be referred to
 *
 * \par Synopsis
 *
 * \code
 *  template<
 *        class T
 *      >
 *  struct ref
 *  {
 *    typedef unspecified type;
 *    // unspecified
 *    // ...
 *  };
 * \endcode
 *
 * \par Description
 *
 * For any type `T`, `ref<T>::type` identical to `T`. Additionally, if
 * T is a class, `ref<T>` inherits `T` (so any public attribute `T::attribute`
 * is also available as `ref<T>::attribute`).
 *
 * \par Expression semantics
 *
 * For any type `t`
 * \code
 *  typedef ref<t>::type r;
 * \endcode
 *
 * - **Return type**: Unspecified
 * - **Semantics**: equivalent to
 *   \code
 *    typedef t r;
 *   \endcode
 *
 * For any type `t` such that `is_class<t>::value == true` and having nested
 * attribute `t::attribute`
 * \code
 *  ref<t>::attribute
 * \endcode
 *
 * - **Return type**: Unspecified
 * - **Semantics**: equivalent to
 *   \code
 *    t::attribute
 *   \endcode
 *
 * \par Example
 * \snippet yaul/tml/ref.cpp Code
 *
 */ // }}}
template <class T, class Inherit>
  struct ref
    : if_<std::is_class<T>, T, identity<T> >::type
  {
    typedef T type;
  };
} } // end namespace yaul::tml

#endif /* YAUL_TML_REF_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
