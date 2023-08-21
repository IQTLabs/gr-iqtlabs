#include <cstdint>

int64_t init_vkfft(std::size_t batches, std::size_t nfft,
                   std::size_t sample_size, bool shift);
void free_vkfft();
void vkfft_offload(char *in, char *out);
