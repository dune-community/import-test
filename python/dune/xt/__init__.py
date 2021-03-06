# ~~~
# This file is part of the dune-xt-common project:
#   https://github.com/dune-community/dune-xt-common
# Copyright 2009-2018 dune-xt-common developers and contributors. All rights reserved.
# License: Dual licensed as BSD 2-Clause License (http://opensource.org/licenses/BSD-2-Clause)
#      or  GPL-2.0+ (http://opensource.org/licenses/gpl-license)
#          with "runtime exception" (http://www.dune-project.org/license.html)
# Authors:
#   Felix Schindler (2017)
#   René Fritze     (2016, 2018)
# ~~~

# Note: This import makes sure that metis is imported before python bindings from dune-xt. Importing dune-xt python bindings at any point before metis will cause a segfault due to misscommunication between libmetis5 and libscotchmetis. 
try:
	import metis
except ImportError:
	pass

__import__('pkg_resources').declare_namespace(__name__)
