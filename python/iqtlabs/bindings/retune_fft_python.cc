/*
 * Copyright 2023 Free Software Foundation, Inc.
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
/* BINDTOOL_HEADER_FILE(retune_fft.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(7d3059ca1dd68d790144470a5fecd632)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/iqtlabs/retune_fft.h>
// pydoc.h is automatically generated in the build directory
#include <retune_fft_pydoc.h>

void bind_retune_fft(py::module& m)
{

    using retune_fft    = ::gr::iqtlabs::retune_fft;


    py::class_<retune_fft, gr::block, gr::basic_block,
        std::shared_ptr<retune_fft>>(m, "retune_fft", D(retune_fft))

        .def(py::init(&retune_fft::make),
           py::arg("tag"),
           py::arg("vlen"),
           py::arg("nfft"),
           py::arg("samp_rate"),
           py::arg("freq_start"),
           py::arg("freq_end"),
           py::arg("tune_step_hz"),
           py::arg("tune_step_fft"),
           py::arg("skip_tune_step_fft"),
           py::arg("fft_roll"),
           py::arg("fft_min"),
           py::arg("fft_max"),
           py::arg("sdir"),
           py::arg("write_step_fft"),
           py::arg("bucket_range"),
           D(retune_fft,make)
        )
        



        ;




}








