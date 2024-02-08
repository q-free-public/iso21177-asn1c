/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "EfcDsrcApplication"
 * 	found in "../../asn1/../ttcn/AtsIS/lib/asn1/iso-patched/EfcDsrcApplication.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */

#include "EnvironmentalCharacteristics.h"

asn_TYPE_member_t asn_MBR_EnvironmentalCharacteristics_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EnvironmentalCharacteristics, euroValue),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EuroValue,
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
		"euroValue"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EnvironmentalCharacteristics, copValue),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CopValue,
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
		"copValue"
		},
};
static const ber_tlv_tag_t asn_DEF_EnvironmentalCharacteristics_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_EnvironmentalCharacteristics_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* euroValue */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* copValue */
};
asn_SEQUENCE_specifics_t asn_SPC_EnvironmentalCharacteristics_specs_1 = {
	sizeof(struct EnvironmentalCharacteristics),
	offsetof(struct EnvironmentalCharacteristics, _asn_ctx),
	asn_MAP_EnvironmentalCharacteristics_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_EnvironmentalCharacteristics = {
	"EnvironmentalCharacteristics",
	"EnvironmentalCharacteristics",
	&asn_OP_SEQUENCE,
	asn_DEF_EnvironmentalCharacteristics_tags_1,
	sizeof(asn_DEF_EnvironmentalCharacteristics_tags_1)
		/sizeof(asn_DEF_EnvironmentalCharacteristics_tags_1[0]), /* 1 */
	asn_DEF_EnvironmentalCharacteristics_tags_1,	/* Same as above */
	sizeof(asn_DEF_EnvironmentalCharacteristics_tags_1)
		/sizeof(asn_DEF_EnvironmentalCharacteristics_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_EnvironmentalCharacteristics_1,
	2,	/* Elements count */
	&asn_SPC_EnvironmentalCharacteristics_specs_1	/* Additional specs */
};

