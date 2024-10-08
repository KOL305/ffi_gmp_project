/* This file generated by gen-sieve.c - DO NOT EDIT. */

#if GMP_LIMB_BITS != 32
Error, error, this data is for 32 bits
#endif

#define PRIMESIEVE_INIT_TABLE \
	CNST_LIMB (0x69128480),	/* 5 - 100 (23 primes) */	\
	CNST_LIMB (0x3294C9E0),	/* 101 - 196 (19 primes) */	\
	CNST_LIMB (0xC4AB21DC),	/* 197 - 292 (17 primes) */	\
	CNST_LIMB (0x95A35E1E),	/* 293 - 388 (15 primes) */	\
	CNST_LIMB (0xB8693366),	/* 389 - 484 (16 primes) */	\
	CNST_LIMB (0x4AD7CE99),	/* 485 - 580 (14 primes) */	\
	CNST_LIMB (0x728DC52B),	/* 581 - 676 (16 primes) */	\
	CNST_LIMB (0x6595B6DA),	/* 677 - 772 (14 primes) */	\
	CNST_LIMB (0x87B0CEDE),	/* 773 - 868 (14 primes) */	\
	CNST_LIMB (0xEA6D9F87),	/* 869 - 964 (12 primes) */	\
	CNST_LIMB (0xCD3275A9),	/* 965 - 1060 (15 primes) */	\
	CNST_LIMB (0x3F56A1F4),	/* 1061 - 1156 (14 primes) */	\
	CNST_LIMB (0x74A76ADB),	/* 1157 - 1252 (13 primes) */	\
	CNST_LIMB (0xFD3848FB),	/* 1253 - 1348 (13 primes) */	\
	CNST_LIMB (0xA1EDF6AF),	/* 1349 - 1444 (11 primes) */	\
	CNST_LIMB (0xDBBA0DD1),	/* 1445 - 1540 (14 primes) */	\
	CNST_LIMB (0xD22799A5),	/* 1541 - 1636 (16 primes) */	\
	CNST_LIMB (0xCEC7F17E),	/* 1637 - 1732 (11 primes) */	\
	CNST_LIMB (0xBB717D56),	/* 1733 - 1828 (12 primes) */	\
	CNST_LIMB (0xEAEC17BD),	/* 1829 - 1924 (12 primes) */	\
	CNST_LIMB (0x585AFCF3),	/* 1925 - 2020 (13 primes) */	\
	CNST_LIMB (0x3B0EB7B3),	/* 2021 - 2116 (13 primes) */	\
	CNST_LIMB (0x9FDF6C4F),	/* 2117 - 2212 (10 primes) */	\
	CNST_LIMB (0xE563D8F6),	/* 2213 - 2308 (13 primes) */	\
	CNST_LIMB (0xA45E92FC),	/* 2309 - 2404 (15 primes) */	\
	CNST_LIMB (0xFE5BA7AB),	/* 2405 - 2500 (10 primes) */	\
	CNST_LIMB (0x3BF49B7D),	/* 2501 - 2596 (11 primes) */	\
	CNST_LIMB (0x158DEE6F),	/* 2597 - 2692 (13 primes) */	\
	CNST_LIMB (0xEDE6CD1A),	/* 2693 - 2788 (13 primes) */	\
	CNST_LIMB (0xBE5A7BC4),	/* 2789 - 2884 (13 primes) */	\
	CNST_LIMB (0xCA7BB6AD),	/* 2885 - 2980 (12 primes) */	\
	CNST_LIMB (0xD7679B3F),	/* 2981 - 3076 (10 primes) */	\
	CNST_LIMB (0x1FEF37E9),	/* 3077 - 3172 (10 primes) */	\
	CNST_LIMB (0xC3F66B97),	/* 3173 - 3268 (12 primes) */	\
	CNST_LIMB (0x39C953FD),	/* 3269 - 3364 (13 primes) */	\
	CNST_LIMB (0x6F7EBCF3),	/* 3365 - 3460 (9 primes) */	\
	CNST_LIMB (0xD235DBF0),	/* 3461 - 3556 (14 primes) */	\
	CNST_LIMB (0xD5A5ECDC),	/* 3557 - 3652 (13 primes) */	\
	CNST_LIMB (0xD5B65E3B),	/* 3653 - 3748 (12 primes) */	\
	CNST_LIMB (0xECFA7B2F),	/* 3749 - 3844 (10 primes) */	\
	CNST_LIMB (0xC89F67B1),	/* 3845 - 3940 (14 primes) */	\
	CNST_LIMB (0xD28EFDF9),	/* 3941 - 4036 (11 primes) */	\
	CNST_LIMB (0x3DD3AF4F),	/* 4037 - 4132 (11 primes) */	\
	CNST_LIMB (0xCB7F7C7A),	/* 4133 - 4228 (10 primes) */	\
	CNST_LIMB (0xFF6B32CC),	/* 4229 - 4324 (12 primes) */	\
	CNST_LIMB (0xEEBED6CD),	/* 4325 - 4420 (10 primes) */	\
	CNST_LIMB (0x5ECFA97C),	/* 4421 - 4516 (12 primes) */	\
	CNST_LIMB (0xD5BD73F8),	/* 4517 - 4612 (11 primes) */	\
	CNST_LIMB (0xBBAD48F7),	/* 4613 - 4708 (12 primes) */	\
	CNST_LIMB (0x21FDBE4F),	/* 4709 - 4804 (12 primes) */	\
	CNST_LIMB (0xEEB7FDE7),	/* 4805 - 4900 (7 primes) */	\
	CNST_LIMB (0x5E35A3B5),	/* 4901 - 4996 (14 primes) */	\
	CNST_LIMB (0xA7DBBCC9),	/* 4997 - 5092 (12 primes) */	\
	CNST_LIMB (0xD9EBFD53),	/* 5093 - 5188 (10 primes) */	\
	CNST_LIMB (0x2EFE1F76),	/* 5189 - 5284 (11 primes) */	\
	CNST_LIMB (0xFF9EDEAF),	/* 5285 - 5380 (7 primes) */	
#define PRIMESIEVE_NUMBEROF_TABLE 56
/* #define PRIMESIEVE_PRIMES_IN_TABLE 706 */
#define PRIMESIEVE_HIGHEST_PRIME 5351
/* #define PRIMESIEVE_FIRST_UNCHECKED 5381 */

#define SIEVE_MASK1 CNST_LIMB(0x69128483)
#define SIEVE_MASK2 CNST_LIMB(0x12148960)
#define SIEVE_MASKT CNST_LIMB(0xC)

