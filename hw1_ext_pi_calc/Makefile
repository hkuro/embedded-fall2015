CFLAGS = -Wall -mavx

.PHONY: clean default

default: avx_simd baseline

avx_simd: avx_simd.c
	gcc $(CFLAGS) $< -o $@

baseline:baseline.c
	gcc $(CFLAGS) $< -o $@

clean:
	rm avx_pi baseline
