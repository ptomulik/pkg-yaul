// Copyright (C) 2015, Pawel Tomulik <ptomulik@meil.pw.edu.pl>
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)

#include <yaul/variant/multivisitors.hpp>
#include <yaul/variant/variant.hpp>
#include <yaul/variant/test_config.hpp>
#include <type_traits>
#include <tuple>
#include <yaul/variant/multivisitors_test_helper.hpp>

void test__apply_visitor__01()
{
  typedef yaul::variant<int,char> X1;
  typedef yaul::variant<double,int,char> X2;
  typedef yaul::variant<float,int> X3;

  // V01 const&
  {
    V01 const v{};
    // X1&&
    {
      // X2&
      {
        X2 x2{2};
        // X3&
        {
          X3 x3{3};
          V01::i1 = 0; V01::i2 = 0; V01::i3 = 0;
          static_assert(noexcept(apply_visitor(v,X1{1},x2,x3)), "");
          YAUL_VARIANT_CHECK_EQUALS(apply_visitor(v,X1{1},x2,x3), 0x2131111);
          YAUL_VARIANT_CHECK_EQUALS(V01::i1, 1);
          YAUL_VARIANT_CHECK_EQUALS(V01::i2, 2);
          YAUL_VARIANT_CHECK_EQUALS(V01::i3, 3);
        }
        // X3 const&
        {
          X3 const x3{3};
          V01::i1 = 0; V01::i2 = 0; V01::i3 = 0;
          static_assert(noexcept(apply_visitor(v,X1{1},x2,x3)), "");
          YAUL_VARIANT_CHECK_EQUALS(apply_visitor(v,X1{1},x2,x3), 0x2131112);
          YAUL_VARIANT_CHECK_EQUALS(V01::i1, 1);
          YAUL_VARIANT_CHECK_EQUALS(V01::i2, 2);
          YAUL_VARIANT_CHECK_EQUALS(V01::i3, 3);
        }
        // X3&&
        {
          V01::i1 = 0; V01::i2 = 0; V01::i3 = 0;
          static_assert(noexcept(apply_visitor(v,X1{1},x2,X3{3})), "");
          YAUL_VARIANT_CHECK_EQUALS(apply_visitor(v,X1{1},x2,X3{3}), 0x2131113);
          YAUL_VARIANT_CHECK_EQUALS(V01::i1, 1);
          YAUL_VARIANT_CHECK_EQUALS(V01::i2, 2);
          YAUL_VARIANT_CHECK_EQUALS(V01::i3, 3);
        }
      }
      // X2 const&
      {
        X2 const x2{2};
        // X3&
        {
          X3 x3{3};
          V01::i1 = 0; V01::i2 = 0; V01::i3 = 0;
          static_assert(noexcept(apply_visitor(v,X1{1},x2,x3)), "");
          YAUL_VARIANT_CHECK_EQUALS(apply_visitor(v,X1{1},x2,x3), 0x2131211);
          YAUL_VARIANT_CHECK_EQUALS(V01::i1, 1);
          YAUL_VARIANT_CHECK_EQUALS(V01::i2, 2);
          YAUL_VARIANT_CHECK_EQUALS(V01::i3, 3);
        }
        // X3 const&
        {
          X3 const x3{3};
          V01::i1 = 0; V01::i2 = 0; V01::i3 = 0;
          static_assert(noexcept(apply_visitor(v,X1{1},x2,x3)), "");
          YAUL_VARIANT_CHECK_EQUALS(apply_visitor(v,X1{1},x2,x3), 0x2131212);
          YAUL_VARIANT_CHECK_EQUALS(V01::i1, 1);
          YAUL_VARIANT_CHECK_EQUALS(V01::i2, 2);
          YAUL_VARIANT_CHECK_EQUALS(V01::i3, 3);
        }
        // X3&&
        {
          V01::i1 = 0; V01::i2 = 0; V01::i3 = 0;
          static_assert(noexcept(apply_visitor(v,X1{1},x2,X3{3})), "");
          YAUL_VARIANT_CHECK_EQUALS(apply_visitor(v,X1{1},x2,X3{3}), 0x2131213);
          YAUL_VARIANT_CHECK_EQUALS(V01::i1, 1);
          YAUL_VARIANT_CHECK_EQUALS(V01::i2, 2);
          YAUL_VARIANT_CHECK_EQUALS(V01::i3, 3);
        }
      }
      // X2&&
      {
        // X3&
        {
          X3 x3{3};
          V01::i1 = 0; V01::i2 = 0; V01::i3 = 0;
          static_assert(noexcept(apply_visitor(v,X1{1},X2{2},x3)), "");
          YAUL_VARIANT_CHECK_EQUALS(apply_visitor(v,X1{1},X2{2},x3), 0x2131311);
          YAUL_VARIANT_CHECK_EQUALS(V01::i1, 1);
          YAUL_VARIANT_CHECK_EQUALS(V01::i2, 2);
          YAUL_VARIANT_CHECK_EQUALS(V01::i3, 3);
        }
        // X3 const&
        {
          X3 const x3{3};
          V01::i1 = 0; V01::i2 = 0; V01::i3 = 0;
          static_assert(noexcept(apply_visitor(v,X1{1},X2{2},x3)), "");
          YAUL_VARIANT_CHECK_EQUALS(apply_visitor(v,X1{1},X2{2},x3), 0x2131312);
          YAUL_VARIANT_CHECK_EQUALS(V01::i1, 1);
          YAUL_VARIANT_CHECK_EQUALS(V01::i2, 2);
          YAUL_VARIANT_CHECK_EQUALS(V01::i3, 3);
        }
        // X3&&
        {
          V01::i1 = 0; V01::i2 = 0; V01::i3 = 0;
          static_assert(noexcept(apply_visitor(v,X1{1},X2{2},X3{3})), "");
          YAUL_VARIANT_CHECK_EQUALS(apply_visitor(v,X1{1},X2{2},X3{3}), 0x2131313);
          YAUL_VARIANT_CHECK_EQUALS(V01::i1, 1);
          YAUL_VARIANT_CHECK_EQUALS(V01::i2, 2);
          YAUL_VARIANT_CHECK_EQUALS(V01::i3, 3);
        }
      }
    }
  }
}

int main()
{
  test__apply_visitor__01();
  return YAUL_VARIANT_TEST_EXIT_CODE;
}