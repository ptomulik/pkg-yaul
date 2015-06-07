// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/template_sequence/aux_/apply_sequence.hpp

/** // doc: yaul/tml/template_sequence/aux_/apply_sequence.hpp {{{
 * \file yaul/tml/template_sequence/aux_/apply_sequence.hpp
 * \brief Implements \ref yaul::tml::apply_sequence for \ref TemplateSeqConcept
 */ // }}}
#ifndef YAUL_TML_TEMPLATE_SEQUENCE_AUX_APPLY_SEQUENCE_HPP
#define YAUL_TML_TEMPLATE_SEQUENCE_AUX_APPLY_SEQUENCE_HPP

#include <yaul/tml/apply_sequence_fwd.hpp>
#include <yaul/tml/template_sequence/aux_/tag.hpp>
#include <yaul/tml/apply.hpp>
#include <yaul/tml/integral_c.hpp>

namespace yaul { namespace tml {
/** // doc: apply_sequence_impl<aux::template_sequence_tag> {{{
 * \struct apply_sequence
 * \par Specialization for Template Sequences
 *
 * For any \ref LambdaExprConcept `f` and \ref TemplateSeqConcept
 * `s<a1,...an>` of arbitrary types `a1,...an`:
 * \code
 *  typedef apply_sequence<f,s<a1,...an> >::type t;
 * \endcode
 *
 * - **Return type**: Unspecified
 * - **Semantics**: Equivalent to
 *   \code
 *    typedef apply<f,a1,...an>::type t;
 *   \endcode
 *
 * For any \ref LambdaExprConcept `f`, integral type `t`, values `a1,...an` of
 * type `t` and a template `s`
 * \code
 *  typedef apply_sequence<f,s<t,a1,...an> >::type t;
 * \endcode
 *
 * - **Return type**: Unspecified
 * - **Semantics**: Equivalent to
 *   \code
 *    typedef apply<f,integral_c<t,a1>,...integral_c<t,an> >::type t;
 *   \endcode
 */ // }}}
template <>
  struct apply_sequence_impl<aux::template_sequence_tag>
  {
    template <class F, class S>
      struct apply;
    // Sequence of types
    template <class F, template <class...> class S, class... Args>
      struct apply<F,S<Args...> >
        : yaul::tml::apply<F,Args...>
      { };
    // Integral sequence
    template <class F, template <class TT, TT...> class S, class T, T... Args>
      struct apply<F,S<T,Args...> >
        : yaul::tml::apply<F, integral_c<T,Args>...>
      { };
  };
} } // end namespace yaul::tml

#endif /* YAUL_TML_TEMPLATE_SEQUENCE_AUX_APPLY_SEQUENCE_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
