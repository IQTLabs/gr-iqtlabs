with (import (builtins.fetchGit {
  name = "nixpkgs-01-27-2023";
  url = "https://github.com/nixos/nixpkgs/";
  ref = "refs/tags/22.11";
  rev = "bd15cafc53d0aecd90398dd3ffc83a908bceb734";
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
    volk

    gnuradio
    gnuradio.python
    gnuradio.python.pkgs.numpy
    gnuradio.python.pkgs.pybind11
    gnuradio.python.pkgs.pandas
    cmake
    
    libsndfile
    soapysdr
    cppcheck
  ];
}