// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/template_sequence/aux_/distance.hpp

/** // doc: yaul/tml/template_sequence/aux_/distance.hpp {{{
 * \file yaul/tml/template_sequence/aux_/distance.hpp
 * \brief Implements \ref yaul::tml::distance for \ref TemplateSeqConcept iterator
 */ // }}}
#ifndef YAUL_TML_TEMPLATE_SEQUENCE_AUX_DISTANCE_HPP
#define YAUL_TML_TEMPLATE_SEQUENCE_AUX_DISTANCE_HPP

#include <yaul/tml/distance_fwd.hpp>
#include <yaul/tml/long.hpp>
#include <yaul/tml/template_sequence/aux_/tag.hpp>

namespace yaul { namespace tml {
template <>
  struct distance_impl<aux::ts_iter_tag>
  {
    template<class First, class Last>
      struct apply
        : long_<(Last::pos::value - First::pos::value)>
      { };
  };
} } // end namespace yaul::tml

#endif /* YAUL_TML_TEMPLATE_SEQUENCE_AUX_DISTANCE_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
