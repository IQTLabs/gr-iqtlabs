# TODO: use released nix packages when boost/zstd available.
# TODO: add Vulkan/mesa so vkfft can tested under nix.
with (import (builtins.fetchGit {
  name = "nixpkgs-03-08-2023";
  url = "https://github.com/nixos/nixpkgs/";
  ref = "refs/heads/nixpkgs-unstable";
  rev = "1e383aada51b416c6c27d4884d2e258df201bc11";
}) {} );
let
  test-py-packages = python-packages: with python-packages; [
    cython
    numpy
    pandas
    pybind11
    zstandard
  ];
  python-with-packages = python3.withPackages test-py-packages;
in
mkShell {
  propagatedBuildInputs = [
    boost
    cmake
    cppcheck
    gmp
    gnuradio
    gnuradio.python
    gnuradio.python.pkgs.numpy
    gnuradio.python.pkgs.pandas
    gnuradio.python.pkgs.pybind11
    libsndfile
    opencv
    soapysdr
    spdlog
    uhd
    volk
    zstd
  ];
}
