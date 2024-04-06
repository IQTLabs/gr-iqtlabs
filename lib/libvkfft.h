#include <cstdint>

#include "iqtlabs_types.h"

using COUNT_T = gr::iqtlabs::COUNT_T;

int64_t init_vkfft(COUNT_T batches, COUNT_T nfft, COUNT_T sample_size,
                   bool shift);
void free_vkfft();
void vkfft_offload(char *in, char *out);
