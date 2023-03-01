# gr-iqtlabs

## Overview

This repo contains gnuradio OOT blocks, used by IQTLabs projects (including [gamutRF](https://github.com/iqtlabs/gamutRF)).

## Compability notes.

* tested with gnuradio 3.9 and 3.10, and python 3.8 and python 3.10 (for gnuradio 3.9, log messages will be incomplete though the blocks still function).
* for SoapySDR sources, requires a gr-soapy [patch](https://github.com/gnuradio/gnuradio/commit/a2dfbc122ff48ccccecaba9b0749a0eb5473342d) which is not yet released as of March 1 2023.
