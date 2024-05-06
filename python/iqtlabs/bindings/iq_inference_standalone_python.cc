/*
 * Copyright 2024 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(iq_inference_standalone.h) */
/* BINDTOOL_HEADER_FILE_HASH(47123aeae5b97ed6fca1be996559bbcb)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/iqtlabs/iq_inference_standalone.h>
// pydoc.h is automatically generated in the build directory
#include <iq_inference_standalone_pydoc.h>

void bind_iq_inference_standalone(py::module& m)
{

    using iq_inference_standalone = ::gr::iqtlabs::iq_inference_standalone;


    py::class_<iq_inference_standalone,
               gr::sync_block,
               gr::block,
               gr::basic_block,
               std::shared_ptr<iq_inference_standalone>>(
        m, "iq_inference_standalone", D(iq_inference_standalone))

        .def(py::init(&iq_inference_standalone::make),
             py::arg("vlen"),
             py::arg("model_server"),
             py::arg("model_names"),
             D(iq_inference_standalone, make))


        ;
}