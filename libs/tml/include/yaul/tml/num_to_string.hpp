// Copyright (C) 2014, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

// yaul/tml/num_to_string.hpp

/** // doc: yaul/tml/num_to_string.hpp {{{
 * \file yaul/tml/num_to_string.hpp
 * \brief Provides \ref yaul::tml::num_to_string
 */ // }}}
#ifndef YAUL_TML_NUM_TO_STRING_HPP
#define YAUL_TML_NUM_TO_STRING_HPP

#include <yaul/tml/num_to_string_fwd.hpp>
#include <yaul/tml/join.hpp>
#include <yaul/tml/push_front.hpp>
#include <yaul/tml/enable_if.hpp>
#include <yaul/tml/sequence.hpp>
#include <yaul/tml/integral_c.hpp>

namespace yaul { namespace tml { namespace detail {
// generic numbers
template <class T, T Value, class CharT, unsigned int Base, class = void>
  struct num2str
  {
    static_assert( Base > 0 && Base <= 0x10, "Invalid digit");
    typedef typename num2str<T, Value/Base, CharT, Base>::type head;
    typedef typename num2str<T, Value%Base, CharT, Base>::type tail;
    typedef typename join<head,tail>::type type;
  };
// negative numbers
template <class T, T Value, class CharT, unsigned int Base>
  struct num2str<
            T
          , Value
          , CharT
          , Base
          , typename enable_if_c<(Value < 0)>::type
          >
  {
    static_assert( Base > 0 && Base <= 0x10, "Invalid digit");
    typedef typename num2str<T, -Value, CharT, Base>::type tail;
    typedef typename push_front<tail, integral_c<CharT,'-'> >::type type;
  };
// single digit
template <class T, T Value, class CharT, unsigned int Base>
  struct num2str<
            T
          , Value
          , CharT
          , Base
          , typename enable_if_c<(Value >= 0 && Value < Base)>::type
          >
  {
    static_assert( Base > 0 && Base <= 0x10, "Invalid digit");
    static_assert( Value >= 0 && Value < 0x10, "Invalid digit");
    typedef sequence<
      integral_c<CharT, ((Value < 0xA) ? '0' + Value : 'A' + Value-0xA)>
    > type;
  };
} } } // end namespace yaul::tml::detail

