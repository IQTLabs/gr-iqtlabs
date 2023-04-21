# TODO: use released nix packages when boost/zstd available.
with (import (builtins.fetchGit {
  name = "nixpkgs-03-08-2023";
  url = "https://github.com/nixos/nixpkgs/";
  ref = "refs/heads/nixpkgs-unstable";
  rev = "1e383aada51b416c6c27d4884d2e258df201bc11";
}) {} );
let
  test-py-packages = python-packages: with python-packages; [
    pandas
    numpy

    pybind11
    cython
  ];
  python-with-packages = python3.withPackages test-py-packages;
in
mkShell {
  propagatedBuildInputs = [
    # stuff cmake needs
    spdlog
    gmp
    boost
    opencv
    volk

    gnuradio
    gnuradio.python
    gnuradio.python.pkgs.numpy
    gnuradio.python.pkgs.pybind11
    gnuradio.python.pkgs.pandas
    cmake

    zstd
    boost
    libsndfile
    soapysdr
    cppcheck
    uhd
  ];
}
