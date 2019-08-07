// This file is part of the dune-xt-common project:
//   https://github.com/dune-community/dune-xt-common
// Copyright 2009-2018 dune-xt-common developers and contributors. All rights reserved.
// License: Dual licensed as BSD 2-Clause License (http://opensource.org/licenses/BSD-2-Clause)
//      or  GPL-2.0+ (http://opensource.org/licenses/gpl-license)
//          with "runtime exception" (http://www.dune-project.org/license.html)
// Authors:
//   René Fritze (2018)

#include "config.h"

#include <string>
#include <vector>

#include <dune/pybindxi/pybind11.h>
#include <dune/pybindxi/stl.h>
#include <dune/pybindxi/iostream.h>

#include <python/dune/xt/common/bindings.hh>
#include <dune/xt/common/python.hh>
#include <dune/xt/common/timings.hh>
#include <python/dune/xt/common/exceptions.bindings.hh>
#include <dune/common/parallel/mpihelper.hh>

#include <python/dune/xt/imptest/first.hh>

PYBIND11_MODULE(_second, m)
{
  namespace py = pybind11;
  using namespace pybind11::literals;
  using namespace Dune::XT::Common;

  py::module::import("dune.xt.imptest.first");

  py::class_<FoobarFirst>(m, "FoobarFirst");
}
