/*
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 */

#include <pybind11/pybind11.h>

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <numpy/arrayobject.h>

namespace py = pybind11;

// Headers for binding functions
/**************************************/
// The following comment block is used for
// gr_modtool to insert function prototypes
// Please do not delete
/**************************************/
// BINDING_FUNCTION_PROTOTYPES(
#ifdef HAVE_VULKAN
    void bind_vkfft(py::module& m);
    void bind_vkfft_short(py::module& m);
#endif
    void bind_tuneable_test_source(py::module& m);
    void bind_retune_fft(py::module& m);
    void bind_write_freq_samples(py::module& m);
    void bind_image_inference(py::module& m);
    void bind_vector_to_json(py::module& m);
    void bind_vector_roll(py::module& m);
    void bind_retune_pre_fft(py::module& m);
    void bind_iq_inference(py::module& m);
// ) END BINDING_FUNCTION_PROTOTYPES


// We need this hack because import_array() returns NULL
// for newer Python versions.
// This function is also necessary because it ensures access to the C API
// and removes a warning.
void* init_numpy()
{
    import_array();
    return NULL;
}

PYBIND11_MODULE(iqtlabs_python, m)
{
    // Initialize the numpy C API
    // (otherwise we will see segmentation faults)
    init_numpy();

    // Allow access to base block methods
    py::module::import("gnuradio.gr");

    /**************************************/
    // The following comment block is used for
    // gr_modtool to insert binding function calls
    // Please do not delete
    /**************************************/
    // BINDING_FUNCTION_CALLS(
#ifdef HAVE_VULKAN
    bind_vkfft(m);
    bind_vkfft_short(m);
#endif
    bind_tuneable_test_source(m);
    bind_retune_fft(m);
    bind_write_freq_samples(m);
    bind_image_inference(m);
    bind_vector_to_json(m);
    bind_vector_roll(m);
    bind_retune_pre_fft(m);
    bind_iq_inference(m);
    // ) END BINDING_FUNCTION_CALLS
}