namespace yaul { namespace tml {
/** // doc: num_to_string {{{
 * \ingroup MetafunStringGroup
 * \struct num_to_string
 * \brief Convert an \ref IntConstConcept to a string.
 *
 * \tparam Value A number to be converted. \ref IntConstConcept.
 * \tparam CharT Character type for the output string.
 * \tparam Base Numerical base used to represent the `Value`. Must be less than
 *         `16`.
 *
 * \par Synopsis
 *
 * \code
 *  template<
 *        class Value
 *      , class CharT = char
 *      , unsigned int Base = 10
 *      >
 *  struct num_to_string
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * `num_to_string` returns a sequence of characters representing the `Value`
 * converted to string.
 *
 * \par Model of
 *
 * \ref MetafunConcept
 *
 * \par Expression semantics
 *
 * For an \ref IntConstConcept `v`
 * \code
 *  typedef num_to_string<v>::type r;
 * \endcode
 *
 * - **Return type**: \ref RandomSeqConcept.
 * - **Semantics**: `r` is a \ref RandomSeqConcept of \ref IntConstConcept
 *    "Integral Constants"; the elements of `r` are `integral_c<char,xi>`
 *    characters of the string representing the number `v` in decimal base.
 *
 * For an \ref IntConstConcept `v` and an integral type `ct`
 * \code
 *  typedef num_to_string<v,ct>::type r;
 * \endcode
 *
 * - **Return type**: \ref RandomSeqConcept.
 * - **Semantics**: `r` is a \ref RandomSeqConcept of \ref IntConstConcept
 *    "Integral Constants"; the elements of `r` are `integral_c<ct,xi>`
 *    characters of the string representing the number `v` in decimal base.
 *
 * For an \ref IntConstConcept `v` and an integral type `ct` and integral
 * constant `b` with `0 < b <= 16`:
 * \code
 *  typedef num_to_string<v,ct,b>::type r;
 * \endcode
 *
 * - **Return type**: \ref RandomSeqConcept.
 * - **Semantics**: `r` is a \ref RandomSeqConcept of \ref IntConstConcept
 *    "Integral Constants"; the elements of `r` are `integral_c<ct,xi>`
 *    characters of the string representing the number `v` in a base determined
 *    by `b`.
 *
 *
 * \par Example
 * \snippet yaul/tml/num_to_string.cpp Code
 *
 * \sa \ref num_to_string_c
 * \sa \ref short_to_string
 * \sa \ref int_to_string
 * \sa \ref long_to_string
 * \sa \ref c_str
 */ // }}}
template <class Value, class CharT, unsigned int Base>
  struct num_to_string
    : detail::num2str<
        typename Value::value_type
      , Value::value
      , CharT
      , Base
      >
  { };
/** // doc: num_to_string_c {{{
 * \ingroup MetafunStringGroup
 * \struct num_to_string_c
 * \brief Convert an integral constant to a string.
 *
 * \tparam T Type of the value to be converted.
 * \tparam Value A number to be converted.
 * \tparam CharT Character type for the output string.
 * \tparam Base Numerical base used to represent the `Value`. Must be less than
 *         `16`.
 *
 * \par Synopsis
 *
 * \code
 *  template<
 *        class T
 *      , T Value
 *      , class CharT = char
 *      , unsigned int Base = 10
 *      >
 *  struct num_to_string_c
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * `num_to_string_c` returns a sequence of characters representing the `Value`
 * converted to string.
 *
 * \par Model of
 *
 * \ref MetafunConcept
 *
 * \par Expression semantics
 *
 * For an integral type `t` and a value `v` of type `t`:
 * \code
 *  typedef num_to_string_c<t,v>::type r;
 * \endcode
 *
 * - **Return type**: \ref RandomSeqConcept.
 * - **Semantics**: Equivalent to
 *   \code
 *    typedef num_to_string<integral_c<t,v>,char,10>::type r;
 *   \endcode
 *
 * For an integral type `t`, a value `v` of type `t`, and an integral type `ct`
 * \code
 *  typedef num_to_string_c<t,v,ct>::type r;
 * \endcode
 *
 * - **Return type**: \ref RandomSeqConcept.
 * - **Semantics**: Equivalent to
 *   \code
 *    typedef num_to_string<integral_c<t,v>,ct,10>::type r;
 *   \endcode
 *
 * For an integral type `t`, a value `v` of type `t`, an integral type `ct` and
 * integral constant `b` with `0 < b <= 16`:
 * \code
 *  typedef num_to_string_c<t,v,ct,b>::type r;
 * \endcode
 *
 * - **Return type**: \ref RandomSeqConcept.
 * - **Semantics**: Equivalent to
 *   \code
 *    typedef num_to_string<integral_c<t,v>,ct,b>::type r;
 *   \endcode
 *
 * \par Example
 * \snippet yaul/tml/num_to_string.cpp Code
 *
 * \sa \ref num_to_string
 * \sa \ref short_to_string
 * \sa \ref int_to_string
 * \sa \ref long_to_string
 * \sa \ref c_str
 */ // }}}
template <class T, T Value, class CharT, unsigned int Base>
  struct num_to_string_c
    : num_to_string<integral_c<short, Value>, CharT, Base>
  { };
/** // doc: short_to_string {{{
 * \ingroup MetafunStringGroup
 * \struct short_to_string
 * \brief Convert an integral constant to a string.
 *
 * \tparam Value A number to be converted.
 * \tparam CharT Character type for the output string.
 * \tparam Base Numerical base used to represent the `Value`. Must be less than
 *         `16`.
 *
 * \par Synopsis
 *
 * \code
 *  template<
 *        short Value
 *      , class CharT = char
 *      , unsigned int Base = 10
 *      >
 *  struct short_to_string
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * `short_to_string` returns a sequence of characters representing the `Value`
 * converted to string.
 *
 * \par Model of
 *
 * \ref MetafunConcept
 *
 * \par Expression semantics
 *
 * For an integral constant `v` of type `short`:
 * \code
 *  typedef short_to_string<v>::type r;
 * \endcode
 *
 * - **Return type**: \ref RandomSeqConcept.
 * - **Semantics**: Equivalent to
 *   \code
 *    typedef num_to_string<v,char,10>::type r;
 *   \endcode
 *
 * For an integral constant `v` of type `short` and an integral type `ct`
 * \code
 *  typedef short_to_string<v,ct>::type r;
 * \endcode
 *
 * - **Return type**: \ref RandomSeqConcept.
 * - **Semantics**: Equivalent to
 *   \code
 *    typedef num_to_string<v,ct,10>::type r;
 *   \endcode
 *
 * For an integral constant `v` of type `short` and an integral type `ct` and
 * integral constant `b` with `0 < b <= 16`:
 * \code
 *  typedef short_to_string<v,ct,b>::type r;
 * \endcode
 *
 * - **Return type**: \ref RandomSeqConcept.
 * - **Semantics**: Equivalent to
 *   \code
 *    typedef num_to_string<v,ct,b>::type r;
 *   \endcode
 *
 * \par Example
 * \snippet yaul/tml/num_to_string.cpp Code
 *
 * \sa \ref num_to_string
 * \sa \ref num_to_string_c
 * \sa \ref int_to_string
 * \sa \ref long_to_string
 * \sa \ref c_str
 */ // }}}
template <short Value, class CharT, unsigned int Base>
  struct short_to_string
    : num_to_string<integral_c<short, Value>, CharT, Base>
  { };
/** // doc: int_to_string {{{
 * \ingroup MetafunStringGroup
 * \struct int_to_string
 * \brief Convert an integral constant to a string.
 *
 * \tparam Value A number to be converted.
 * \tparam CharT Character type for the output string.
 * \tparam Base Numerical base used to represent the `Value`. Must be less than
 *         `16`.
 *
 * \par Synopsis
 *
 * \code
 *  template<
 *        int Value
 *      , class CharT = char
 *      , unsigned int Base = 10
 *      >
 *  struct int_to_string
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * `int_to_string` returns a sequence of characters representing the `Value`
 * converted to string.
 *
 * \par Model of
 *
 * \ref MetafunConcept
 *
 * \par Expression semantics
 *
 * For an integral constant `v` of type `int`:
 * \code
 *  typedef int_to_string<v>::type r;
 * \endcode
 *
 * - **Return type**: \ref RandomSeqConcept.
 * - **Semantics**: Equivalent to
 *   \code
 *    typedef num_to_string<v,char,10>::type r;
 *   \endcode
 *
 * For an integral constant `v` of type `int` and an integral type `ct`
 * \code
 *  typedef int_to_string<v,ct>::type r;
 * \endcode
 *
 * - **Return type**: \ref RandomSeqConcept.
 * - **Semantics**: Equivalent to
 *   \code
 *    typedef num_to_string<v,ct,10>::type r;
 *   \endcode
 *
 * For an integral constant `v` of type `int` and an integral type `ct` and
 * integral constant `b` with `0 < b <= 16`:
 * \code
 *  typedef int_to_string<v,ct,b>::type r;
 * \endcode
 *
 * - **Return type**: \ref RandomSeqConcept.
 * - **Semantics**: Equivalent to
 *   \code
 *    typedef num_to_string<v,ct,b>::type r;
 *   \endcode
 *
 * \par Example
 * \snippet yaul/tml/num_to_string.cpp Code
 *
 * \sa \ref num_to_string
 * \sa \ref num_to_string_c
 * \sa \ref short_to_string
 * \sa \ref long_to_string
 * \sa \ref c_str
 */ // }}}
template <int Value, class CharT, unsigned int Base>
  struct int_to_string
    : num_to_string<integral_c<int, Value>, CharT, Base>
  { };
/** // doc: long_to_string {{{
 * \ingroup MetafunStringGroup
 * \struct long_to_string
 * \brief Convert an integral constant to a string.
 *
 * \tparam Value A number to be converted.
 * \tparam CharT Character type for the output string.
 * \tparam Base Numerical base used to represent the `Value`. Must be less than
 *         `16`.
 *
 * \par Synopsis
 *
 * \code
 *  template<
 *        long Value
 *      , class CharT = char
 *      , unsigned int Base = 10
 *      >
 *  struct long_to_string
 *  {
 *    typedef unspecified type;
 *  };
 * \endcode
 *
 * \par Description
 *
 * `long_to_string` returns a sequence of characters representing the `Value`
 * converted to string.
 *
 * \par Model of
 *
 * \ref MetafunConcept
 *
 * \par Expression semantics
 *
 * For an integral constant `v` of type `long`:
 * \code
 *  typedef long_to_string<v>::type r;
 * \endcode
 *
 * - **Return type**: \ref RandomSeqConcept.
 * - **Semantics**: Equivalent to
 *   \code
 *    typedef num_to_string<v,char,10>::type r;
 *   \endcode
 *
 * For an integral constant `v` of type `long` and an integral type `ct`
 * \code
 *  typedef long_to_string<v,ct>::type r;
 * \endcode
 *
 * - **Return type**: \ref RandomSeqConcept.
 * - **Semantics**: Equivalent to
 *   \code
 *    typedef num_to_string<v,ct,10>::type r;
 *   \endcode
 *
 * For an integral constant `v` of type `long` and an integral type `ct` and
 * integral constant `b` with `0 < b <= 16`:
 * \code
 *  typedef long_to_string<v,ct,b>::type r;
 * \endcode
 *
 * - **Return type**: \ref RandomSeqConcept.
 * - **Semantics**: Equivalent to
 *   \code
 *    typedef num_to_string<v,ct,b>::type r;
 *   \endcode
 *
 * \par Example
 * \snippet yaul/tml/num_to_string.cpp Code
 *
 * \sa \ref num_to_string
 * \sa \ref num_to_string_c
 * \sa \ref short_to_string
 * \sa \ref int_to_string
 * \sa \ref c_str
 */ // }}}
template <long Value, class CharT, unsigned int Base>
  struct long_to_string
    : num_to_string<integral_c<long, Value>, CharT, Base>
  { };
} } // end namespace yaul::tml

#endif /* YAUL_TML_NUM_TO_STRING_HPP */
// vim: set expandtab tabstop=2 shiftwidth=2:
// vim: set foldmethod=marker foldcolumn=4:
