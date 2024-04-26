# gr-iqtlabs

## Overview

This repo contains gnuradio OOT blocks, used by IQTLabs projects (including [gamutRF](https://github.com/iqtlabs/gamutRF)).

### [image_inference](grc/iqtlabs_image_inference.block.yml)

Produce a spectrogram like image for inference pipelines (typically Torchserve based) to infer the presence of signals in FFT output.

### [iq_inference](grc/iqtlabs_iq_inference.block.yml)

Correlate samples and power for inference pipelines (typically Torchserve based) to infer the presence of signals raw in I/Q samples.

### [iq_inference_standalone](grc/iqtlabs_iq_inference_standalone.block.yml)

Send samples to inference pipelines (typically Torchserve based) to infer the presence of signals in raw I/Q samples.

### [retune_pre_fft](grc/iqtlabs_retune_pre_fft.block.yml)

Command a source block with PMT tuning messages to sweep over a set of frequency ranges, retuning after a configurable nunber of FFT points are received over a configurable threshold.

### [retune_fft](grc/iqtlabs_retune_fft.block.yml)

Command a source block with PMT tuning messages to sweep over a set of frequency ranges, retuning after a configurable nunber of FFT points are received over a configurable threshold (while validating power values are in a valid range).

### [tuneable_test_source](grc/iqtlabs_tuneable_test_source.block.yml)

Accepts PMT tuning requests and produces samples related to the requested frequency (typically used in test flowgraphs that require the source to be dynamically tuned and annotated with *rx_time* and *rx_freq* tags).

### [vector_roll](grc/iqtlabs_vector_roll.block.yml)

Rolls a vector by one half of its length (useful for, among other things, adding after an FFTW compatible FFT computation to move the DC component to the center - reproduces using ```fft_shift = True``` in the core gnuradio FFT block).

### [vector_to_json](grc/iqtlabs_vector_to_json.block.yml)

Translates a vector to JSON format, which could be output to a file or zmq.

### [vkfft](grc/iqtlabs_vkfft.block.yml)

Uses [VkFFT](https://github.com/DTolm/VkFFT) to offload FFT computation to a Vulkan compatible GPU (results in [FFTW](https://www.fftw.org/fftw3_doc/Complex-One_002dDimensional-DFTs.html#Complex-One_002dDimensional-DFTs) compatible format, DC component first).

### [write_freq_samples](grc/iqtlabs_write_freq_samples.block.yml)

Write samples to disk as zstandard compressed files, automatically opening new files when new PMT *rx_freq* tags are received.

## Building

On Ubuntu 22.04:

```bin/apt_get.sh && bin/build_test.sh```


## Compability notes

* tested with gnuradio 3.9 and 3.10, and python 3.8, 3.9 and 3.10 (for gnuradio 3.9, log messages will be incomplete though the blocks still function).
* for SoapySDR sources, requires gnuradio 3.10.6.0 or later (or a gr-soapy [patch](https://github.com/gnuradio/gnuradio/commit/a2dfbc122ff48ccccecaba9b0749a0eb5473342d))
