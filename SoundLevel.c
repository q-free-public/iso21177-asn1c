/*
 * Generated by asn1c-0.9.29-DF (http://lionet.info/asn1c)
 * From ASN.1 module "EfcDsrcApplication"
 * 	found in "../../asn1/../ttcn/AtsIS/lib/asn1/iso-patched/EfcDsrcApplication.asn"
 * 	`asn1c -no-gen-example -pdu=Iso21177AccessControlPdu -pdu=ExtendedAuthPdu -pdu=EnhancedAuthPdu -pdu=SecurityMgmtInfoPdu -pdu=SessionExtensionPdu -pdu=Iso21177AdaptorLayerPdu -pdu=EtsiTs103097Data -pdu=EtsiTs103097Certificate -fcompound-names`
 */

#include "SoundLevel.h"

asn_TYPE_member_t asn_MBR_SoundLevel_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SoundLevel, soundstationary),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Int1,
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
		"soundstationary"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SoundLevel, sounddriveby),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Int1,
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
		"sounddriveby"
		},
};
static const ber_tlv_tag_t asn_DEF_SoundLevel_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SoundLevel_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* soundstationary */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* sounddriveby */
};
asn_SEQUENCE_specifics_t asn_SPC_SoundLevel_specs_1 = {
	sizeof(struct SoundLevel),
	offsetof(struct SoundLevel, _asn_ctx),
	asn_MAP_SoundLevel_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_SoundLevel = {
	"SoundLevel",
	"SoundLevel",
	&asn_OP_SEQUENCE,
	asn_DEF_SoundLevel_tags_1,
	sizeof(asn_DEF_SoundLevel_tags_1)
		/sizeof(asn_DEF_SoundLevel_tags_1[0]), /* 1 */
	asn_DEF_SoundLevel_tags_1,	/* Same as above */
	sizeof(asn_DEF_SoundLevel_tags_1)
		/sizeof(asn_DEF_SoundLevel_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_SoundLevel_1,
	2,	/* Elements count */
	&asn_SPC_SoundLevel_specs_1	/* Additional specs */
};

