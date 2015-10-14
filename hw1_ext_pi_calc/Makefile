CC ?= gcc
CFLAGS ?= -Wall -mavx

.PHONY: clean default

default: avx_simd baseline

avx_simd: avx_simd.c
	$(CC) $(CFLAGS) $< -o $@

baseline:baseline.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	$(RM) avx_simd baseline
