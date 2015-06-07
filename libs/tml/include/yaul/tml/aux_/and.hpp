// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/aux_/and.hpp

/** // doc: yaul/tml/aux_/and.hpp {{{
 * \file yaul/tml/aux_/and.hpp
 * \brief Implements \ref yaul::tml::and_
 */ // }}}
# ifndef YAUL_TML_AUX_AND_HPP
# define YAUL_TML_AUX_AND_HPP

#include <yaul/tml/aux_/num_op_includes.hpp>
#include <yaul/tml/integral_c/aux_/num_op_includes.hpp>

#define AUX862492_OP &&
#define AUX862492_OP_NAME and_
#define AUX862492_OP_IMPL_NAME and_impl
#define AUX862492_OP_FWD_HEADER <yaul/tml/and_fwd.hpp>
#define AUX862492_OP_VALUE_TYPE bool
#define AUX862492_OP_ARG_VALUE(arg) arg::type::value

#include <yaul/tml/aux_/num_op.hpp>
#include <yaul/tml/integral_c/aux_/num_op.hpp>

#include <yaul/tml/aux_/num_op_cleanup.hpp>
#include <yaul/tml/integral_c/aux_/num_op_cleanup.hpp>

#endif /* YAUL_TML_AUX_AND_HPP */

// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
