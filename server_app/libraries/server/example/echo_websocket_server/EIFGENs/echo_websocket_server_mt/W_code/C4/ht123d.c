/*
 * Class HTTP_REQUEST_HANDLER_I
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static EIF_TYPE_INDEX gen_type0_123 [] = {242,122,0xFFFF};
static EIF_TYPE_INDEX gen_type1_123 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type2_123 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type3_123 [] = {0,0xFFFF};
static EIF_TYPE_INDEX gen_type4_123 [] = {363,228,228,0xFFFF};
static EIF_TYPE_INDEX gen_type5_123 [] = {0xFFF9,3,177,228,228,179,0xFFFF};


static struct desc_info desc_123[] = {
	{(BODY_INDEX) 2267, (BODY_INDEX) -1, INVALID_DTYPE, NULL},
	{0, (BODY_INDEX)-1, 228, NULL},
	{1, (BODY_INDEX)-1, 242, gen_type0_123},
	{2, (BODY_INDEX)-1, 212, NULL},
	{3, (BODY_INDEX)-1, 212, NULL},
	{4, (BODY_INDEX)-1, 212, NULL},
	{5, (BODY_INDEX)-1, 212, NULL},
	{6, (BODY_INDEX)-1, 212, NULL},
	{7, (BODY_INDEX)-1, 212, NULL},
	{8, (BODY_INDEX)-1, 212, NULL},
	{9, (BODY_INDEX)-1, 212, NULL},
	{10, (BODY_INDEX)-1, 122, NULL},
	{11, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{12, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{13, (BODY_INDEX)-1, 0, gen_type1_123},
	{14, (BODY_INDEX)-1, 0, gen_type2_123},
	{15, (BODY_INDEX)-1, 122, NULL},
	{16, (BODY_INDEX)-1, 122, NULL},
	{17, (BODY_INDEX)-1, 0, gen_type3_123},
	{18, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{19, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{20, (BODY_INDEX)-1, 15, NULL},
	{21, (BODY_INDEX)-1, 228, NULL},
	{22, (BODY_INDEX)-1, 228, NULL},
	{23, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{24, (BODY_INDEX)-1, 14, NULL},
	{25, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{26, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{27, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{28, (BODY_INDEX)-1, 122, NULL},
	{29, (BODY_INDEX)-1, 218, NULL},
	{30, (BODY_INDEX)-1, 122, NULL},
	{31, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{32, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2258, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2259, (BODY_INDEX)-1, 179, NULL},
	{974, (BODY_INDEX)-1, 228, NULL},
	{975, (BODY_INDEX)-1, 228, NULL},
	{976, (BODY_INDEX)-1, 228, NULL},
	{977, (BODY_INDEX)-1, 228, NULL},
	{978, (BODY_INDEX)-1, 228, NULL},
	{979, (BODY_INDEX)-1, 228, NULL},
	{980, (BODY_INDEX)-1, 228, NULL},
	{981, (BODY_INDEX)-1, 228, NULL},
	{982, (BODY_INDEX)-1, 228, NULL},
	{983, (BODY_INDEX)-1, 228, NULL},
	{984, (BODY_INDEX)-1, 228, NULL},
	{985, (BODY_INDEX)-1, 228, NULL},
	{986, (BODY_INDEX)-1, 228, NULL},
	{987, (BODY_INDEX)-1, 228, NULL},
	{988, (BODY_INDEX)-1, 228, NULL},
	{989, (BODY_INDEX)-1, 228, NULL},
	{990, (BODY_INDEX)-1, 228, NULL},
	{991, (BODY_INDEX)-1, 228, NULL},
	{992, (BODY_INDEX)-1, 228, NULL},
	{993, (BODY_INDEX)-1, 228, NULL},
	{994, (BODY_INDEX)-1, 228, NULL},
	{995, (BODY_INDEX)-1, 228, NULL},
	{996, (BODY_INDEX)-1, 228, NULL},
	{997, (BODY_INDEX)-1, 228, NULL},
	{998, (BODY_INDEX)-1, 228, NULL},
	{999, (BODY_INDEX)-1, 228, NULL},
	{1000, (BODY_INDEX)-1, 228, NULL},
	{1001, (BODY_INDEX)-1, 228, NULL},
	{1002, (BODY_INDEX)-1, 228, NULL},
	{1003, (BODY_INDEX)-1, 228, NULL},
	{1004, (BODY_INDEX)-1, 228, NULL},
	{1005, (BODY_INDEX)-1, 228, NULL},
	{1006, (BODY_INDEX)-1, 228, NULL},
	{1007, (BODY_INDEX)-1, 228, NULL},
	{1008, (BODY_INDEX)-1, 228, NULL},
	{1009, (BODY_INDEX)-1, 228, NULL},
	{1010, (BODY_INDEX)-1, 228, NULL},
	{1011, (BODY_INDEX)-1, 228, NULL},
	{1012, (BODY_INDEX)-1, 228, NULL},
	{1013, (BODY_INDEX)-1, 228, NULL},
	{1014, (BODY_INDEX)-1, 228, NULL},
	{1015, (BODY_INDEX)-1, 228, NULL},
	{1016, (BODY_INDEX)-1, 228, NULL},
	{1017, (BODY_INDEX)-1, 228, NULL},
	{1018, (BODY_INDEX)-1, 228, NULL},
	{1019, (BODY_INDEX)-1, 228, NULL},
	{1020, (BODY_INDEX)-1, 228, NULL},
	{1021, (BODY_INDEX)-1, 228, NULL},
	{1022, (BODY_INDEX)-1, 228, NULL},
	{1023, (BODY_INDEX)-1, 228, NULL},
	{1024, (BODY_INDEX)-1, 228, NULL},
	{1025, (BODY_INDEX)-1, 228, NULL},
	{1026, (BODY_INDEX)-1, 228, NULL},
	{1027, (BODY_INDEX)-1, 228, NULL},
	{1028, (BODY_INDEX)-1, 228, NULL},
	{1029, (BODY_INDEX)-1, 228, NULL},
	{1030, (BODY_INDEX)-1, 228, NULL},
	{1031, (BODY_INDEX)-1, 228, NULL},
	{1032, (BODY_INDEX)-1, 228, NULL},
	{1033, (BODY_INDEX)-1, 228, NULL},
	{1034, (BODY_INDEX)-1, 228, NULL},
	{1035, (BODY_INDEX)-1, 228, NULL},
	{1036, (BODY_INDEX)-1, 228, NULL},
	{1037, (BODY_INDEX)-1, 228, NULL},
	{1038, (BODY_INDEX)-1, 228, NULL},
	{1039, (BODY_INDEX)-1, 228, NULL},
	{1040, (BODY_INDEX)-1, 228, NULL},
	{1041, (BODY_INDEX)-1, 228, NULL},
	{1042, (BODY_INDEX)-1, 228, NULL},
	{1043, (BODY_INDEX)-1, 228, NULL},
	{1044, (BODY_INDEX)-1, 228, NULL},
	{1045, (BODY_INDEX)-1, 228, NULL},
	{1046, (BODY_INDEX)-1, 228, NULL},
	{1047, (BODY_INDEX)-1, 228, NULL},
	{1048, (BODY_INDEX)-1, 228, NULL},
	{1049, (BODY_INDEX)-1, 228, NULL},
	{1050, (BODY_INDEX)-1, 228, NULL},
	{1051, (BODY_INDEX)-1, 228, NULL},
	{1052, (BODY_INDEX)-1, 228, NULL},
	{1053, (BODY_INDEX)-1, 228, NULL},
	{1054, (BODY_INDEX)-1, 228, NULL},
	{1055, (BODY_INDEX)-1, 228, NULL},
	{961, (BODY_INDEX)-1, 228, NULL},
	{962, (BODY_INDEX)-1, 228, NULL},
	{963, (BODY_INDEX)-1, 228, NULL},
	{964, (BODY_INDEX)-1, 228, NULL},
	{965, (BODY_INDEX)-1, 228, NULL},
	{966, (BODY_INDEX)-1, 228, NULL},
	{967, (BODY_INDEX)-1, 228, NULL},
	{968, (BODY_INDEX)-1, 228, NULL},
	{969, (BODY_INDEX)-1, 228, NULL},
	{970, (BODY_INDEX)-1, 228, NULL},
	{971, (BODY_INDEX)-1, 228, NULL},
	{972, (BODY_INDEX)-1, 228, NULL},
	{973, (BODY_INDEX)-1, 228, NULL},
	{2268, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2269, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2270, 64, 212, NULL},
	{2271, 0, 34, NULL},
	{2272, 8, 228, NULL},
	{2273, 16, 363, gen_type4_123},
	{2274, 65, 212, NULL},
	{2275, 24, 228, NULL},
	{2276, 32, 228, NULL},
	{2277, 40, 228, NULL},
	{2278, 48, 177, gen_type5_123},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2279, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2280, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2281, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{(BODY_INDEX)-1, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2260, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2261, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2262, (BODY_INDEX)-1, 228, NULL},
	{2263, 56, 29, NULL},
	{2264, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2265, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
	{2266, (BODY_INDEX)-1, (EIF_TYPE_INDEX)-1, NULL},
};

extern void Init123(void);
void Init123(void)
{
	IDSC(desc_123, 0, 122);
	IDSC(desc_123 + 1, 2, 122);
	IDSC(desc_123 + 34, 197, 122);
	IDSC(desc_123 + 36, 196, 122);
	IDSC(desc_123 + 131, 262, 122);
}


#ifdef __cplusplus
}
#endif
