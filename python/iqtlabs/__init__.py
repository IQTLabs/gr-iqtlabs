#
# SPDX-License-Identifier: Apache-2.0
#

# The presence of this file turns this directory into a Python package

"""
This is the GNU Radio IQTLABS module. Place your Python package
description here (python/__init__.py).
"""
import os

# import pybind11 generated symbols into the iqtlabs namespace
try:
    # this might fail if the module is python-only
    from .iqtlabs_python import *
except ModuleNotFoundError:
    pass

# import any pure python here
#
