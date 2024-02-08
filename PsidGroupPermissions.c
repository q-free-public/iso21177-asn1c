/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "Ieee1609Dot2"
 * 	found in "../../asn1/../ttcn/AtsSecurity/lib/asn1/ieee1609dot2/Ieee1609Dot2.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */

#include "PsidGroupPermissions.h"

static int asn_DFL_3_cmp_1(const void *sptr) {
	const long *st = sptr;
	
	if(!st) {
		return -1; /* No value is not a default value */
	}
	
	/* Test default value 1 */
	return (*st != 1);
}
static int asn_DFL_3_set_1(void **sptr) {
	long *st = *sptr;
	
	if(!st) {
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	/* Install default value 1 */
	*st = 1;
	return 0;
}
static int asn_DFL_4_cmp_0(const void *sptr) {
	const long *st = sptr;
	
	if(!st) {
		return -1; /* No value is not a default value */
	}
	
	/* Test default value 0 */
	return (*st != 0);
}
static int asn_DFL_4_set_0(void **sptr) {
	long *st = *sptr;
	
	if(!st) {
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	/* Install default value 0 */
	*st = 0;
	return 0;
}
asn_TYPE_member_t asn_MBR_PsidGroupPermissions_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PsidGroupPermissions, subjectPermissions),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_SubjectPermissions,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"subjectPermissions"
		},
	{ ATF_POINTER, 3, offsetof(struct PsidGroupPermissions, minChainLength),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		&asn_DFL_3_cmp_1,	/* Compare DEFAULT 1 */
		&asn_DFL_3_set_1,	/* Set DEFAULT 1 */
		"minChainLength"
		},
	{ ATF_NOFLAGS, 2, offsetof(struct PsidGroupPermissions, chainLengthRange),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		&asn_DFL_4_cmp_0,	/* Compare DEFAULT 0 */
		&asn_DFL_4_set_0,	/* Set DEFAULT 0 */
		"chainLengthRange"
		},
	{ ATF_POINTER, 1, offsetof(struct PsidGroupPermissions, eeType),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EndEntityType,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"eeType"
		},
};
static const int asn_MAP_PsidGroupPermissions_oms_1[] = { 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_PsidGroupPermissions_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_PsidGroupPermissions_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* subjectPermissions */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* minChainLength */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* chainLengthRange */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* eeType */
};
asn_SEQUENCE_specifics_t asn_SPC_PsidGroupPermissions_specs_1 = {
	sizeof(struct PsidGroupPermissions),
	offsetof(struct PsidGroupPermissions, _asn_ctx),
	asn_MAP_PsidGroupPermissions_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_PsidGroupPermissions_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_PsidGroupPermissions = {
	"PsidGroupPermissions",
	"PsidGroupPermissions",
	&asn_OP_SEQUENCE,
	asn_DEF_PsidGroupPermissions_tags_1,
	sizeof(asn_DEF_PsidGroupPermissions_tags_1)
		/sizeof(asn_DEF_PsidGroupPermissions_tags_1[0]), /* 1 */
	asn_DEF_PsidGroupPermissions_tags_1,	/* Same as above */
	sizeof(asn_DEF_PsidGroupPermissions_tags_1)
		/sizeof(asn_DEF_PsidGroupPermissions_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_PsidGroupPermissions_1,
	4,	/* Elements count */
	&asn_SPC_PsidGroupPermissions_specs_1	/* Additional specs */
};

