with (import <nixpkgs> {});
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