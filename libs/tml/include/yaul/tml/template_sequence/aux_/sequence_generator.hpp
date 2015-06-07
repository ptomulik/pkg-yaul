// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/template_sequence/aux_/sequence_generator.hpp

/** // doc: yaul/tml/template_sequence/aux_/sequence_generator.hpp {{{
 * \file yaul/tml/template_sequence/aux_/sequence_generator.hpp
 * \brief Implements \ref yaul::tml::sequence_generator for \ref TemplateSeqConcept
 */ // }}}
#ifndef YAUL_TML_TEMPLATE_SEQUENCE_AUX_SEQUENCE_GENERATOR_HPP
#define YAUL_TML_TEMPLATE_SEQUENCE_AUX_SEQUENCE_GENERATOR_HPP

#include <yaul/tml/sequence_generator_fwd.hpp>
#include <yaul/tml/template_sequence/aux_/tag.hpp>
#include <yaul/tml/quote.hpp>

namespace yaul { namespace tml {
template <>
  struct sequence_generator_impl<aux::template_sequence_tag>
  {
  private:
    template <template <class TT, TT...> class X, class T>
      struct generator_c
      {
        template <class... Args>
          struct apply
          {
            typedef X<T,Args::value...> type;
          };
      };
  public:
    template<class Sequence>
      struct apply;
    template<template <class...> class S, class... Args>
      struct apply<S<Args...> >
      {
        typedef quote<S> type;
      };
    template<template <class TT, TT...> class X, class T, T... Args>
      struct apply<X<T,Args...> >
      {
        typedef generator_c<X,T> type;
      };
  };
} } // end namespace yaul::tml

#endif /* YAUL_TML_TEMPLATE_SEQUENCE_AUX_SEQUENCE_GENERATOR_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
